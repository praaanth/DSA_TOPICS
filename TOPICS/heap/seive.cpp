

#include<bits/stdc++.h>
#define ll unsigned long int
using namespace std;
bool primes[10000000];

void seive(ll n) {
     for(ll i=2; i*i<=n; i++) {
            if(primes[i]) {
                for(ll j=i*i; j<=n; j+=i) {
                    primes[j]=false;
                }
            }
          
     }
}
int main()
{
       memset(primes,1,sizeof(primes));
       
        ll f,l,h;
        cin>>f>>l>>h;
           seive(h);
        ll ans=INT_MAX,x=0,y=0,check=0; 
          for(ll i=l; i<=h-1; i++) {
                if(primes[i]) continue;
              for(ll j=i+1; j<=h; j++) {
                    if(primes[j]) continue; 
                    ll p= i*j;
                    ll diff=(j-i)*(j-i);
                    ll t=p/diff;
                     if(t>=f) {
                           ans=t;
                           check=1;
                          x=i;
                          y=j;
                          break;
                     }

              }
              if(check) break;
          }
          if(ans==INT_MAX) cout<<"None";
          else cout<<x<<" "<<y;
          
    return 0;
}

