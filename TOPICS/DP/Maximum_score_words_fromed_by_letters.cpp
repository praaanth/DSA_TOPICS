/*
  this is standard knapsack problem
    if it is possible to pick a word pick and not pick return maximum score


*/
#include <bits/stdc++.h>
using namespace std;

 int fun(int ind,vector<string> &v,vector<int> &freq,vector<int>& score) {
             if(ind==v.size()) return 0; //
             int x1=fun(ind+1,v,freq,score),ans=0,check=1;
                 vector<int> f1(begin(freq),end(freq));  
                  auto it=v[ind];
                     for(auto ch: it) {
                          if(--f1[ch-'a']<0) {
                              check=0;
                              ans+=score[ch-'a'];
                          }

                     }
                     return max(x1,check?ans+fun(ind+1,v,freq,score):0);

    
       }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
          vector<int> mp(26,0);
            for(auto it: letters) {
                mp[it-'a']++;
            
    }
        return fun(0,words,mp,score);
    }




int main() {

cout<<maxScoreWords({"a","b","c","d"},{'a','b','c'},{1,2,3,4});
return 0;


}
