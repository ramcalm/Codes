// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
 public:
   //Function to check if S is a subtree of tree T.
   bool ans=0;
   int x=1;
   void recur(Node *T,Node *S){
       if((!T and S)||(!S and T)){
           x=0;
           return ;
       }
       if(!T && !S){
           return;
       }
       
       if(T->data==S->data){
           //cout<<T->data<<" "<<S->data<<endl;
       }
       else{
           x=0;
       }
       
       recur(T->left,S->left);
       recur(T->right,S->right);
       
   }
   
   void solve(Node *T,Node *S){
       if(!T){
           return;
       }
       if(T->data==S->data){
           //cout<<T->data<<" "<<S->data<<endl;;
           x=1;
           recur(T,S);
          // cout<<x<<endl;
           if(x==1){
               ans=1;
           }
       }
       
       solve(T->left,S);
       solve(T->right,S);
       
   }
   
   bool isSubTree(Node* T, Node* S) 
   {
       // Your code here
       if(!S){
           return 0;
       }
       ans=0;
       solve(T,S);
       x=1;
       return ans;
       
   }
};

// { Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string strT, strS;
        getline(cin, strT);
        Node *rootT = buildTree(strT);
        getline(cin, strS);
        Solution obj;
        Node *rootS = buildTree(strS);
        cout << obj.isSubTree(rootT, rootS) << "\n";

    }
    return 0;
}  // } Driver Code Ends