#include <bits/stdc++.h>

using namespace std;

int main() {
    bool open = true;
    bool first = true;
    int idx;
    string str;

    while (cin) {
        getline(cin, str);
        while (idx = str.find_first_of('"'), idx != -1) {
            string rep = open ? "``" : "\'\'";
            str.replace(idx, 1, rep);
            open = !open;
        }
        if (!first) cout << endl;
        else first = false;

        cout << str;
    }

    return 0;
}
