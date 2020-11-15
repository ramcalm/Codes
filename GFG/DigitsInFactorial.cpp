
int digitsInFactorial(int N)
{
    if (N < 0) 
        return 0; 
  
    // base case 
    if (N <= 1) 
        return 1; 
  
    // else iterate through n and calculate the 
    // value 
    double digits = 0; 
    for (int i=2; i<=N; i++) 
        digits += log10(i); 
  
    return floor(digits) + 1; 
    
    //Your code here
}