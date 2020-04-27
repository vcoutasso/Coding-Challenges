#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, m, x, y;

    while(scanf("%d", &k), k) {
        string ans;

        scanf("%d%d", &n, &m);

        while (k--) {
            scanf("%d%d", &x, &y);

            if (k < 0) break;

            if (x == n || y == m)
                ans = "divisa";
            else if (x > n) {
                if (y > m)
                    ans = "NE";
                else
                    ans = "SE";
            }
            else {
                if (y > m)
                    ans = "NO";
                else
                    ans = "SO";
            }

            printf("%s\n", ans.c_str());
        }
    }


    return 0;
}
