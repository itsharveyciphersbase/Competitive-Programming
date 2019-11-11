#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'maximumTotalWeight' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY weights
 *  2. INTEGER_ARRAY tasks
 *  3. INTEGER p
 */

int dp[2001][5001];

int maximumTotalWeight(vector<int> weights, vector<int> tasks, int p) {
    for(int i = 1; i <= tasks.size(); ++i){
        for(int j = 1; j <= p; ++j){
            dp[i][j] = dp[i - 1][j];
            if(j >= (tasks[i] * 2) && dp[i][j] < dp[i - 1][j - (tasks[i] * 2)] + weights[i]){
                dp[i][j] = dp[i - 1][j - (tasks[i] * 2)] +weights[i];
            }
        }
    }
    return dp[tasks.size()][p];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string weights_count_temp;
    getline(cin, weights_count_temp);

    int weights_count = stoi(ltrim(rtrim(weights_count_temp)));

    vector<int> weights(weights_count);

    for (int i = 0; i < weights_count; i++) {
        string weights_item_temp;
        getline(cin, weights_item_temp);

        int weights_item = stoi(ltrim(rtrim(weights_item_temp)));

        weights[i] = weights_item;
    }

    string tasks_count_temp;
    getline(cin, tasks_count_temp);

    int tasks_count = stoi(ltrim(rtrim(tasks_count_temp)));

    vector<int> tasks(tasks_count);

    for (int i = 0; i < tasks_count; i++) {
        string tasks_item_temp;
        getline(cin, tasks_item_temp);

        int tasks_item = stoi(ltrim(rtrim(tasks_item_temp)));

        tasks[i] = tasks_item;
    }

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = maximumTotalWeight(weights, tasks, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
