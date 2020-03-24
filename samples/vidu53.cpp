#include "bits/stdc++.h"
using namespace std;
int f(string s){
    int n = s.size();
    int res = 0;
    for(int i = 0; i < n; i++){
        res += s[i] - '0';
    }
    return res;
}
int _abs(int x) {
    return x > 0 ? x : (-x);
}
int check(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] != 0) return 0;
    }
    return 1;
}
int arrayZero(std::vector<std::string> s){
    int a[4];
    for(int i = 0; i < s.size(); i++){
        a[i] = f(s[i]);
    }

    int i = 0;
    int cnt = 0;
    do {
    	if(check(a, 4)) return cnt;
    	int prev = a[0];
        for(int i = 0; i < 4; i++){
            if(i < 3) a[i] = _abs(a[i+1] - a[i]);
            else a[i] = _abs(a[i] - prev);
        }
        
        cnt += 1;
    }while(true);
}


int main(){
	vector<string> v; v.push_back("27");v.push_back("12");v.push_back("2000");v.push_back("1234");
	
	cout << arrayZero(v);
	return 0;
}
