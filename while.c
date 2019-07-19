/* bucle while

  while (condicion){
    instrucciones
  }                 */

//mostrar los 10 primeros numeros en pantalla

#include<stdio.h>

int main(){
    int i,e;
    printf("Quiere ver los numeros: \n1.Ascendentes \n2.Descendentes?\n \(1/2)\n");
    scanf("%i",&e);
    if(e==1){
        i=1;
       while(i<=10){
           printf("%i\n",i);
           i+=1;
           }
    } else {
        if(e==2){
        i=10;
        while(i>=1){
           printf("%i\n",i);
           i-=1;
           }
        } else {
            printf("No escribio un caracter valido");
            }
    }

return 0;
}

