// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) {
    int j = 0, k = 0;
    string str = "", conv;
        
    reverse(S.begin(), S.end());
    for(int i = 0; S[i]; i++){
        if(S[i] == '.'){
            conv = S[i];
            str.insert(k, conv);
            j = ++k;
            continue;
        }
        conv = S[i];
        str.insert(j, conv);
        k++;
    }
    return str;
}
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends