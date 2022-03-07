#include <bits/stdc++.h>

using namespace std;

int main() {
    int ca, qa, cb, qb;
    float pa, pb;

    scanf("%d%d%f", &ca, &qa, &pa);
    scanf("%d%d%f", &cb, &qb, &pb);

    printf("VALOR A PAGAR: R$ %.2f\n", (qa * pa) + (qb * pb));

    return 0;
}
