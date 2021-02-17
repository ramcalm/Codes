#include <bits/stdc++.h>
using namespace std;

string multiplyStrings(string, string);

void main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        cin>>a>>b;
        cout<multiplyStrings(a,b)<<endl;
    }
};


string multiplyStrings(string nums1, string nums2) {
   int n = nums1.size();
   int m = nums2.size();
   string ans(n + m, '0');
   for(int i = n - 1; i>=0; i--){
      for(int j = m - 1; j >= 0; j--){
         int p = (nums1[i] - '0') * (nums2[j] - '0') + (ans[i + j + 1] - '0');
         ans[i+j+1] = p % 10 + '0';
         ans[i+j] += p / 10 ;
      }
   }
   for(int i = 0; i < m + n; i++){
      if(ans[i] !='0')
         return ans.substr(i);
   }
   return "0";
}
