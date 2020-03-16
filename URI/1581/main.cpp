#include <bits/stdc++.h>

#define STR_MAX 21

using namespace std;

int main() {

  int n, k;
  char str[STR_MAX];
  set<string> s;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &k);

    s = set<string>();

    for (int j = 0; j < k; j++) {

      scanf("%s", str);
      s.insert(s.end(), string(str));
    }
    printf("%s\n", s.size() > 1 ? "ingles" : str);
  }



  return 0;
}
