#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    bool first = true;

    while (cin) {
        getline(cin, str);
        if (!first) cout << endl;
        else first = false;
        cout << str;
    }

    return 0;
}
