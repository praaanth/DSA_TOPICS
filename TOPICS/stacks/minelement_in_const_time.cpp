/*
for question see the stacks in scaler 
approach:
  [8,10,6,7,4,5]

  need to the push above array elements into stack
  get min element at any point of time in const time
   
   -->if stack is empty then min element is first element
   iteration-->1: min=8  st--> [8]
    iteration-->2: min=8  st--> [8,10]
        here while pushing we check if current element is greater than min element
         just push it 

    iteration-->3: 
    cur=6,min=8;
     so the minimum element is going to change
     we update min=6
     but we aslo need to keep track of 8
     because when we pop the 6 8 is the min element
     instead of 6 if we any indicator value with which we can 
        keep track of min element exculding the cur element

        so indicator= 2*cur-min;
        when we are popping we can definatily say that this indicator is the min element
        is less than the min element
        so we need to update the min element as the 
        min of previous all elements 
        new_min=2*min-indicator;
        min=new_min;
        min=6,indicator=2*6-8=4
        min=6,st--> [8,10,4]

         now we are popping the 4 
         4<6
            so we need to update the min element as the
            min=2*min-4;
            min=2*6-4=8;

            st--> [8,10],min=8
            */


                


