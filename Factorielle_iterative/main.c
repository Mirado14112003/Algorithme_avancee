#include <stdio.h>
#include <stdlib.h>

long long factorielle_iterative(unsigned int n){
    long long res = 1;
    unsigned int i = 2;

    while (i<=n){
        res*=i;
        i++;
    }
    return res;
}

int main()
{
    unsigned int n;
    printf("Entrer le nombre de votre choix : ");
    scanf("%u", &n);
    printf("%u! = %lld", n, factorielle_iterative(n));
    return 0;
}
