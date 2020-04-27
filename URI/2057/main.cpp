#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, t, f;

    scanf("%d%d%d", &s, &t, &f);

    int res = s + t + f;

    if (res >= 24)
        res -= 24;
    if (res < 0)
        res += 24;

    printf("%d\n", res);


    return 0;
}
