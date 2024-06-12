
/**
 * start like this in interview 
 * First thing to note is in what cases the water will get 
    trapped 
 * 
   Example:  2,0,4 --array 
            lets see how much water can be trapped at height 0

            is min(2,4) 2 

            so lets extend this approach to the larger array
            6,3,1,5 --> min(6,5) 5-1 = 4
    so the Formula that i can use to calculate the water trapped at every 
    bar is min(max_left,max_right) - own_height


   Corner Cases:
      if we have less than or equal to 2 bars they cannot trap 
      any water.
      if(N <=2) return 0;

    first approach:
      iterate from idx = 1 to N-2
               to calculate the left_max and right_max 
               another for loop from i=0 to i i <idx 
               another for loop from i = idx+1, i<N 
    TC --> O(N^2)
    sc --> O(1)


possible to optimize is to reduce the calculation of left_max and right_max

two arrays 
   left_max,right_max 
   pre-compute these 2 arrays 
   when I am ith bar maximum height from 0 -i-1 will be 
   stored at left_max[i-1]
   left_max[i] = max(height[i], left_max[i-1])
   water_trapped =0
   for(idx =1 to idx<N-1)
   water_trapped += min(max_left[idx],max_right)-height[idx]);


psedudo code 

int calculate_water_trapped(vector<int> &height) {
    
    int siz = height.size();
    if(siz <=2) return 0;
    vector<int> left_max(siz,0);
    vector<int> right_max(siz,0);
    left_max[0] = height[0]
    right_max[siz-1] = height[siz-1]
    for(int idx=1; idx<siz-1; idx++) {
        left_max[idx] = max(left_max[idx-1],height[idx]);
        right_max[siz-idx-1] = max(right_max[siz-idx] , height[siz-idx-1])
    }

   int water_trapped =0;
    for(int idx =1; idx<siz-1; idx++) {
      water_trapped += min(left_max[idx],right_max[idx]) - hieght[idx];
    }
    return water_trapped;
}


 * 
 * 
 
 /

