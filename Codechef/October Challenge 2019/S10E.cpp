#include<bits/stdc++.h>

using namespace std;
int prices[101];

int get_mini(int index){
	int mini = INT_MAX, cap = 5;
	for (int i = index - 1; i > -1 && cap --; --i)
	{
		mini = min(mini, prices[i]);
	}
	return mini;
}

int main(void){
	int testcases;
	scanf("%d", &testcases);
	while(testcases--){
		int n, good = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &prices[i]);
			if(get_mini(i) > prices[i]) good++;
		}
		printf("%d\n", good);
	}
}