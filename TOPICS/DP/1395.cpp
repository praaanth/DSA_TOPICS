/*
count number of Teams 
  simple approach is iterate over all triplets and check for either increasing or decreasing 
  TC: O(n^3)

  optimized approach  
  TC: O(n^2)
    intution is make the ith element as the middle element count number of elements less to its left and right and number of elements greater
    to its left and right 
      ans for ith element = cnt_left_less*cnt_rihgt_greater + cnt_right_less*cnt_left_greater

      for code refer leetcode
*/