//gfg practice questions
// Problem: remove k digits
// Time Complexity: O(n)- traversing the array 
// Space Complexity: O(1)- no extra space 

class Solution {
  public:
    string removeKdig(string &s, int k) { // remove k digits to get the smallest number
        stack<char>st;// stack to store digits
        for(char c : s){// traverse string
            while(!st.empty() && k && c<st.top()){// if current digit is smaller than top of stack and we still have k to remove
                st.pop();// remove top of stack
                k--;// decrement k
            }
            if(!st.empty() || c!='0')// avoid leading zeros
            st.push(c);// push current digit to stack
        }
        while(!st.empty() && k){// if we still have k to remove, remove from end
            st.pop();// remove top of stack
            k--;//  decrement k
        }
        if(st.empty()) return "0";// if stack is empty, return "0"
        string num;// string to store result
        while(!st.empty()){// pop all digits from stack to string
            num.push_back(st.top());// add top of stack to string
            st.pop();// remove top of stack
        }
        reverse(num.begin(),num.end());// reverse string to get correct order
        return num;
    }
};
