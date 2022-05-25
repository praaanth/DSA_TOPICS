//https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/
/*

find the largest of  n that is less tham n 

x=find_largest_power_of_2(n);

 int x1=x*2^(x-1);
  int x2= n-2^x+1;  // this is to count the set bits from z^x to n
   reduce the problem to smaller sub problem than solve for it.
   int rem=fun(n-2^x);
    return x1+x2+rem;

    dry run for example 11 u will understand the problem
    */

