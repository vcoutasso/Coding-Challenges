#include <bits/stdc++.h>

using namespace std;

int main() {
    float a, b, c;
    float wa = 2, wb = 3, wc = 5;

    scanf("%f%f%f", &a, &b, &c);

    a *= wa;
    b *= wb;
    c *= wc;

    printf("MEDIA = %.1f\n", (a + b + c) / (wa + wb + wc));

    return 0;
}
