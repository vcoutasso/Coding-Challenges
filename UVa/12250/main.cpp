#include <bits/stdc++.h>

#define MAX 50

using namespace std;

int main() {
    char str[MAX];
    int c = 1;

    while (scanf("%s", str), strcmp(str, "#")) {
        printf("Case %d: ", c);
        c++;

        if (!strcmp(str, "HELLO"))
            printf("ENGLISH\n");
        else if (!strcmp(str, "HOLA"))
            printf("SPANISH\n");
        else if (!strcmp(str, "HALLO"))
            printf("GERMAN\n");
        else if (!strcmp(str, "BONJOUR"))
            printf("FRENCH\n");
        else if (!strcmp(str, "CIAO"))
            printf("ITALIAN\n");
        else if (!strcmp(str, "ZDRAVSTVUJTE"))
            printf("RUSSIAN\n");
        else
            printf("UNKNOWN\n");

    }


    return 0;
}
