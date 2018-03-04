#include <bits/stdc++.h>

using namespace std;

bool vowel(char x) {
    return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u';
}

int main(void) {
    string input;
    cin >> input;
    char last = input[1], before_last = input[0];
    putchar(input[0]);
    if(input.size() > 1)putchar(input[1]);
    for (int i = 2; i < input.size(); ++i) {
        if (!vowel(input[i]) && last != ' ' && before_last != ' ') {
            if (!vowel(last) && !vowel(before_last) && (input[i] != last || input[i] != before_last)) {
                putchar(' ');
                before_last = last;
                last = ' ';
            }
        }
        before_last = last;
        last = input[i];
        putchar(input[i]);
    }
}
