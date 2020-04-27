#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    char action[100];

    scanf("%d%d", &n, &m);

    while (m--) {
        scanf("%s", action);

        if (!strcmp("clicou", action))
            n--;
        else
            n += 1;
    }

    printf("%d\n", n);

    return 0;
}
