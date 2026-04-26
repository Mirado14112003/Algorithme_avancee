#include <stdio.h>
#include <stdlib.h>

long long factorielle_recursive(unsigned int n){
    if(n == 0)
        return 1;
    else
        return n * factorielle_recursive(n-1);
}

int main()
{
    unsigned int n;
    printf("Entrer le nombre de votre choix : ");
    scanf("%u", &n);
    printf("%u! = %lld", n, factorielle_recursive(n));
    return 0;
}
