#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *hw() {
    char *hw = (char *)malloc(sizeof(char)*100);
    strcpy(hw, "hw\n");
    return hw;
}

int main() {
    char *hwp = hw();
    printf("%s", hwp);
    free(hwp);
    return 0;
}
