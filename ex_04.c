#include <stdio.h>

int main(){
    
    int base, altura, topo, i, j;

    printf("Digite um numero para base da piramide:\n");
    scanf("%d", &base);

    printf("Digite uma altura para piramide:\n");
    scanf("%d", &altura);

    printf("\n");

    if(altura >= 2 && altura <= 50){
        
        topo = base + (altura - 1);
        
        for(i = 0; i < altura; i++){

            for(j = 0; j <= i; j++){
                
                printf("%d ", base + j);    
                
            }

            printf("\n");
        }

        for(i = (altura - 1); i > 0; i--){
            
            for(j = 0; j < i; j++){

                printf("%d ", base + j);
                
            }
           
            printf("\n");
        }

    }else{printf("\nAltura invalida!\n");}
    
    return 0;
}