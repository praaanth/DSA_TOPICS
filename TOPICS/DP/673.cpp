/*
number of longest increasing subsequence leetcode
approach is to maintain the count longest subsequences ending at it index
  also keep track of max_length 
  then iterate over the dp array if dp[i]--> max_length ans+=mp[i];

  mistake i did taking the count of all the lengths insted of max_length
    mistake code 
      for(int i=1; i<n; i++) {
            for(int j=0; j<i; j++) {
                  if(v[i]>v[j]) {
                         if((dp[j]+1)>dp[i]) dp[i]=dp[j]+1,mp[i]=0;
                           //mp[i]+=mp[j];   /// here there may be a case where 1+dp[j]<dp[i] but i am not taking care of that
                           // correct code 
                             if(dp[i]==(1+dp[j])) mp[i]+=mp[j];
                  }
                  
            }
      }

*/

#include <bits/stdc++.h>
using namespace std;

int main() { 
    // string s="abdegt";
    //   vector<int> dp(s.size()+1,0);
    //     for(int i=1; i<=6; i++) {
    //            dp[i]=dp[i-1]+s[i-1];
    //              cout<<dp[i]<<" ";
    //     }

    vector<int> v={4,4,4,42,2,5,5,5};
      v.erase(unique(v.begin(),v.end()),v.end());
        for(auto it: v) cout<<it<<" ";
         return 0;
     
}