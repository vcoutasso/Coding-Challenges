#include <bits/stdc++.h>

#define MAX 1123

using namespace std;

int n, c, t1, t2;
int f[MAX];

int rec(int k, int t, int n) {
    int a = 0, b = 0;
    int i = 1;
    int ans;

    if (k >= n-1) {
        if (n == 0)
            return 0;
        else
            return t1;
    }

    if ((f[k+1] - f[k]) % t == 0) {
        printf("%d: %d %d %d %d\n", t, f[k+1], f[k], n, k);
        ans = (f[k+1] - f[k]) / t;
        i = 2;
    }
    else ans = t1;

    printf("1:%d ", k);
    k += i;
    printf("2:%d\n", k);
    n -= i;
        
    a = rec(k, t1, n);
    b = rec(k, t2, n);

    if ( a == 0 ) a = INT_MAX;
    if ( b == 0 ) b = INT_MAX;

    return ans + min(a, b);
}

int main() {

    while (scanf("%d%d%d%d", &n, &c, &t1, &t2) != EOF) {
        int ans = 0;

        if (t1 > t2) {
            int tmp;

            tmp = t1;
            t1 = t2;
            t2 = t1;
        }

        for (int i = 0; i < n; i++) scanf("%d", &f[i]);

        sort(f, f + n);

        //for (int i = 0; i < n; i++) printf("%d ", f[i]);

        ans = min(rec(0, t1, n), rec(0, t2, n));

        printf("%d\n", ans);
    }


    return 0;
}
