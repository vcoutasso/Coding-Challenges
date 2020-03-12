#include <bits/stdc++.h>

int main() {
  int k,l;

  scanf("%d%d", &k, &l);

  k--;
  l--;

  if (k / 8 != l / 8)
    printf("final\n");
  else if (k / 4 != l / 4)
    printf("semifinal\n");
  else if (k / 2 != l / 2)
    printf("quartas\n");
  else
    printf("oitavas\n");


  return 0;
}
