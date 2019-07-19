//suma de los n primeros numeros

#include<stdio.h>

int main(){
    int i,n,s=0;
    printf("Digite el total de numeros a sumar.\n");
    scanf("%i",&n);
    i=1;
    while(i<=n){
        s=s+i;
        i++;
    }
    printf("La suma de %i numeros consecutivos es: %i",n,s);
    return 0;
}
