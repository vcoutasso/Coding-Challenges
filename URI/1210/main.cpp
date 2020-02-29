#include <bits/stdc++.h>

using namespace std;

//  How many years
int N;
// Initial dist age
int I;
// Max years
int M;
// Price new
int P;
// Maintenance cost
vector<int> Ci;
// Price sell used
vector<int> Vi;

stack<int> troca;
stack<int> troca2;


int fn(int ano, int age, bool sell, int sum) {
  int aux;
  int aux2;


  if (sell || age == M) {
    sum += P;
    sum += Ci[0];
    sum -= Vi[age-1];
    age = 0;
    troca.push(ano);
  }
  else
      sum += Ci[age];

  if (ano < N) {
      aux = fn(ano+1, age+1, false, sum);
      aux2 = fn(ano+1, age+1, true, sum);
      if (aux < aux2) {
          if (ano <= int(troca.size()))
              troca.pop();
          return aux;
      }
      else
          return aux2;
      ///return aux < aux2 ? aux : aux2;
  }
  else
      return sum;

}

int f(int ano, int age) {
    int aux;
    int aux2;

    aux = fn(ano, age, false, 0);

    troca2 = troca;
    while (!troca.empty())
        troca.pop();

    aux2 = fn(ano, age, true, 0);

    if (aux < aux2)
        troca = troca2;

    return aux < aux2 ? aux : aux2;
}


int main() {

    int n;
    int sum;

    while (scanf("%d %d %d %d", &N, &I, &M, &P) != EOF) {

        for (int i = 0; i < M; i++) {
            scanf("%d", &n);
            Ci.push_back(n);
        }

        for (int i = 0; i < M; i++) {
            scanf("%d", &n);
            Vi.push_back(n);
        }

        sum = f(1, I);
        printf("%d\n", sum);

        while (!troca.empty()) {
            printf("%d ", troca.top());
            troca.pop();
        }

        printf("\n");

        Ci.clear();
        Vi.clear();

    }

    return 0;
}
