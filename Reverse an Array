// You are given an array of integers arr[]. Your task is to reverse the given array.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

      void builtInFunc(vector<int> &arr)
    {
        reverse(arr.begin(),arr.end());
    }
    
    void usingTempVec(vector<int> &arr)
    {
        int size = arr.size();
        vector<int>temp;
        
        for(int i=size-1;i>=0;i--)
        {
            temp.push_back(arr[i]);
        }
        
        for(int i=0;i<size;i++)
        {
            arr[i]=temp[i];
        }
    }
    
    void swapping(vector<int> &arr)
    {
        int n = arr.size();
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
    void stackMethod(vector<int> &arr)
    {
        int n = arr.size();
        stack<int>st;
        
        for(int &i : arr)
        {
            st.push(i);
        }
        
        for(int i=0;i<n;i++)
        {
            int n = st.top();
            st.pop();
            arr[i]=n;
        }
    }

    void reverseArray(vector<int> &arr) {
        // code here
        builtInFunc(arr);
        // usingTempVec(arr);
        // swapping(arr);
        // stackMethod(arr);

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
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
