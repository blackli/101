#include <iostream>

using namespace std;

int main() {
    char str[] = {'h', 'w', '\n'};
    for (int i = 0; i < sizeof(str)/sizeof(str[0]); i++) {
        printf("%c", str[i]);
    }
    return 0;
}
