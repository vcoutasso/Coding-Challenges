#include <bits/stdc++.h>

using namespace std;

char one[] = "one";
char two[] = "two";
char three[] = "three";
char input[10];

int hamming() {
    int dist = 0;

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] != one[i])
            dist++;
    }

    return dist;
}

int main() {
    int t;

    scanf("%d", &t);

    while (t--) {
        scanf("%s", input);

        if (strlen(input) == 5)
            printf("%d\n", 3);
        else
            printf("%d\n", hamming() <= 1 ? 1 : 2);
    }

    return 0;
}
