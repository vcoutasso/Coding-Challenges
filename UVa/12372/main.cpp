#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    int  l, w, h;
    int c = 1;

    scanf("%d", &t);

    while (t--) {
        scanf("%d%d%d", &l, &w, &h);

        bool good = true;

        if (l > 20 || w > 20 || h > 20)
            good = false;

        printf("Case %d: %s\n", c, good ? "good" : "bad");
        c++;
    }


    return 0;
}
