//gfg practice questions
// Problem: SecondLargest
// Approach: Single traversal while tracking largest and second largest
// Time Complexity: O(n)- traversing the array 
// Space Complexity: O(1)- no extra space 

class Solution{
public:
  int getSecondLargest(vector<int> &arr){ 
    int n=arr.size();
    int largest= arr[0]; //initialize largest
    int secLargest=INT_MIN; //initialize secondlargest

    for(int i=1; i<N;i++){ //traverse the array starting from secLargest
        if(arr[i]>largest){ // if the current element is greater than the largest
            secLargest=largest; //update seclargest to largest!
            largest=arr[i]; // largest to current largest
        }
      else if(arr[i] <largest && arr[i] > secLargest){// if current element is less than largest and greater than sec largest
            secLargest=arr[i]; // update secondlargest to current largest
      }
    }
  if(SecLargest == INT_MIN){// if the seclargest is still min then there is no second largest element
      return -1; // no second largest
  }
  return secLargest;
  }
};
