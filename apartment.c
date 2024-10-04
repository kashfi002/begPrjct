#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        if (n == 1 || n == 2) {
            printf("1\n");
        } else {
            int effective_n = n - 2;
            int additional_floors = (effective_n + x - 1) / x;
            printf("%d\n", 1 + additional_floors);
        }
    }

    return 0;
}