/*
  for every element in the array has two options can be multiplied with '+' or '-' to form a target
    this is also same as count partitions with given difference --> coding ninjas
  brute force solution:
      consider both the conditions and return all possibilites 

    time complexity: O(2^n)
      optimied using dp: 
      if we closely observe we array elements subset s1->'+' s2->'-'
      then we can use dp to solve this problem

      s1-(s2) we take -sign common in s2 
        s1-s2=target;
          s1+s2=totalsum;
            s1=(target+totalsum)/2;

     we need to count the number of subsets with s1

     now what are invalid conditions 
       if(s1<0) return 0; // this appeares when the target range is given as -1e5 to 1e5 i.e -ve sum also may be possible
       if (target + totalsum)%2==1) return 0; // odd 
       now what to type of approach need to apply either iterative or memoization
        if array elements are inlcude 0 dont apply iterative just apply memoization
        if array elements are not inlcude 0 apply iterative
          base cases: if(n==0) return sum==0;

          https://takeuforward.org/data-structure/count-partitions-with-given-difference-dp-18/
            reference blog page
*/







