#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;

    scanf("%d%d", &x, &y);

    printf("%s\n", (x > 0 && x <= 27) && (y >= 0 && y <= 27) ? "IN" : "OUT");

    return 0;
}
