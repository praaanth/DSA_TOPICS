/**
 * Brute force : example -> 226
  ## 2 | (26) -> 2 |(6) -> 6 |() return 1
              -> 26 | () return 1
  ## 22| (6) -> 6 | () return 1;
 example -> 207
     2 | (07) -> return 0;
     20 | (7) -> 7 | () return 1;
     fun(ind) -> defines: it will return no of ways we can decode the string from ind - n-1
     when we are at the current index i will check whether it is not equal to zero.
       1. if it is zero i will return 0;
       2. if it is not zero i will pick the current character and i am left with the
           ind+1 -n-1 i will cal the fun(ind+1) and store this value in the x1
       3. Another way is i can club the current character  with the ind+1 character
          only if the integer value is less than 26
          i will be left with ind+2 -n-1  fun(ind+2) and store this value in the x2.
       4. at the end from the current state i will return x1+x2;
    Time complexity: 2^n reason a character is decoded alone or it can be clubbed with
                     the next character. for each index we have 2 ways we can decode
                     and we have total n indexes.
    Space Complexity: o(n) recursion stack size.

 * Optimization: we can see the above example 226 -22| (6) path-1
                                               |-2 |2 | (6) path -2

   the no of ways to decode with string (6) is already computed if we memoize this solution
      we don't need to compute it again.

    define a dp array of size n dp[n] = -1;
    at each function call we will check whether this state is already computed
     if dp[ind] ! =-1 it is already computed i will return from here.
      return dp[ind] = x1+x2;
      Time Complexity: o(n)
      Space Complexity : o(2n) for recursive stack size and dp array.

* Further Optimization: if we use the iterative method we can exclude the
                        recursive stack size.

* Further Optimization: dp[i] depends on dp[i+1] and dp[i+2]
                        to calculate the current state we need i+1 and i+2 states
                        only we don't need to store n size dp array. we can simply
                        have 2 variables
                        dp1 and dp2.
     solution in c++
       int numDecodings(string s) {
        int n = s.size();
        // initialize the base conditions when we are at ind n-1
        int dp2 =1; // when we decoded the entire string it is one way return 1
        int dp1 = (s[n-1]!='0'); // when we are at ind-1 we only we decode that charecter if it is not zero
        for(int i=n-2; i>=0; i--) {
            int curr_ways =0;
            if(s[i] != '0')  {
                curr_ways = dp1;
                if((i+1)<n && ((s[i] == '1') || (s[i] == '2' && s[i+1] < '7'))) curr_ways+=dp2;
            }
            dp2=dp1;
            dp1=curr_ways;
        }
        return dp1;
    }

 */
