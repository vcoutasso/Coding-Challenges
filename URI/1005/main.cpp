#include <bits/stdc++.h>

using namespace std;

int main() {
    float a, b;
    float wa = 3.5, wb = 7.5;

    scanf("%f%f", &a, &b);

    a *= wa;
    b *= wb;

    printf("MEDIA = %.5f\n", (a + b) / (wa + wb));

    return 0;
}
