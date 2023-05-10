#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <elf.h>

#define MAX_BUF_SIZE 1024
#define MAXSIZE 1204
#define STDERR_FILENO 2

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_magic(unsigned char *e_ident);
Elf64_Ehdr *read_elf_header(int fd);
void print_elf_osabi(Elf64_Ehdr *header);
void print_type(Elf64_Ehdr *header);
void print_entry(Elf64_Ehdr *header);


#endif
