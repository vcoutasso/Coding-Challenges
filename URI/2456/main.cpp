#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

    vector<int> v(5);

    for (int i = 0; i < 5; i++)
        scanf("%d", &v[i]);

    vector<int> asc = v;
    vector<int> desc = v;

    sort(asc.begin(), asc.end());
    sort(desc.begin(), desc.end(), greater<int>());

    if (asc == v)
        printf("C\n");
    else if (desc == v)
        printf("D\n");
    else
        printf("N\n");


    return 0;
}
