bool checkKthBit(int n, int k){
    
    // Your code here
    if ((n&(1<<k))==(1<<k)) 
        return true;
    else
        return false; 
    // It can be a one liner logic!! Think of it!!
    
}