#include <bits/stdc++.h>

using namespace std;

int c, n, x, y, xw, yw;

float distance () {
    return sqrt(pow(xw - x, 2) + pow(yw - y, 2));
}

int main(int argc, char *argv[]) {

    scanf("%d", &c);

    for (int i = 0; i < c; i++) {
        int close;
        float d = numeric_limits<float>::max();

        scanf("%d", &n);
        scanf("%d%d", &xw, &yw);

        for (int j = 1; j <= n; j++) {
            scanf("%d%d", &x, &y);
            int aux = distance();

            if (aux < d) {
                close = j;
                d = aux;
            }
            else if (aux == d){
                if (j < close)
                    close = j;
            }
        }

        printf("%d\n", close);

    }


    return 0;
}
