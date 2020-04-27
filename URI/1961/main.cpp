#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, n;
    int curr;
    int max;
    int min;
    string ans = "YOU WIN";

    scanf("%d%d%d", &p, &n, &curr);

    while (--n) {
        max = curr + p;
        min = curr - p;
        scanf("%d", &curr);
        if (curr > max || curr < min)
            ans = "GAME OVER";
    }

    printf("%s\n", ans.c_str());

    return 0;
}
