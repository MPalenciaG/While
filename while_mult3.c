//Multiplos de x desde 1 hasta n

#include<stdio.h>
int main(){
    int i,n,m;
    printf("Digite el numero del que desea saber los multiplos. \n");scanf("%i",&m);
    printf("Digite el total de numeros a comprobar.\n");scanf("%i",&n);
    i=1;
    while(i<=n){
        if(i%m==0){
            printf(".%i.\n",i);
        }
        i++;
    }
    return 0;
}
