#include <stdio.h>

char *hw() {
    char *hw = "hw";
    return hw; 
}

int main() {
    printf("%s", hw());
    return 0;
}
