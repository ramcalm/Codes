class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool peak=false;
        int i=0;
        while(i<(arr.size()-1) && arr[i]<arr[i+1])
            i++;
        if(i==(arr.size()-1)||i==0)
            return false;
        cout<<i<<endl;
        while(i<(arr.size()-1) && arr[i]>arr[i+1])
            i++;
        if(i==(arr.size()-1))
            return true;
        return false;
    }
};