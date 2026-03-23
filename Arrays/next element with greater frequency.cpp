//gfg practice questions
// Problem: next element with greater frequency
// Time Complexity: O(n)- traversing the array 
// Space Complexity: O(1)- no extra space 

class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) { // frequency map
        unordered_map<int,int>freq;// map to store frequency of each element
        for(int i=0;i<arr.size();i++)// traverse array
        freq[arr[i]]++;// increment frequency of arr[i]
        
        vector<int>ans(arr.size(),-1);// initialize answer vector with -1
        stack<int>st;// stack to store indices of elements
        
        for(int i=0;i<arr.size();i++){// traverse array
            while(!st.empty() && freq[arr[i]]>freq[arr[st.top()]]){// while stack is not empty and frequency of current element is greater than frequency of element at top of stack
                ans[st.top()]=arr[i];// update answer for index at top of stack
                st.pop();// pop index from stack
            }
            st.push(i);// push current index onto stack
        }
        return ans;
    }
};
