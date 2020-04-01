#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int n,m;

    scanf("%d%d", &n, &m);

    int mx[n][m];
    int leftmost_nz = -1;
    bool only_z = false;
    char output = 'S';


    for (int i = 0; i < n; i++) {
        bool zeros = true;
        bool check = true;
        for (int j = 0; j < m; j++) {
            scanf("%d", &mx[i][j]);
            if (mx[i][j] != 0) zeros = false;
            if (only_z && mx[i][j] != 0) output = 'N';
            if (check && j > leftmost_nz && mx[i][j] != 0) {
                leftmost_nz = j;
                check = false; // update at most once per row
            }
            else if (j <= leftmost_nz && mx[i][j] != 0) output = 'N';
        }
        only_z = zeros;
    }

    printf("%c\n", output);

    return 0;
}
