#include <bits/stdc++.h>

using namespace std;

void f(int& amount, int value) {
    int count = 0;

    while (amount >= value) {
        amount -= value;
        count++;
    }

    printf("%d nota(s) de R$ %d,00\n", count, value);
}

int main() {
    int amount;
    int values[] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &amount);
    printf("%d\n", amount);

    for (auto& value: values) {
        f(amount, value);
    }

    return 0;
}
