#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));


#define MAX 100000
#define mod 1000000007
#define inf 1e18
#define ll long long 

int canPlace(int mid,vector<int> &V , int c){
    
    int initial = 1;
    int initPos = V[0];

    for(int i =1 ; i < V.size() ; i ++){
        if((V[i] - initPos) >= mid ) {
            // cout<<initial<<" i "<<endl;
            initial++;
            if(initial == c)
            return 1;

            initPos = V[i];
        }
    }
return 0;
}

void solve() {

    ll int n,c; cin>>n>>c;

    vector<int>v;

    for(ll i = 0 ; i < n ; i ++ ) {
        int a; cin>>a;
        v.push_back(a);
    }
    sort( v.begin() , v.end());
    int maxDis = ( v[v.size()-1] - v[0] );
    int minDis = 1;
    ll ans = 0;

    while( maxDis >= minDis ){

        int mid = (minDis+maxDis)/2;

        if ( canPlace(mid,v,c) == 1 ){
            minDis = mid + 1;
            ans = mid;
        }
        else{
            maxDis = mid - 1;
        }
    }
    cout<<ans<<endl;

}

int main() {
    fastread();
    ll t; cin>>t; 
    while(t--) {
        solve(); 
    }
}