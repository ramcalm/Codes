void backtracking(map<int,string> mp ,vector<string> &res, string temp ,int a[], int N, int i){
    
    if(temp.size()==N){
        res.push_back(temp);
        return;
    }
    
    if(a[i]>=2 && a[i]<=9){
        string str = mp[a[i]];
        for(int j=0;j<str.length();j++){
            temp += str[j];
            backtracking(mp,res,temp,a,N,i+1);
            temp.pop_back();
        }
    }
}


vector<string> possibleWords(int a[],int N)
{   
    vector<string> res;
    string temp = "";
    
    map<int,string> mp;
    mp.insert({2,"abc"});
    mp.insert({3,"def"});
    mp.insert({4,"ghi"});
    mp.insert({5,"jkl"});
    mp.insert({6,"mno"});
    mp.insert({7,"pqrs"});
    mp.insert({8,"tuv"});
    mp.insert({9,"wxyz"});
    
    backtracking(mp,res,temp,a,N,0);
    
    return res;
}