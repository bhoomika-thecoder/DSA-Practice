//gfg practice questions
// Problem: Missing Number
// Approach: Use sum formula n(n+1)/2
// Time Complexity: O(n)- traversing the array 
// Space Complexity: O(1)- no extra space 
class Solution{
public:
int missingelement(vector<int>& arr){ //created a function for missing element
  int n=arr.size()+1; // find n [size of the array]
  long expectedSum=(long)n*(n+1)/2;// mathematical formula to calculate the total expected sum (also using long because to prevent the overflow)

  long actualSum=0; //starts from 0 : initialization
  for(int num:arr){// range loop created : element in arr are being stored in num
      actualSum+=num;// adding each element in the array 
}
return (int) (expectedSum - actualSum);
