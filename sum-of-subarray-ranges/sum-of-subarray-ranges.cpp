class Solution {
public:
    
    #define ll long long
    
    //Function to find sum of Min Elements of all SubArray
    //Time Complexity: O(N)
    ll sumSubarrayMins(vector<ll>arr){
        
        ll n=arr.size();
        vector<ll>left(n,0),right(n,0);

        stack<pair<ll,ll>>s1,s2;
        
        //Counting No. of Elements strictly larger
        //than arr[i] on Left.
        for(ll i=0; i<n; ++i) {
            ll cnt = 1;
            
            //Get elements from stack until element
            //greater than arr[i] found
            while (!s1.empty() and (s1.top().first)>arr[i]) {
                cnt+=s1.top().second;
                s1.pop();
            }

            s1.push({arr[i],cnt});
            left[i]=cnt;
        }
        
        //Counting No. of Elements strictly larger
        //than arr[i] on Right.
        for(ll i=n-1; i>=0; --i) {
            
            ll cnt=1;
            
            //Get elements from stack until element greater
            //or equal to arr[i] found
            while (!s2.empty() and (s2.top().first)>=arr[i]) {
                cnt+=s2.top().second;
                s2.pop();
            }

            s2.push({arr[i],cnt});
            right[i]=cnt;
        }

        ll res=0;
        //Calculating Required Result
        for (ll i=0; i<n; ++i)
            res=(res+arr[i]*left[i]*right[i]);

        return res;
    }
    
    //Function to find sum of Max Elements of all SubArray
    //Time Complexity: O(N)
    ll sumSubarrayMaxs(vector<ll>arr){
        
        ll n=arr.size();
        //Vector for Storing Left and Right count
        vector<ll>left(n,0),right(n,0);
        
        //Stack for Storing the indexes
        stack<ll>q;
        
        //Calculate Left count for every index
        for (ll i=0; i<n; i++) {
            while (q.size()!=0 and arr[q.top()]<=arr[i]) {
                left[i]+=left[q.top()]+1;
                q.pop();
            }
            q.push(i);
        }
        
        //Clear the stack
        while(q.size()!=0)
            q.pop();
        
        //Calculate Right count for every index
        for(ll i=n-1; i>=0; i--) {
            while (q.size()!=0 and arr[q.top()]<arr[i]) {
                right[i]+=right[q.top()]+1;
                q.pop();
            }
            q.push(i);
        }
        
        //Clear the stack
        while(q.size()!=0)
            q.pop();

        ll res=0;
        //Calculating Required Result
        for (ll i=0; i<n; i++)
            res+=(left[i]+1)*(right[i]+1)*arr[i];

        return res;
    }
    
    ll subArrayRanges(vector<int>& arr) {
        
        vector<ll>t;
        for(auto x:arr)
            t.push_back(x);
        
        //Formula: Sum of Max Element of all Subarray - Sum of Min Element of all Subarray
        ll res=sumSubarrayMaxs(t)-sumSubarrayMins(t);
        
        return res;
        
    }
};