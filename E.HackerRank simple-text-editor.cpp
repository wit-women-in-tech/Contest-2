#include <bits/stdc++.h>
using namespace std;

string s = "";
stack <string> p;
void append(string s2){
	p.push(s);
	s = s + s2;
}

void delete1(int k){
	p.push(s);
	for(int i = 0; i < k; i++){
		s.pop_back();
	}
}

void print(int k){
	cout << s[k-1] << endl;
}

void undo(){
	s = p.top();
	p.pop();
}


int main(){
	int q;
	cin >> q;
	while(q--){
		int t;
		cin >> t;
		if(t==1){
			string s2;
			cin >> s2;
			append(s2);
		}
		else if(t == 2){
			int k;
			cin >> k;
			delete1(k);
		}
		else if(t == 3){
			int k;
			cin >> k;
			print(k); 
		}
		else{
			undo();
		}
	}
}