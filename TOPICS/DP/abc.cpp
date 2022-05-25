#include<bits/stdc++.h>

using namespace std;


int main() {

    vector<vector<string> > v(11,vector<string>(11)); //
      for(int i=1; i<=2; i++) {
        for(int j=1; j<=2; j++) cin>>v[i][j];
      }
        
       for(int i=1; i<=10; i++) {
             for(int j=1; j<=10; j++) {
                    cin>>v[i][j];   
             }
             
       }
         vector<vector<int> > v(11,vector<int>(11));
            for(int i=1; i<=10; i++) {
                for(int j=1; j<=10; j++) {
                      if(i==1 && j==1)  {
                           v[i][j]=1; continue;
                      }
                       else if(v[i][j][0]=='L') {
                                
                       }
                }
            }
   string res;
     getline(cin,res);
     cout<<res;

      return 0;
}