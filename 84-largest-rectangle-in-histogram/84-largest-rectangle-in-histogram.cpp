class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        if(!n)
            return 0;
        int mx=0;
        stack<int> st;
        for(int i=0;i<=n;i++)
        {
            int curr=(i==n)?0:h[i];
            while(!st.empty() && curr<h[st.top()])
            {
                int top=st.top();
                st.pop();
                int width= st.empty()?i:(i-st.top()-1);
                int area=h[top]*width;
                mx=max(area,mx);
            }
            st.push(i);
            
        }
        return mx;
        
        /*
        vector<int> left(n);
        vector<int> right(n);
        left[0]=-1;
        right[n-1]=n;
        for(int i=1;i<n;i++)
        {
            int prev=i-1;
            while(prev>=0 && h[prev]>=h[i])
                prev=left[prev];
            left[i]=prev;
        }
        for(int i=n-2;i>=0;i--)
        {
            int next=i+1;
            while(next<n && h[next]>=h[i])
                next=right[next];
            right[i]=next;
        }
        for(int i=0;i<n;i++)
        {
            cout<<i<<" "<<" "<<left[i]<<" "<<h[i]<<" "<<right[i]<<endl;
        }
        for(int i=0;i<n;i++)
        {
            int width=right[i]-left[i]-1;
            mx=max(mx,h[i]*width);
        }
        */
        return mx;
    }
};

auto speedup = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();