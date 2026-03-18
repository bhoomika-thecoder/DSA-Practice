//gfg practice questions
// Problem: segregate 0s and 1s
// Approach: segregate the array as 0s onto the left side and 1s onto the right side of the array
// Time Complexity: O(n)- traversing the array 
// Space Complexity: O(1)- no extra space 
class Solution {
  public:
    void segregate0and1(vector<int> &arr) { //rearrange array so that all 0s come first, then all 1s
        int i=0, j=arr.size()-1; // i=start from beginning and, j= starts from end
        while(i<j){
            if(arr[i]==0){ //if current elemnt is 0-correct position
                i++; //iterate it forward
            }
            else{ //arr[i]==1-wrong, 1 should be on right side
                if(arr[j]==0){// if right side has 0- swap!
                    swap(arr[i],arr[j]);// swap 1(left) with 0 (right), lest=0, right=1
                    i++,j--;
                }
                else{//arr[j] ==1  -correct
                    j--;// move it to left
                }
            }
        }
    }
};      
