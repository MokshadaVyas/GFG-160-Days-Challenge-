// Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
// Note: The input strings may contain leading zeros but the output string should not have any leading zero

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        int carry = 0;
        string result = "";
        int s1_size = s1.length();
        int s2_size = s2.length();
        int i = 0;
        
        while (i < s1_size || i < s2_size || carry != 0) {
            int x = 0, y = 0;

            
            if (i < s1_size && s1[s1_size - i - 1] == '1') {
                x = 1;
            }

            
            if (i < s2_size && s2[s2_size - i - 1] == '1') {
                y = 1;
            }

            
            result = char((x + y + carry) % 2 + '0') + result;
            carry = (x + y + carry) / 2;

            i++;
        }
        
        while (result[0] == '0' && result.length() > 1) {
            result.erase(0, 1);
        }

        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
