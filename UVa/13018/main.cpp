#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    bool first = true;

    while (scanf("%d%d", &n, &m) != EOF) {
        map<int, int> prob;
        int sum;

        if (first) first = !first;
        else printf("\n");

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                sum = i + j;

                if (prob.count(sum) == 0)
                    prob.emplace(sum, 1);
                else
                    prob.at(sum) += 1;
            }
        }

        vector<pair<int, int>> vec;

        copy(prob.begin(), prob.end(), back_inserter(vec));

        sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            return a.second > b.second;
        });

        int highest = vec[0].second;
        vector<int> ans;

        for (auto &it : vec) {
            if (it.second == highest)
                ans.push_back(it.first);
            else
                break;
        }

        sort(ans.begin(), ans.end());

        for (auto& it : ans)
            printf("%d\n", it);

    }

    return 0;
}
