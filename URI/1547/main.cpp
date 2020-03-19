#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, qt, s;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int v, m=numeric_limits<int>::max(), k=0;
        scanf("%d%d", &qt, &s);
        for (int j = 0; j < qt; j++) {
            scanf("%d", &v);
            int x = abs(s -v);
            if (x < m) {
                m = x;
                k = j;
            }
        }
        printf("%d\n", k+1);
    }

    return 0;
}
