#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int n, m;

    while (true) {
        scanf("%d%d", &n, &m);
        if (n == 0 || m == 0) break;

        int mx[n][m];
        int v[m];

        int one = 1;
        int two = 1;
        int three = 1;
        int four = 1;

        for (int i = 0; i < n; i++) {
            int acc = 0;
            for (int j = 0; j < m; j++) {
                scanf("%d", &mx[i][j]);
                acc += mx[i][j];
            }
            if (acc == m)
                one = 0;
            if (acc == 0)
                four = 0;
        }

        for (int j = 0; j < m; j++) {
            bool only_z = true;
            bool only_o = true;
            for (int i = 0; i < n; i++) {
                if (mx[i][j] != 0) only_z = false;
                if (mx[i][j] != 1) only_o = false;
            }
            if (only_z)
                two = 0;
            if (only_o)
                three = 0;

        }

        printf("%d\n", one + two + three + four);
    }



    return 0;
}
