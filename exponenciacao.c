
#include <stdio.h>


long int exponenciacao(long int n, long int k){
    if(k == 1)
        return n;
    if((k % 2) == 0){
        return(exponenciacao((exponenciacao(n, k/2)), 2));
    }
    else
    return(n * exponenciacao(exponenciacao(n,  k/2), 2));
        
    
    }


void pot_iterativa(long int n, long int k){
    
    long int pot = 1;
    
    for(int i = 0; i<k;i++)
        pot *= n;
    
    printf("%ld\n", pot);
}

int main()
{
long int n, k, p;

scanf("%ld", &n);
scanf("%ld", &k);
// pot_iterativa(n, k);
p = exponenciacao(n, k);
printf("%ld\n", p);
    return 0;
}

