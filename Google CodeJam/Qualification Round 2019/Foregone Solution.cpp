#include<bits/stdc++.h>
using namespace std;

int cases = 1;
int main(void){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        string InputNumber;
        cin >> InputNumber;
        string Output1 = "", Output2 = "";
        for(int i = 0; i < InputNumber.size(); ++i){
            char tmp = InputNumber[i];
            if(InputNumber[i] == '1' || InputNumber[i] == '0' 
            || InputNumber[i] == '5'){
                Output1 += InputNumber[i];
                if(Output2.size())Output2 += '0';
            }else if(InputNumber[i] != '5'){
                tmp --;
                Output1 += '1';
                Output2 +=  tmp;
            }
        }
        cout << "Case #" << cases++ << ": " << Output1 << " " << Output2 << "\n";
    }
}
