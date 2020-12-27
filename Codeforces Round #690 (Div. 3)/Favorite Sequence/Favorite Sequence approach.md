# Favorite Sequence approach

We are taking two pointer one at first and the other one at last element. Then we are taking a vector "ans" where we will be
storing the array after the required operation. Now in the given array we will start traversing, the pointer pointing to 
the first element will increase by the even position and the value of that element will be stored in ans. In the odd position 
the pointer pointing to last will get added to the ans and will decrease by one.

Time Complexity : O(n)
Space Complexity : O(n)