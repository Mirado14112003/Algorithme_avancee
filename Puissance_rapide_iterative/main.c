#include <stdio.h>
#include <stdlib.h>

long long puissance_rapide_iterative(long long a, unsigned int n){
    long long resultat = 1;

    while(n>0){
        if (n%2==1){
            resultat*=a;
        }
        a *= a;
        n /=2; //division entière par 2
    }
    return resultat;
}

int main()
{
    long long a;
    unsigned int n;
    printf("Entrer le nombre : ");
    scanf("%lld", &a);
    printf("Entrer l'exposant : ");
    scanf("%u", &n);
    printf("%lld ^ %u = %lld", a, n, puissance_rapide_iterative(a, n));
    return 0;
}
