bool isLucky(int n, int &counter) {
    
    int next_position = n;  
    if(counter > n)  
        return 1;  
    if(n % counter == 0)  
        return 0;  
      
    next_position -= next_position / counter;  
      
    counter++;  
    return isLucky(next_position,counter);
}