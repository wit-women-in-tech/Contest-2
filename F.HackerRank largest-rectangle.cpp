#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));


#define MAX 100000
#define mod 1000000007
#define inf 1e18
#define ll long long 


void solve() {

    ll n; cin>>n;
    ll arr[n];
    for(ll i = 0 ; i < n ; i ++ ){
        cin>>arr[i];
    }

    ll max = 0;

    for(ll i = 0 ; i < n ; i ++ ){
        ll j = i-1;
        ll k = i+1;
        ll c = 1;

        while( j >= 0 && arr[j] > arr[i]) {
            j--;
            c++;
        }   

        while( k < n && arr[k] > arr[i]){
            k++;
            c++;
        }
        ll d = arr[i] * c;

        if(d>max)
        max = d;
    }
    cout<<max<<endl;
}

int main() {
    fastread();
    solve();
    return 0;
}