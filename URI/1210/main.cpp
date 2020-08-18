#include <bits/stdc++.h>

#define MAX 2123

using namespace std;

int N;
int I;
int M;
int P;
int Ci[MAX];
int Vi[MAX];

int memo[MAX][MAX];
int nxt[MAX][MAX];

int dp(int t, int age) {
  int ch1, ch2 = numeric_limits<int>::max();
  if (t == N + 1) return 0;
  if (memo[t][age] != -1) return memo[t][age];

  ch1  = Ci[0] + P - Vi[age] + dp(t + 1, 1);

  if (age < M) ch2  = Ci[age] + dp(t + 1, age + 1);

  nxt[t][age] = ch1 <= ch2 ? 1 : age + 1;

  return memo[t][age] = min(ch1, ch2);
}

int main() {

  int t, age, first;

  while (scanf("%d %d %d %d", &N, &I, &M, &P) != EOF) {

    for (int i = 0; i <= M - 1; i++) scanf("%d", &Ci[i]);
    for (int i = 1; i <= M; i++) scanf("%d", &Vi[i]);

    memset(memo, -1, sizeof(memo));
    printf("%d\n", dp(1, I));

    t = 1;
    first = 1;
    age = I;

    do {
      if (nxt[t][age] == 1) {
        if (!first) printf(" ");
        printf("%d", t);
        first = 0;
      }

      age = nxt[t++][age];
    } while (t <= N);

    printf("%s\n", first ? "0" : "");

  }

  return 0;
}
