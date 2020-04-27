#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, j1, j2, r, a;

    scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);

    int winner;

    if (a && r)
        winner = 2;
    else if (a && !r)
        winner = 1;
    else if (!a && r)
        winner = 1;
    else {
        int even;
        int odd;

        even = p == 1 ? 1 : 2;
        odd = even == 1 ? 2 : 1;

        int ans = j1 + j2;

        if (ans % 2 == 0)
            winner = even;
        else
            winner = odd;
    }

    printf("Jogador %d ganha!\n", winner);


    return 0;
}
