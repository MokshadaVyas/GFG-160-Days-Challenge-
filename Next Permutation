// Given an array of integers arr[] representing a permutation, implement the next permutation that rearranges the numbers into the lexicographically next greater permutation. If no such permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 
// Note - A permutation of an array of integers refers to a specific arrangement of its elements in a sequence or linear order.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        
        // Step-1 Find pivot element
        int n=arr.size();
        int pivot=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                pivot=i;
                break;
            }
        }
        
        // Step-2 Find larger element than pivot element
        if (pivot != -1)
        for(int i=n-1;i>=pivot;i--)
        {
            if(arr[i]>arr[pivot])
            {
                swap(arr[i], arr[pivot]);
                break;
            }
        }
        
        
        // step-3 Sort array
        reverse(arr.begin() + pivot+1,arr.end());
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
