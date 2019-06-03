#include <stdio.h>

void knapsack(int weight[], int n, int package) {
    char result[package];
    for (int i = 0; i <= package; i++) {
        result[i] = 0;
    }
    result[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = package - weight[i]; j >= 0; j--) {
            if (result[j] == 1) {
                result[j+weight[i]] = 1;
            }
        }
    }

    for (int i = package; i >= 0; i--) {
        if (result[i] == 1) {
            printf("%d\n", i);
            return;
        }
    }
}

int main() {
    int input[] = {1, 3, 5};
    int package = 10;
    knapsack(input, sizeof(input)/sizeof(int), package);
    return 0;
}
