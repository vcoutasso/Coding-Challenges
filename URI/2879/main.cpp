#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int p;
    int win = 0;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &p);

        if (p == 1)
            continue;
        else
            win++;
    }

    printf("%d\n", win);


    return 0;
}
