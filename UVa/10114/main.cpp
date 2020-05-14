#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, month_n;
    double pay, loan, dep;

    while (scanf("%d %lf %lf %d", &m, &pay, &loan, &n), m > 0) {
        int curr = 0;
        double curr_v = loan + pay;
        double old_dep;


        while (n--) {
            scanf("%d %lf", &month_n, &dep);

            while (month_n >= curr || n == 0) {
                if (curr < month_n) curr_v *= 1 - old_dep;
                else curr_v *= 1 - dep;
                if (curr > 0) loan -= pay;
                if (curr_v > loan) break;
                //printf("month: %d\nowes: %.2lf\nworth: %.2f\ndep: %.3f\n", curr, loan, curr_v, curr < month_n ? old_dep : dep);
                curr++;
            }
            old_dep = dep;
        }
        printf("%d month%s\n", curr, curr > 1 ? "s" : "");
    }


    return 0;
}
