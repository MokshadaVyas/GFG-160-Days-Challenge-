// Given two strings, one is a text string txt and the other is a pattern string pat. The task is to print the indexes of all the occurrences of the pattern string in the text string. Use 0-based indexing while returning the indices. 
// Note: Return an empty list in case of no occurrences of pattern.



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     vector<int> search(string& pat, string& txt) {
        // code here
        vector<int>ans;
        int n = pat.size();
       
        for(int i=0;i<=txt.size()-n;i++)
        {
            if(pat[0]!=txt[i])
            {
                continue;
            }
            
            string str = txt.substr(i,n);
            
            if(str==pat)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends
