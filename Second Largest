// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
    int largestElement(vector<int> &arr)
    {
        int max=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        return max;
    }
    
    int getSecondLargest(vector<int> &arr) 
    {
        
        // Code Here
        int min_element=INT_MIN;
        int max_element = largestElement(arr);
        
        for(int i=0;i<arr.size();i++)
        {
            if (arr[i] != max_element && arr[i] > min_element) 
            {
                min_element=arr[i];
            }
        }
        
        if (min_element == INT_MIN) {
            return -1;
        }

        return min_element;
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
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
