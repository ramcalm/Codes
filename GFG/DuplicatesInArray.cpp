vector<int> duplicates(int a[], int n) {
    vector<int> t;
    for (int i = 0; i < n; i++) {
        a[a[i] % n] = a[a[i] % n] + n;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] >= n * 2) 
            t.push_back(i);
    }
    if(t.size()==0)
    {
        t.push_back(-1);
    }
    return t;
}
