#include <stdio.h>
#include <string.h>

int main() {
    char *hw1 = "hw";
    char *hw2 = "hw";
    char hw[10];
    strcpy(hw, hw1);
    strcat(hw, hw2);
    printf("%s", hw);
    return 0;
}
