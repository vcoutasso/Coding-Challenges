#include <bits/stdc++.h>

#define MAX 112345
#define INF 112345678

int n, f, c[MAX];

int enough(int d) {
  int ac = 0;

  for (int i = 0; i < n; i++)
    ac += d / c[i];
  return ac >= f;
}

int main() {
  int d, inf = 0, sup = INF;

  scanf("%d%d", &n, &f);

  for (int i = 0; i < n; i++)
    scanf("%d", &c[i]);

  while (sup - inf > 1) {
    d = (inf + sup) / 2;
    if (enough(d))
      sup = d;
    else
      inf = d;
  }

  printf("%d\n", sup);

  return 0;
}
