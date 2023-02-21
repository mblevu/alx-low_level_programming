#include <unistd.h>

int main() {
    char text[] = "_putchar\n";
    int i = 0;
    while (text[i] != '\0') {
        write(1, &text[i], 1);
        i++;
    }
    return 0;
}
