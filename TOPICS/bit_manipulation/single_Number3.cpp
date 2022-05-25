


/*

[1,2,1,3,2,5]

take xor of all elements
total_xor= 6
represent the total_xor as a binary number
6--> 110
the set bit in this xor represents that the two elements differ 
at that position
to find that position we use brien karnings algorithm

mask = (xor& (xor-1))^xor;
    if we subtract 1 from te mask 
       110-1= 101
       in the result we get that in the right most position
       of xor the bits are altered in tha result
       now if we do xor with result we get the right most set bit in the 
       int xor 

       ans=0;
        for(int i=0; i<n;i++) {
              if(v[i] & 1<<mask) ans^=v[i];
        }
        ans2=ans^xor;
        

    
    */  
