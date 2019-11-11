#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'finalInstances' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER instances
 *  2. INTEGER_ARRAY averageUtil
 */

int finalInstances(int instances, vector<int> averageUtil) {
    int tmp = 0;
    for(int i = 0; i < averageUtil.size(); tmp != instances ? (i+=11, instances = tmp): ++i){
        tmp = instances;
        if(averageUtil[i] < 25){
            if(instances > 1){
                tmp = instances / 2 + instances % 2;
            }
        }
        if(averageUtil[i] > 60){
            long temp = instances * 2;
            long maxi = 2L * 100000000;
            if(temp <= maxi && temp / 2L == instances){
                tmp = temp;
            }
        }
    }
    return instances;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string instances_temp;
    getline(cin, instances_temp);

    int instances = stoi(ltrim(rtrim(instances_temp)));

    string averageUtil_count_temp;
    getline(cin, averageUtil_count_temp);

    int averageUtil_count = stoi(ltrim(rtrim(averageUtil_count_temp)));

    vector<int> averageUtil(averageUtil_count);

    for (int i = 0; i < averageUtil_count; i++) {
        string averageUtil_item_temp;
        getline(cin, averageUtil_item_temp);

        int averageUtil_item = stoi(ltrim(rtrim(averageUtil_item_temp)));

        averageUtil[i] = averageUtil_item;
    }

    int result = finalInstances(instances, averageUtil);

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
