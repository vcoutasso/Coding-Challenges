#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    bool first = true;

    while (scanf("%d", &n), n != 0) {
        string str[n];
        int length[n], max, i;
        vector<string> words[n];

        first ? first = false : printf("\n");

        // Clear buffer
        getchar();

        for (i = 0; i < n; ++i) {
            getline(cin, str[i]);

            length[i] = -1;

            char* ptr = strtok(&str[i][0], " ");
            while (ptr != NULL) {
                words[i].push_back(string(ptr));
                length[i] += words[i].back().size() + 1;
                ptr = strtok(NULL, " ");
            }
        }

        max = *max_element(length, length+n);

        for (i = 0; i < n; ++i) {
            while (length[i]++ < max)
                printf(" ");

            for (auto it = words[i].begin(); it != words[i].end() - 1; ++it)
                printf("%s ", it->c_str());

            printf("%s\n", words[i].back().c_str());
        }

    }

    return 0;
}
