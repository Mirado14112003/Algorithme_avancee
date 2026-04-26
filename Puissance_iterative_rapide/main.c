#include <stdio.h>
#include <stdlib.h>

long long puissance_rapide_iterative(long long a, unsigned int n){
    long long result = 1;

    while(n!=0){
        if (n % 2 == 0){
            a = a *a;
            n = n / 2;
        }
        else{
            result*=a;
            n = n-1;
        }
    }
    return result;
}

int main()
{
    long long a;
    unsigned n;
    printf("Entrer le nombre : ");
    scanf("%lld", &a);
    printf("Entrer l'exposant : ");
    scanf("%u", &n);
    printf("%lld ^ %u = %lld\n", a, n, puissance_rapide_iterative(a, n));
    return 0;
}
