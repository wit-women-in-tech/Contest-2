#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int common[26] = {0};
		int one[26] = {0};
		string s;
		for(int i = 0; i < n; i++){
			cin >> s;
			for(int j = 0; j < s.size(); j++){
				if(!one[s[j]-'a']){
					common[s[j]-'a']++;
					one[s[j]-'a']++;
				}
			}

			for(int j = 0; j < 26; j++){
				one[j] = 0;
			}
		}

		int ans = 0;
		for(int i = 0; i < 26; i++){
			if(common[i] == n)	ans++;
		}

		cout << ans << endl;
	}
}
