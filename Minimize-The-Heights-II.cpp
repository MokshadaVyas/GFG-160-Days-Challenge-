// Given an array arr[] denoting heights of N towers and a positive integer K.

// For each tower, you must perform exactly one of the following operations exactly once.

// Increase the height of the tower by K
// Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

// Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.



//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());
        int n = arr.size();
    
        // Step 2: Calculate the initial difference
        int result = arr[n-1] - arr[0];
    
        // Step 3: Iterate through the array and calculate min and max heights
        for (int i = 1; i < n; i++) {
            if (arr[i] - k < 0){
                continue;
            }
        
            int maxHeight = max(arr[i-1] + k, arr[n-1] - k);
            int minHeight = min(arr[0] + k, arr[i] - k);
        
            result = min(result, maxHeight - minHeight);
        }
        
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
        cout << '~' << endl;
    }
    return 0;
}
// } Driver Code Ends
