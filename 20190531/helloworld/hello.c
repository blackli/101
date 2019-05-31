#include <stdio.h>
#include <string.h>

int main() {
    char hello[100];
    strcpy(hello, "hello");
    char *world = "world";
    printf("%s %s\n", hello, world);
    return 0;
}
