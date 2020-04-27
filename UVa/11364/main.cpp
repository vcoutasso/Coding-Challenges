#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, x;

    scanf("%d", &t);

    while (t--) {
        int max = 0;
        int min = numeric_limits<int>::max();
        int ans = numeric_limits<int>::max();

        scanf("%d", &n);

        while (n--) {
            scanf("%d", &x);

            if (x > max)
                max = x;
            if (x < min)
                min = x;
        }

        for (int i = min; i <= max; i++) {
            int tmp = 2 * ((max - i) - (i - min));
           
            if (tmp < ans)
                ans = tmp;
        }

        printf("%d\n", abs(ans));
    }

    return 0;
}
