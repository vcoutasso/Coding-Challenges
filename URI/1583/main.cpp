#include <bits/stdc++.h>

using namespace std;

void troca(int i, int j, int n, int m, char *mx) {
  if (i < 0 || j < 0 || i >= n || j >= m)
    return;

  if (mx[i*m+j] == 'A') {
    mx[i * m + j] = 'T';
    troca(i-1, j, n, m, mx);
    troca(i+1, j, n, m, mx);
    troca(i, j-1, n, m, mx);
    troca(i, j+1, n, m, mx);
  }
}

int main() {
  int n, m;

  while (scanf("%d%d", &n, &m)) {
    char mx[n][m];
    char *ptr = &mx[0][0];

    if (m == 0 && n == 0)
      break;

    // get \n
    getchar();

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        scanf("%c", &mx[i][j]);
      }
      // get \n
      getchar();
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (mx[i][j] == 'T') {
          troca(i-1, j, n, m, ptr);
          troca(i+1, j, n, m, ptr);
          troca(i, j-1, n, m, ptr);
          troca(i, j+1, n, m, ptr);
        }
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        printf("%c", mx[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }


  return 0;
}
