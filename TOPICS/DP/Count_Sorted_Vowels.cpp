/*
This is mainly a pattern Recognition problem 
when n=1,
ans=5 
i.e {a,e,i,o,u}
when n=2, 
ans=15
 to maintain lexico order a has chices {a,e,i,o,u} =5 
 e-> {e,i,o,u} =4
    i-> {i,o,u} =3
    o-> {o,u} =2
    u-> {u} =1
    so ans=5+4+3+2+1=15
    current state ans can be sum of i-4
        last state u for any value of the possible choices it forms is only 1 i.e u,uu.uuu
*/
#include <bits/stdc++.h>

using namespace std; //
  int countVowelStrings(int n) {
       
        vector<int> v(5,1);
           for(int i=2; i<=n; i++) {
                 for(int k=3; k>=0; k--) v[k]+=v[k+1];
           }
        return accumulate(begin(v),end(v),0);
    }



  int main() {
  int n;
   cin>> n;
    cout<< countVowelStrings(n);

    return 0;
  }