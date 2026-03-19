//gfg practice questions
// Problem: Maximum number of overlapping intervals
// Time Complexity: O(n)- traversing the array 
// Space Complexity: O(1)- no extra space 

class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) { 
        
        int n=arr.size(); // size of the array of intervals
        vector<int>start(n),end(n); // create two vectors to store start and end times of intervals
        for(int i=0;i<arr.size();i++){// traverse the array of intervals
            start[i]=arr[i][0];// store start time of interval in start vector
            end[i]=arr[i][1];// store end time of interval in end vector
        }
        sort(start.begin(),start.end());// sort start times and end times separately
        sort(end.begin(),end.end());//  sort end times
        
        int i=0,j=0;// initialize two pointers for start and end vectors
        int overlap=0, maxi=0;// initialize overlap and maximum overlap to 0
        while(i<n && j<n){// traverse both vectors until we reach the end of either vector
            if(start[i]<=end[j]){// if start time is less than or equal to end time, it means we have an overlap
                overlap++;// increment overlap
                maxi=max(maxi,overlap);// update maximum overlap
                i++;
            }
            else{
                overlap--;// if start time is greater than end time, it means we have an end of an interval, so we decrement overlap
                j++;// move to next end time
            }
        }
        return maxi;
    }
};
