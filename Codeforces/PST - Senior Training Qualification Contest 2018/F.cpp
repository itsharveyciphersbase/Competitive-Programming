#include <bits/stdc++.h>
using namespace std;
map<int, long long> ri, le;
map<int, long long> fin;
int main(void) {
   freopen("battery.in", "r", stdin);
	int test, n;
	scanf("%d", &test);
	while(test--){
	    ri.clear();
       le.clear();
       fin.clear();
	    string in;
	    cin >> in;
	    int n;
	    scanf("%d", &n);
	    vector<int> p (n);
	    for(int i = 0; i < n; ++i){
	        scanf("%d", &p[i]);
	        fin[p[i]]++;
	    }
	    for(int i = 0; i < n; ++i){
	        for(int j = 0; j < n; ++j){
	            if(in[0] == '-'){
	                le[p[i] - p[j]]++;
	            }else{
	                le[p[i] + p[j]]++;
	            }
	        }
	    }

	    long long ans = 0;
	    //meetinthemiddle
	    if(in[1] == '-'){
	        for(int i = 0; i < n; ++i){
    	        for(int j = 0; j < n; ++j){
    	            if(in[2] == '-'){
    	                ri[-1 * p[i] - p[j]]++;
    	            }else{
    	                ri[-1 * p[i] + p[j]]++;
    	            }
    	        }
    	    }
	        for(auto s : le){
	            for(auto t : fin){
	                ans += s.second * ri[t.first - s.first] * t.second;
	            }
	        }
	    }else{
	        for(int i = 0; i < n; ++i){
    	        for(int j = 0; j < n; ++j){
    	            if(in[2] == '-'){
    	                ri[p[i] - p[j]]++;
    	            }else{
    	                ri[p[i] + p[j]]++;
    	            }
    	        }
    	    }
	        for(auto s : le){
	            for(auto t : fin){
	                ans += s.second * ri[t.first - s.first] * t.second;
	            }
	        }
	    }
	    printf("%lld\n", ans);
	}
}
