#include <stdio.h>

int exibir_menu()
{
    int opc;

    printf("1 - Cadastrar produto\n2 - Quantidade de produtos em estoque\n3 - Produtos por categoria\n4 - Produtos por fornecedor\n5 - Checar estoque\n6 - Sair\n");
    scanf("%d", &opc);

    return opc;
}

int main()
{

    int cat_prodxfornec[4][5] = {0};
    int continuar = 1, opc, i, j, cod_fornecedor, produto_cat, total_produtos = 0, total_prodcat = 0, total_prodforn = 0;

    while (continuar)
    {

        opc = exibir_menu();

        switch (opc)
        {
        case 1:

            printf("Digite o numero do fornecedor [1-5]:\n");
            scanf("%d", &cod_fornecedor);

            printf("Digite a categoria do produto [1-5]:\n");
            scanf("%d", &produto_cat);

            cat_prodxfornec[produto_cat - 1][cod_fornecedor - 1] += 1;

            break;

        case 2:

            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    total_produtos += cat_prodxfornec[i][j];
                }
            }

            printf("\nQuantidade de produtos em estoque: %d\n", total_produtos);
            
            total_produtos = 0;

            break;
        case 3:
            printf("\nTotal de produtos por categoria\n");

            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    total_prodcat += cat_prodxfornec[i][j];
                }

                printf("\nCategoria %d = %d produtos\n", i + 1, total_prodcat);

                total_prodcat = 0;
            }

            break;
        case 4:

            printf("\nTotal de produtos por fornecedor\n");

            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    total_prodforn += cat_prodxfornec[j][i];
                }

                printf("\nFornecedor %d = %d produtos\n", i + 1, total_prodforn);

                total_prodforn = 0;
            }

            break;
        case 5:

            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    total_prodforn += cat_prodxfornec[j][i];
                }

                if (total_prodforn < 10)
                {
                    printf("\nAtencao: fornecedor %d precisa reabastercer\n", i + 1);
                }

                total_prodforn = 0;
            }
            break;

        case 6:
            continuar = 0;
            break;

        default:
            printf("Opcao invalida!");
            break;
        }
    }

    return 0;
}