#include <bits/stdc++.h>

#define MAX 50

using namespace std;

int main() {
    int t;
    char str[MAX];
    unsigned long long total = 0;

    scanf("%d", &t);

    while (t--) {
        scanf("%s", str);

        if (!strcmp(str, "donate")) {
            int amount;
            scanf("%d", &amount);
            total += amount;
        }
        else
            printf("%lld\n", total);
    }


    return 0;
}
