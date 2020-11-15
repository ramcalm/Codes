unsigned int getFirstSetBit(int n){
    
    return log2(n & -n) + 1;
    
    
}