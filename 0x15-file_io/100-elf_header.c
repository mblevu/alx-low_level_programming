#include "main.h"

/**
 * print_magic - prints the ELF magic numbers
 * @e_ident: pointer to an array with magic numbers
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:    ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x%c", e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
	}
}

/**
 * print_elf_osabi - print OS/ABI
 * @header: pointer to header
 */

void print_elf_osabi(Elf64_Ehdr *header)
{
	printf("OS?ABI:                ");
	
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("Unix - Sytem V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP_UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: 0x%x>\n", header->e_ident[EI_OSABI]);
			break;
	}

	printf("ABI Version:             %d\n", header->e_ident[EI_ABIVERSION]);

}

/**
 * print_type - print ELF file type
 * @header: pointer to ELF header struct
 */
void print_type(Elf64_Ehdr *header)
{
	printf("Type:\t\t\t\t");
	switch (header->e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("0x%x (Unknown type)\n", header->e_type);
		break;
	}
}

/**
 * print_entry - print entry point address
 * @header: pointer to ELF header struct
 */
void print_entry(Elf64_Ehdr *header)
{
	printf("Entry point address:\t\t%#lx\n", header->e_entry);
}


/**
 * read_elf_header - read ELF header
 * @fd: file descriptor
 * Return: pointer to ELF header
 */

Elf64_Ehdr *read_elf_header(int fd)
{
	Elf64_Ehdr *ehdr = malloc(sizeof(*ehdr));

	if (!ehdr)
		return (NULL);
	if (lseek(fd, 0, SEEK_SET) == -1)
		return (NULL);
	if (read(fd, ehdr, sizeof(*ehdr)) != sizeof(*ehdr))
		return (NULL);
	return (ehdr);

}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("read");
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "%s: Error: Not an ELF file\n", argv[0]);
		exit(98);
		}

	if (header.e_ident[EI_CLASS] != ELFCLASS32 &&
	header.e_ident[EI_CLASS] != ELFCLASS64)
	{
		fprintf(stderr, "%s: Error: Not a 32-bit or 64-bit ELF file\n", argv[0]);
		exit(98);
	}

	return (0);
}
