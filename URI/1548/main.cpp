#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int v[1234];
        scanf("%d", &m);
        for (int j = 0; j < m; j++) {
            scanf("%d", v+j);
        }
        vector<int> vec(v,v+m);
        sort(vec.begin(), vec.end(), greater<int>());

        int k = 0;

        for (int c = 0; c < m; c++)
            k += v[c] == vec[c] ? 1 : 0;

        printf("%d\n", k);
    }
   

    return 0;
}
