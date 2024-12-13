// A sorted array of distinct elements arr[] is rotated at some unknown point, the task is to find the minimum element in it. 

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n = arr.size();
        int minimum = arr[0];
        
        for(int i=1;i<n;i++)
        {
            if(minimum>arr[i])
            {
                minimum = arr[i];
            }
        }
        
        return minimum;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
