#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE 1123

int main() {
    int n;
    int max = 26;

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        char str[MAX_SIZE];

        fgets(str, MAX_SIZE, stdin);
        str[strlen(str)-1] = '\0';

        set<char> s(str, str+strlen(str));

        int k = s.size();

        if (find(s.begin(), s.end(), ' ') != s.end())
            k--;

        if (find(s.begin(), s.end(), ',') != s.end())
            k--;

        if (k == max)
            printf("frase completa\n");
        else if (k >= max / 2)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }

    return 0;
}
