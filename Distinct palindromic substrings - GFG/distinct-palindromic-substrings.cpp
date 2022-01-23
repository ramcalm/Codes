// { Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int palindromeSubStrs(string s) {
        int n = s.length();
        set<string>st;
        string curr = "";
        
        //odd
        for(int i=0;i<n;i++){
            int left = i-1,right = i+1;
            while(left >= 0 and right < n){
                if(s[left] == s[right]){
                    curr = s.substr(left,right-left+1);
                    st.insert(curr);
                    left--;
                    right++;
                }
                else break;
            }
        }
        
        //even
        for(int i=0;i<n-1;i++){
            int left = i;
            int right = i + 1;
            if(s[left] == s[right]){
                while(left >= 0 and right < n){
                    if(s[left] == s[right]){
                        curr = s.substr(left,right-left+1);
                        st.insert(curr);
                        left--;
                        right++;
                    }
                    else break;
                }
            }
        }
        
        //individual characters
        for(auto x : s) {
            string curr = "";
            curr += x;
            st.insert(curr);
        }
        return st.size();
    }
};


// { Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}
  // } Driver Code Ends