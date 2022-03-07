#include <bits/stdc++.h>

using namespace std;

int main() {
    int time, speed;
    float autonomy = 12;

    scanf("%d%d", &time, &speed);

    printf("%.3f\n", (time * speed) / autonomy);

    return 0;
}
