#include <stdio.h>



float calcular_media(float prova1, float prova2, float lista_exercicios){

    float media;
    
    media = (((prova1 + prova2)/2) * 0.8) + (lista_exercicios * 0.2);

    return media;


}

float calcular_recuperacao(float media_antiga, float nota_recuperacao){

    float nova_media;

    nova_media = (media_antiga + nota_recuperacao)/2;

    return nova_media;

}


int main(){

    float feiticos, pocoes, dcat, herbologia, cr, prova1, prova2, lista_exercicios, media_antiga, nota_recuperacao, novo_cr;

    int continuar = 1, opc;

    while (continuar){

        printf("Bem vindo ao sigaa de Hogwarts\n");
        printf("1 - feiticos\n2 - Pocoes\n3 - Defesa Contra as Artes das Trevas\n4 - Herbologia\n5 - calcular notas\n");
        printf("Escolha uma opcao para cadastrar as notas:\n");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                printf("Digite em ordem e com espaco as notas da prova 1, prova 2 e lista de exercicio:\n");
                scanf("%f %f %f", &prova1, &prova2, &lista_exercicios);
                feiticos = calcular_media(prova1, prova2, lista_exercicios);
                break;
            case 2:
                printf("Digite em ordem e com espaco as notas da prova 1, prova 2 e lista de exercicio:\n");
                scanf("%f %f %f", &prova1, &prova2, &lista_exercicios);
                pocoes = calcular_media(prova1, prova2, lista_exercicios);
                break;
            case 3:
                printf("Digite em ordem e com espaco as notas da prova 1, prova 2 e lista de exercicio:\n");
                scanf("%f %f %f", &prova1, &prova2, &lista_exercicios);
                dcat = calcular_media(prova1, prova2, lista_exercicios);
                break;
            case 4:
                printf("Digite em ordem e com espaco as notas da prova 1, prova 2 e lista de exercicio:\n");
                scanf("%f %f %f", &prova1, &prova2, &lista_exercicios);
                herbologia = calcular_media(prova1, prova2, lista_exercicios);
                break;
            case 5:
                continuar = 0;
                break;
            default:
                printf("Opcao invalida!\n");
                printf("Para tentar novamente digite [1]. Para sair digite [0]\n");
                scanf("%d", &continuar);
                break;
        }

    }
    
    printf("NOTAS:\nFeiticos: %.2f\npocoes: %.2f\nDefesa Contra as Artes das Trevas: %.2f\nHerbologia: %.2f\n", feiticos, pocoes, dcat, herbologia);
    cr = (feiticos + pocoes + dcat + herbologia)/4;
        
    if(feiticos < 7 || pocoes < 7 || dcat < 7 || herbologia < 7){
            
        if(feiticos < 7){ 
            printf("Harry, digite a nota da prova de recuperacao Feiticos:\n");
            scanf("%f", &nota_recuperacao);
            feiticos = calcular_recuperacao(feiticos, nota_recuperacao);
        }
        if(pocoes < 7){ 
            printf("Harry, digite a nota da prova de recuperacao em Pocoes:\n");
            scanf("%f", &nota_recuperacao);
            pocoes = calcular_recuperacao(pocoes, nota_recuperacao);
        }
        if(dcat < 7){ 
            printf("Harry, digite a nota da prova de recuperacao em Defesa Contra as Artes das Trevas:\n");
            scanf("%f", &nota_recuperacao);
            dcat = calcular_recuperacao(dcat, nota_recuperacao);
        }
        if(herbologia < 7){ 
            printf("Harry, digite a nota da prova de recuperacao em Herbologia:\n");
            scanf("%f", &nota_recuperacao);
            herbologia = calcular_recuperacao(herbologia, nota_recuperacao);
        }

        novo_cr = (feiticos + pocoes + dcat + herbologia)/4;
        
        if(feiticos >= 5 && pocoes >= 5 && dcat >= 5 && herbologia >= 5){
            printf("Harry, apos muito esforco voce conseguiu passar! 50 pontos para a Grifinoria!\n");
            printf("CR: %.2f", novo_cr);
        }else{
            printf("Harry, voce reprovou e tera que repetir o ano! -100 pontos para a Grifinoria!\n");
            printf("CR: %.2f", novo_cr);
        }

    }else{
        printf("Parabens, Harry. Voce passou! 100 pontos para a Grifinoria!\n");
        printf("CR: %.2f", cr);
    }
        

}