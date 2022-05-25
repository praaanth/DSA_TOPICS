/*
given n,m and max Moves start position of a ball 
  count number of ways we can go out of boundary 
  we can include the cell in more than one paths 
Brute force is to find all paths here we are no need to have a visited array
  because we can visit the same cell again and in different paths
  optimization is to use dp 
    did mistake to identify the dp states i took only i,j as dp states
      but max paths are also changing with i,j
        so dp(i,j,k) is the required state 
         Leetcode problem: https://leetcode.com/problems/out-of-boundary-paths/
        */
