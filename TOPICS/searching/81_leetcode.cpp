/*
81. Search in Rotated Sorted Array II

the  approach is same as problem 1
  but here we need to avoid the duplicates
  ex--> [3,1,2,3,3,3,3]
  l=0,h=6
  mid=3
  v[mid]>=v[l]  --> 3>=3
  but  the array is not sorted from l--> mid
  so the above condition  is not valid when v[mid]==v[l] && v[h]==v[mid]
  at this condition we need to move the l,h close to mid i.e l++,h--
  remaining is same as problem 1
   and reduce the problem to problem 1
*/