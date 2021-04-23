#include <stdio.h>

int main(int argc, char *argv[]) {
    int m, n;

    while ((scanf("%d", &m)) != EOF) {
        int i, coins[m];
        
        for (i = 0; i < m; i++) {
            scanf("%d", &coins[i]);
        }

        scanf("%d", &n);

        int result = 0;
        for (i = 0; i < m; i += n) {
            result += coins[i];
        }

        printf("%d\n", result);
    }

    return 0;
}