#include <bits/stdc++.h>

#define MAX_STR 51
#define N 112


using namespace std;

int main(int argc, char *argv[]) {
    int n;
    char str[N][MAX_STR];
    int a, t;

    while (scanf("%d", &n), n != 0) {
        int best = 0;
        int diff = numeric_limits<int>::max();
        for (int i = 0; i < n; i++) {
            scanf("%s", &str[i][0]);
            scanf("%d%d", &a, &t);
            if (a - t < diff) {
                diff = a - t;
                best = i;
            }
        }
        printf("%s\n", str[best]);
    }


    return 0;
}
