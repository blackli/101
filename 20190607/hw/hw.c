#include <stdio.h>

int main() {
    char str[] = "hw\n";
    for (int i = 0; i < sizeof(str)/sizeof(str[0]); i++) {
        printf("%c", str[i]);
    }
    return 0;
}
