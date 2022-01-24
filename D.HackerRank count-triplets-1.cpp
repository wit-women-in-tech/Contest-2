#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    long r;
    vector<long>arr;
    cin>>n>>r;
 
    for(long i=0;i<n;i++)
    {
        long x;
        cin>>x;
        arr.push_back(x);
    }
    long ans=0;
    unordered_map<long, long>m1;
    for(long i=0;i<arr.size();i++)
    {
        m1[arr[i]]++;
    }
    
    unordered_map<long,long>m2;
    for(long i=0;i<arr.size();i++)
    {
        //cout<<m1[arr[i]]<<endl;
        m1[arr[i]]--;
        if(arr[i]%r==0)
        {
            long a=arr[i]/r;
            if((m1.find(arr[i]*r)!=m1.end())&&(m2.find(a)!=m2.end()))
            {
                ans=ans+(m1[arr[i]*r]*m2[a]);
            }
        }
        m2[arr[i]]++;
    }
    cout<<ans<<endl;
}
