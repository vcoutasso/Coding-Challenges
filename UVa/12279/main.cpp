#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int c = 1;
    int tmp;

    while (scanf("%d", &n), n) {
        int ans = 0;

        while (n--) {
            scanf("%d", &tmp);

            if (!tmp)
                ans--;
            else
                ans++;
        }

        printf("Case %d: %d\n", c, ans);
        c++;
    }

    return 0;
}
