#include<bits/stdc++.h>
using namespace std;

int n;

int main(void){
    string in1;
    stringstream in;
    getline(cin, in1);
    in << in1;
    in >> n;
    string input = "";
    for(int i = 0; i < n; ++i){
        getline(cin, input);
        for(int j = 3; j < input.size(); ++j){
            if(input[j] == 't' && input[j - 1] == 'o' && input[j - 2] == 'n' &&(j + 1 == input.size() || input[j + 1] == ' ')){
                cout << "Real Fancy\n";
                break;
            }
            if(j + 1 == input.size()){
                cout << "regularly Fancy\n";
            }
        }
    }
}