//code to find all factors
     for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                cout <<" "<< i; 
  
            else // Otherwise print both 
                cout << " "<< i << " " << n/i; 
        } 
    } 