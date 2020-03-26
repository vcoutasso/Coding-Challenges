#include <bits/stdc++.h>

using namespace std;



int main(int argc, char *argv[]) {
    int n, m;
    int a, b;

    while (true) {
        scanf("%d%d", &n , &m);

        if (n == 0 || m == 0)
            break;

        char str[n][m];

        getchar();

        for (int i = 0; i < n; i++)
            scanf("%s", &str[i][0]);

        scanf("%d%d", &a, &b);

        int rep_lin = a / n;
        int rep_col = b / m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < rep_lin; j++) {
                for (auto& it : str[i]) {
                    for ( int k = 0; k < rep_col; k++)
                        printf("%c", it);
                }
                printf("\n");
            }
        }

        printf("\n");

    }

    return 0;
}
