//gfg practice questions
// Problem: indexes of Subarray Sum
// Time Complexity: O(n)- traversing the array 
// Space Complexity: O(1)- no extra space 
class Solution{
  public:
    vector<int> subarraySum(vector<int> &arr, int target){

      int s=0,e=0; // start and end initialized by 0
      int sum =0; 
      vector<int>ans; 
      for(int i=0;i<arr.size();i++){ //loop for sum of elements
          sum += arr[i];
          //if(sum<target) //ignore
          if(sum>=target){ 
          e=i; // make the current element as end 
          while(sum>=target){
              sum -= arr[s]; //subtract the element from starting (contiguous sequence)
              ++s;
          }
          if(sum == target){ //answer!
              ans.push_back(s+1); // +1 as we have started from 1 to n not 0 (as indexing)
              ans.push_back(e+1);
              return ans;
          }
          }
      }
  return {-1}; // if no such array 
    }
}; 
