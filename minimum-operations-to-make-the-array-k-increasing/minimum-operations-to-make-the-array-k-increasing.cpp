class Solution {
public:
  /*  int ceilIdx(vector<int>& tail, int l, int r, int key) 
    { 
        while (r > l) {         
            int m = l + (r - l) / 2; 
            if (tail[m] >= key) 
                r = m; 
            else
                l = m+1; 
        } 

        return r; 
    } 
    int lis(vector<int>& arr) {
        int n=arr.size();
        vector<int> tail(n); 
        int len =1; 
  
        tail[0] = arr[0]; 
        
        for (int i = 1; i < n; i++) {
            
            if(arr[i] >= tail[len - 1])
            {
                tail[len] = arr[i];
                len++;
            }
            else{
                int c = ceilIdx(tail, 0, len - 1, arr[i]);
                
                tail[c] = arr[i];
            }
        } 
  
        return len;
    } */
    int lis(vector<int>& arr) {
        vector<int> sub;
        for (int i = 0; i < arr.size(); ++i) {
            int x = arr[i];
            if (sub.empty() || sub[sub.size() - 1] <= x) { // Append to LIS if new element is >= last element in LIS
                sub.push_back(x);
            } else {
                int idx = upper_bound(sub.begin(), sub.end(), x) - sub.begin(); // Find the index of the smallest number > x
                sub[idx] = x; // Replace that number with x
            }
        }
        return sub.size();
    }
    int kIncreasing(vector<int>& arr, int k) {
        int res=0;
        for(int i=0;i<k;i++)
        {
            vector<int> temp;
            for(int j=i;j<arr.size();j=j+k)
            {
                temp.push_back(arr[j]);
            }
            cout<<lis(temp)<<endl;
            res+=temp.size()-lis(temp);
        }
        return res;
    }
};