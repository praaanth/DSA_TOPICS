/**
 Question: return the number of ways that you can divide the string where
           each substring is less than k.


Solution: Almost similar to the decode ways there we will pick at most (i,i+1) characters
Constraints: k<= 10^9
best optimized solution: when we are at index i we will go from i- i+9 only
                         because k can have at most 10 digits only.
c++
int dp[n+1]=0;
dp[n] =1;
dp[n-1] = s[n-1]!='0' ? 1 :0;
for(int i=n-2; i>=0; i--) {
    int cur_num =0;
    for(int j=i; j<=(i+9) && j<n; j++) {
        cur_num = cur_num*10 + s[j]-'0';
        if(cur_num < = k) dp[i]+=dp[j+1]; // in the current cut included (i-j);
    }
}
return dp[0];

 */