/**
 * ## Brute force
   one simple solution is to apply linear search
* ## Optimized Binary Search
   -> Idea for binary search: as we can see that the array is sorted and rotated
      in the array we have 2 sorted regions . The key element is present in either of
      the sorted regions.
   -> in normal binary search using the condition we reduce the search space `
      here when we find mid either of the left half or right half would be sorted
      in that sorted region i will check whether the key is present in that region
      if it is present I will discard the other half otherwise i will discard the
      sorted region and move towards the other half.

*/