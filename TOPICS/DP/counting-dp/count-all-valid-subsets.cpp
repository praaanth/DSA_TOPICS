/**
 * Question: Given array A and array B. return count of all subsets
 * where max(S1) >= max(S2). where S1 --> subset of array A
 *                                  S2 --> subset of array B
 * Constraints: N <= 10^5
 *              A[i] & B[i] <= 10^5
 *
 *
 * Solution: fix the one value in the array A. lets say x
 *           1. now find the number of subsets are there in array A where x
 *              is the maximum element.
 *              Formula to get the number of subsets where x is the maximum element
 *              lets say x1 = 2^y where y is the number of elements that are less than x.
 *              the above formula works only when there are unique elements what if there
 *              are duplicates also.
 *              ex-> 1,2,3,4,4,4,4,4,5,6,7,7  x=4
 *                 (1,2,3)  (4,4,4,4,4)
 *                   |           |
 *                   S1          S2
 *              choose one element from all the subsets we can form from S1 and
 *              choose one element from all the subsets we can form from S2
 *              in S2 set we should exclude the empty subset.
 *           2. Overall formula is dp[i] = 2^g*(2^freq -1);
 *           3. create a dp1- array and compute the above formula and store in it.
 *              create a dp2- array and compute the above formula and store in it.
 *
 *           4. now we need to compute the actual answer.
 *
 *            int answer =0;
 *            for (int i=1; i<=100000; i++) {
 *                 for (int j=1; j<=i; j++) {
 *                     answer = answer + dp1[i]*dp2[j];
 *              }
 *            }
 *
 *            Time complexity: O(N^2)
 *
 * Optimization: if we observe in the above code we don't need the inner for loop
 *               if we compute the prefix sum of dp2[] we can for j=1 to j=i in o(1)
 *               Time complexity: O(N)
 *
 * Pseudo code:
 *        int fun(vector<int> &arr1,vector<int> &arr2) {
 *           sort(arr1.begin(),arr1.end());
 *           sort(arr2.begin(),arr2.end());
 *           unordered_map<int,int> mp1,mp2;
 *           vector<int> dp1(100000,0),dp2(100000,0);
 *           for(auto val: arr1) mp1[val]++;   // to get the freq of the ith element
 *           for(auto val: arr2) mp2[val]++;
 *           compute the both dp1,dp2
 *           int g=0;
 *           for(int i=1; i<=100000; i++) {
 *              dp1[i] = 2^g * (2^mp1[i]-1);
 *              dp2[i] = 2^g * (2^mp2[i]-1);
 *              dp2[i] += dp2[i-1];  // computing the prefix sum to compute j=1 to j=i sum in o(1)
 *            }
 *           int ans =0;
 *           for (int i=1; i<=100000; i++) {
 *             ans = ans + dp1[i]*dp2[i];
 *             }
 *          return ans;
 * }
 *
 *
 *
 *
 *
 *
 *
 */