#include<bits/stdc++.h>

using namespace std;


int main() {

    string s,t;
     cin>>s>>t; 
     int n=s.size(),m=t.size(),j=0;

          for(int i=0; i<m ; i++) {
               if(t[i]=='R') {
                     j++;
                      
               } 
               else if(t[i]=='L') {
                   j--;
                    
               }
               else if(t[i]=='T') {
                     if(j>=0 && j<n && s[j]<'9') {
                          s[j]++;
                     }
               }
               else if(t[i]=='D') {
                        if(j>=0 && j<n && s[j]>'0') {
                            s[j]--;
                        }
               }
               else {
                    
                    int ind=t[i+1]-'0';
               
                            swap(s[j],s[ind-1]);
                    
                    i++;
               }
          }
          cout<<s;
      return 0;
}