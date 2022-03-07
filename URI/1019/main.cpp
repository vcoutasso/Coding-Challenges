#include <bits/stdc++.h>

using namespace std;

int main() {
    int seconds;

    scanf("%d", &seconds);

    int minutes = (seconds / 60) % 60;
    int hours = seconds / 3600;

    printf("%d:%d:%d\n", hours, minutes, seconds % 60);

    return 0;
}
