#include <bits/stdc++.h>

#define MAX_STRING_WIDTH 128

using namespace std;


int main() {
    char *name[MAX_STRING_WIDTH];
    float salary, sales, commission = 0.15;

    scanf("%s%f%f", name, &salary, &sales);

    printf("TOTAL = R$ %.2f\n", salary + sales * commission);

    return 0;
}
