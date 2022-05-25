#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll n;
   cin>> n; //
    vector<vector<ll> > v(n,vector<ll>(2));
   for(ll i=0; i<n; i++) {
         cin>>v[i][0] >> v[i][1];
   }
    sort(begin(v),end(v),[](vector<ll> a, vector<ll> b){
            return a[0]<b[0];
    });
    ll ans=0,time=0;
    for(ll i=0; i<n; i++) {
         time+=v[i][0];
         ans+=(v[i][1]-time);
       
    }
    cout<<ans<<endl;
   return 0;
}