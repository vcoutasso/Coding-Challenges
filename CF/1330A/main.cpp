#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    int n, x;

    scanf("%d", &t);

    while (t--) {
        scanf("%d%d", &n, &x);

        int aux;
        vector<int> vec;

        for (int i = 0; i < n; i++) {
            scanf("%d", &aux);
            vec.push_back(aux);
        }

        set<int> s(vec.begin(), vec.end());

        while (!s.empty()) {
            auto it = s.end();
            it--;

            int size = s.size();
            int v = *it;

            if (size + x >= v) {
                printf("%d\n", size + x);
                break;
            }
            else
                s.erase(v);
        }

        if (s.empty()) printf("%d\n", x);

    }


    return 0;
}
