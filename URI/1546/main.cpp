#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, x;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &k);
    for (int j = 0; j < k; j++) {
        scanf("%d", &x);
        printf("%s\n", x == 1 ? "Rolien" : (x == 2) ? "Naej" : (x == 3) ? "Elehcim" : "Odranoel");
    }
  }


  return 0;
}
