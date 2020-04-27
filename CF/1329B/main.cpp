#include <bits/stdc++.h>

using namespace std;

bool test1(vector<unsigned int> &a, int n, int d) {
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i-1]) return false;
    }

    if (a[n-1] > d) return false;

    return true;
}


bool test2(vector<unsigned int> &a, int n) {
    int b[n];

    b[0] = a[0];

    for (int i = 1; i < n; i++) {
        b[i] = b[i-1] ^ a[i];

        if (b[i] <= b[i-1]) return false;
    }


    return true;
}

int main() {
    int t;
    int d, m;

    scanf("%d", &t);

    while (t--) {

        scanf("%d%d", &d, &m);

        int pos = 0;

        for (int n = 1; n <= d; n++) {
            vector<unsigned int> a(n);

            for (int i = 1; i <= d; i++) {
                iota(a.begin(), a.end(), i);

            do {
                if (test1(a, n, d) && test2(a, n)) {
                    pos++;
                    for (auto& it : a)
                        printf("%d ", it);
                    printf("\n");
                }

            } while(next_permutation(a.begin(), a.end()));
            }

        }

        pos %= m;

        printf("ANS: %d\n", pos);
       
    }

    return 0;
}
