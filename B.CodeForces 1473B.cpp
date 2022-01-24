#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin >> q;
	while(q--){
		string s,t;
		cin >> s >> t;
		if(s.size() < t.size()){
			string temp = s;
			s = t;
			t = temp;
		}

		string ans = "";
		int i = 0, j = 0,flag = 1;
		while(i < s.size() && j < t.size()){
			if(s[i] == t[j]){
				ans += s[i];
			}
			else{
				flag = 0;
				cout << -1 << endl;
				break;
			}
			i++;
			j++;
			if(i == s.size() && j != t.size())	i = 0;
			else if(i != s.size() && j == t.size())	j = 0;
		}

		if(flag)
			cout << ans << endl;
	}
}