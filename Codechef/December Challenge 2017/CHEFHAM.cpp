#include<bits/stdc++.h>
 
using namespace std;
int A[100001], B[100001];
int main(void){
    int testcases;
    scanf("%d",&testcases);
    while(testcases--){
        int n;scanf("%d", &n);
        for(int i = 0; i < n; ++i){
            scanf("%d", &A[i]);
            if(i != n - 1)
                B[i + 1] = A[i];
            else B[0] = A[i];
        }
        if(n == 2){
            if(A[0] == A[1]){
                printf("%d\n %d %d\n", 0, A[1], A[0]);
            }else printf("%d\n %d %d\n", 2, A[1], A[0]);
            continue;
        }
        int z = -1;
        for(int i = 0; i < n; ++i){
            if(A[i] == B[i] && z == -1){
                z = i;
            }else if(A[i] == B[i]) {
                B[i] += B[z];
                B[z] = B[i] - B[z];
                B[i] -= B[z];
                z = -1;
            }
        }
        for(int i = 0;z != -1 &&  i < n; ++i){
            if(A[i] != B[z] && B[z] != B[i]){
                B[i] += B[z];
                B[z] = B[i] - B[z];
                B[i] -= B[z];
                z = -1;
                break;
            }
        }
        if(z == -1)
            printf("%d\n", n);
        else
            printf("%d\n", n - 1);
        for(int i = 0; i < n; ++i){
            printf("%d ", B[i]);
        }
        putchar('\n');
    }
} 