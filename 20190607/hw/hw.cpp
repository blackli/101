#include <iostream>

using namespace std;

int main() {
    //char str[] = {'h', 'w', '\n'};
    char str[] = "hw\n";
    for (int i = 0; i < sizeof(str)/sizeof(str[0]); i++) {
        cout << str[i];
    }
    return 0;
}
