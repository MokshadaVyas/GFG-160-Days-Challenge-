// Anagram
// Given two strings s1 and s2 consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other. Strings s1 and s2 can only contain lowercase alphabets.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        
        if(s1.size()!=s2.size())
        {
            return false;
        }
        
        vector<int>hash(256,0);
        for(int i=0;i<s1.size();i++)
        {
            hash[s1[i]]++;
        }
        
        for(int i=0;i<s2.size();i++)
        {
            hash[s2[i]]--;
        }
        
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
