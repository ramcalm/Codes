// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{  
    
    struct Trie {
        vector<string*> words;
        string* end;
        Trie* ch[26] {0};
     
     Trie() : end(NULL) {}
    };
    
    bool isPalindrome(string &str, int s, int e) {
        int counter = (e - s + 1) / 2;
        while(counter--) {
            if(str[s++] != str[e--]) return false;
        }
        return true;
    }
    
    void insert(Trie* root, string &s) {
        int l = s.length();
        for(int i=0; i<l; ++i) {
            int index = s[i] - 97;
            if (!(root -> ch[index])) {
                root -> ch[index] = new Trie();
            }
            root = root -> ch[index];
            root -> words.push_back(&s);
        }
        root -> end = &s;
    }
    
    bool query(Trie* root, string &s) {
        int l = s.length();
        for(int i=l-1;i>=0;--i) {
            if (root -> end && isPalindrome(s, 0, i)) {
                return true;
            }
            int index = s[i] - 97;
            if (root -> ch[index]) {
                root = root -> ch[index];
            } else {
                return false;
            }
        }
        for(string* w: root -> words) {
            if (w != &s && isPalindrome(*w, l, w -> length() - 1)) return true;
        }
        return false;
    }
    
    void del(Trie* root) {
        for(int i=0; i<26; ++i) {
            if (root -> ch[i]) del(root -> ch[i]);
        }
        delete root;
    }
  public:
    // Function to check if a palindrome pair exists
    bool palindromepair(int N, string arr[]) {
        Trie* root = new Trie();
        
        for(int i=0; i<N; ++i) {
            insert(root, arr[i]);
        }
        
        bool ans = false;
        for(int i=0; i<N; ++i) {
            if(query(root, arr[i])) {
                ans = true;
                break;
            }
        }
        
        delete(root);
        
        return ans;
    }

};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends