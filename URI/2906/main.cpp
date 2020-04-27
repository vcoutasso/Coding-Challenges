#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    set<string> add;
    string mail;
    int idx;

    scanf("%d", &n);

    while (n--) {
        cin >> mail;

        while (idx = mail.find_first_of('.'), idx != -1) {
            if (idx > mail.find_first_of('@')) break;
            mail.erase(idx, 1);
        }


        if (idx = mail.find_first_of('+'), idx != -1)
            mail.erase(idx, mail.find_first_of('@') - idx);

        add.insert(mail);
    }

    printf("%d\n", add.size());

    return 0;
}
