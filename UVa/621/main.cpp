#include <bits/stdc++.h>

#define MAX 200

using namespace std;

int main() {
    int n;
    char str[MAX];

    scanf("%d", &n);

    while (n--) {
        char ans;
        scanf("%s", str);

        if (!strcmp(str, "1") || !strcmp(str, "4") || !strcmp(str, "78"))
            ans = '+';
        else if (str[strlen(str)-1] == '5' && str[strlen(str)-2] == '3')
            ans = '-';
        else if (str[0] == '9' && str[strlen(str) - 1] == '4')
            ans = '*';
        else
            ans = '?';

        printf("%c\n", ans);
       
    }


    return 0;
}
