#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    char cobol[] = "cobol";

    while (getline(cin, str)) {
        int i = 0;

        char *ptr = strtok(&str[0], "-");
        while(ptr != NULL && i < strlen(cobol)) {
            if (tolower(ptr[0]) == cobol[i] || tolower(ptr[strlen(ptr)-1]) == cobol[i])
                ++i;
            ptr = strtok(NULL, "-");
        }
        printf("%s\n", i == strlen(cobol) ? "GRACE HOPPER" : "BUG");
    }

    return 0;
}
