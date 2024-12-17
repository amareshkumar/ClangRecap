extern "C" {

long factorial (int n){
    long fact = 1;
    if (n==0) return 0;
    else if (n==1) return 1; 

    for (int i = 1; i < n+1 ; i++) {
        fact = n * factorial (n-1);
    }

    return fact;
}

};