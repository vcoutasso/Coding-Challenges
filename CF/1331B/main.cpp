#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    int b = -1, c = -1;

    scanf("%d", &a);


    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            if (b == -1) {
                b = i;
                if (b * i == a)
                    c = i;
            }
            else if (c == -1)
                c = i;
            else
                break;
        }
    }


    printf("%d%d\n", b, c);


    return 0;
}
