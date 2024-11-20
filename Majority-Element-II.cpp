// You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 

// Note: The answer should be returned in an increasing format.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
       vector<int>ans;
       int size = arr.size();
    
       // to store the occurence of each element in the array;   
       unordered_map<int,int>freq; 

       // Traversing over the array and storing it frequency in the map data structure;   
       for(int &i : arr)
       {
           freq[i]++;
       }
       
       // Traversing over the freq (map data structure) and checking if any of the elements have occurence greater than size/3 then store it in the ans vector;
       for(auto &i : freq)
       {
           if(i.second > size/3)
           {
               ans.push_back(i.first);
           }
       }
       // Map is data structure which stores key:value pair like here key is each element and value is their occurence, to access key -> i.first and to access value -> i.second;
       
       // sort the array as the question says the array should be sorted;
       sort(ans.begin(),ans.end());
       
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
