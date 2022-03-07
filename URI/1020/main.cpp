#include <bits/stdc++.h>

using namespace std;

int main() {
    int days;

    scanf("%d", &days);

    int years = days / 365;
    int months = (days - years * 365) / 30;
    days -= (years * 365) + (months * 30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}
