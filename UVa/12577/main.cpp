#include <bits/stdc++.h>

#define MAX 50

using namespace std;

int main() {
    int c = 1;
    char str[MAX];

    while (scanf("%s", str), strcmp(str, "*"))
        printf("Case %d: %s\n", c++, !strcmp(str, "Hajj") ? "Hajj-e-Akbar" : "Hajj-e-Asghar");

    return 0;
}
