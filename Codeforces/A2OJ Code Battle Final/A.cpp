#include <bits/stdc++.h>

using namespace std;

int main(void) {
    string input;
    cin >> input;
    vector<pair<char, char>> changes;
    for (int i = 0; i < input.size() / 2; ++i) {
        if (input[i] != input[input.size() - 1 - i]) {
            changes.push_back(make_pair(input[i], input[input.size() - 1 - i]));
        }
    }
    char joker = input[input.size() / 2];
    if (!changes.size() ||
        (changes.size() == 2 && changes[0].first == changes[1].second && changes[0].second == changes[1].first)
        ||(changes.size() == 2 && changes[0].second == changes[1].second && changes[0].first == changes[1].first)
        || (input.size() % 2 && changes.size() == 1 && (changes[0].first == joker || changes[0].second == joker))) {
        puts("YES");
    } else puts("NO");
}