#include <stdio.h>

int main(){

    int opcao, nota, total = 0, nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, nota5 = 0, continuar = 1;
    float percent1 = 0, percent2 = 0, percent3 = 0, percent4 = 0, percent5 = 0;
    
    while(continuar){

        printf("De uma nota de satisfacao para servico (de 1 a 5):\n");
        scanf("%d", &nota);

        switch(nota){
            case 1:
                nota1 = nota1 + 1;
                break;
            case 2:
                nota2 = nota2 + 1;
                break;
            case 3:
                nota3 = nota3 + 1;
                break;
            case 4:
                nota4 = nota4 + 1;
                break;
            case 5:
                nota5 = nota5 + 1;
                break;
            default:
                printf("Nota invalida");
                break;
        }

        printf("Para sair digite 0. Para continuar digite 1\n");
        scanf("%d", &opcao);

        if(opcao == 0){
                    
            continuar = 0;
            total = total + 1;

            printf("Percentual de notas\n");
                    
            percent1 = (nota1*100)/total;
            percent2 = (nota2*100)/total;
            percent3 = (nota3*100)/total;
            percent4 = (nota4*100)/total;
            percent5 = (nota5*100)/total;

            printf("Nota 1: %f\n", percent1);
            printf("Nota 2: %f\n", percent2);
            printf("Nota 3: %f\n", percent3);
            printf("Nota 4: %f\n", percent4);    
            printf("Nota 5: %f\n", percent5);
            printf("Total de participantes: %d", total);

        }else{total = total + 1;}
            
    }
    
    return 0;
}