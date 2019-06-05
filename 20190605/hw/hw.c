#include <stdio.h>

struct t {
    long c;
    char a;
    int b;
};

int main() {
    // printf("%d\n", sizeof(struct t));
    char arr[] = {'h', 'w', '\n'};
    for (int i = 0; i < sizeof(arr)/sizeof(char); i++) {
        printf("%c", arr[i]);
    }
    return 0;
}
