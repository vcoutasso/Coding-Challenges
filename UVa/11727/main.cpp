#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    int s[3] = {0, 0, 0};

    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d%d%d", &s[0], &s[1], &s[2]);

        sort(begin(s), end(s));

        printf("Case %d: %d\n", i, s[1]);
    }


    return 0;
}
