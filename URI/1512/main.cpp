#include <bits/stdc++.h>

#define MAX 1123456789

using namespace std;

int mdc(int a, int b) {
    if (!b) return a;
    return mdc(b, a % b);
}

int main(int argc, char *argv[]) {
    int n, a, b;

    while (true) {
        scanf("%d%d%d", &n, &a, &b);

        if (!n && !a && !b)
            break;

        int acc = 0;
        acc += n / a;
        acc += n / b;
        acc -= n / ((a * b) / mdc(a,b));

        printf("%d\n", acc);
    }


    return 0;
}
