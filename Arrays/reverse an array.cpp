//gfg practice questions
// Problem: reverse an array
// Approach: two--pointer 
// Time Complexity: O(n)- traversing the array 
// Space Complexity: O(1)- no extra space 

class Solution {
  public:
    void reverseArray(vector<int> &arr) { // function to reverse the array
        // code here
        int s=0; // start pointer
        int e=arr.size()-1; //  end pointer
        while(s<e){ // swap elements at start and end pointers
            swap(arr[s],arr[e]); // swap function to swap elements at index s and e
            s++; // move start pointer forward
            e--; // move end pointer backward
        }
    }
};
