#include <bits/stdc++.h>

int main() {
  int p1,p2,c1,c2;

  scanf("%d%d%d%d", &p1, &c1, &p2, &c2);

  int x = p1 * c1;
  int y = p2 * c2;

  if (x == y)
    printf("0\n");
  else
    printf("%d\n", (x > y) ? -1 : 1);

  return 0;
}
