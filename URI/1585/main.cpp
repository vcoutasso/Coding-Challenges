#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, y, n;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d%d", &x, &y);
    printf("%d cm2\n", x * y / 2);
  }

  return 0;
}
