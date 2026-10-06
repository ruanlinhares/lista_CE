#include <stdio.h>

int main(){
    
    int base, altura, topo, i, j, k;

    printf("Digite um numero para base da piramide:\n");
    scanf("%d", &base);

    printf("Digite uma altura para piramide:\n");
    scanf("%d", &altura);

    if(altura >= 2 && altura <= 50){
        topo = base + (altura - 1);
        
        for(i = 0; i <= base; i++){

            for(j = i; j <= altura; j++){
                
                if(j == altura){
                    for(k = altura; k == 1; k--){
                        printf("%d ", topo - 1);
                        i++;
                    }
                }
                
                printf("%d ", base + i);    
                
            }

            
        }

    }else{printf("\nAltura invalida!\n");}
    return 0;
}