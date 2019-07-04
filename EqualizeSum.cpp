#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--){
       ll n,k;
       cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++){
        cin>>arr[i];
       }
       sort(arr,arr+n);
       ll b = k+arr[0];
       if(k>=abs((b-arr[n-1]))){
        cout<<b<<endl;
       }else{
           cout<<"-1"<<endl;
       }
    }
    return 0;
}
