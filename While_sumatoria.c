//Sumar 1-2+3-4+5-6...+-n

#include<stdio.h>

int main(){
    int n,i=1,sp=0,sn=0,st=0;
    printf("Hasta que numero debo sumar?\n");scanf("%i",&n);
    while(i<=n){
        if(i%2==1){
            sn=sn+i;
            i++;
        }else{
            sp=sp+i;
            i++;
        }
    }
    st=sn-sp;
    printf("El resultado es: %i",st);

    return 0;
}
