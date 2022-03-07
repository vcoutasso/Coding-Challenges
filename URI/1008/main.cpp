#include <bits/stdc++.h>

using namespace std;

int main() {
    int id;
    float hours, rate;

    scanf("%d%f%f", &id, &hours, &rate);

    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2f\n", hours * rate);

    return 0;
}
