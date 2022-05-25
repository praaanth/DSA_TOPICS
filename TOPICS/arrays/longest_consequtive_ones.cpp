

// https://www.geeksforgeeks.org/length-of-longest-consecutive-ones-by-at-most-one-swap-in-a-binary-string/

/*
here we can do atmost one swap with the zero with one 
approach:
  count the total ones cnt_one

  generate the two prefix and continues 1's sum array
   now when we are at 0:
     if(left[i-1]+right[i+1]<cnt_one) {
        this means we have extra one available
        so ans=max(ans,left[i-1]+right[i+1]+1);
        else ans=max(ans,left[i-1]+right[i+1]);
     }
       
     // pseudo code
     go to the link above


*/
