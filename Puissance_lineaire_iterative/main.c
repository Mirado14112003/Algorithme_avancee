#include <stdio.h>
#include <stdlib.h>

long long puissance_lineaire_iterative(long long a, unsigned int n){
    long long resultat = 1;
    for (int i=0; i<n; i++){
        resultat *= a;
        printf("Etape %u : resultat = %lld\n", i+1, resultat);
    }
    return resultat;
}

int main()
{
    long long a;
    unsigned int n;
    printf("Entrer le chiffre : ");
    scanf("%lld", &a);
    printf("Entrer l'exposant : ");
    scanf("%u", &n);

    long long resultat = puissance_lineaire_iterative(a, n);
    printf("\n%lld^%u = %lld\n", a, n, resultat);
    return 0;
}
