#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//----------------------------------------
struct product
{
    char name[999];
    int size;
    float price;
    int stock;
};
void results(struct product a[])
{
    float pricestock[3];
    int i;
    a[0].size = 10;
    a[1].size = 10;
    a[2].size = 10;
    a[0].price = 5.50;
    a[1].price = 8.50;
    a[2].price = 2.50;
    for (i = 0; i < 3; i++)
    {
        pricestock[i] = a[i].stock * a[i].price;
    }
    printf("valor do estoque de laranjas: %.2f\n", pricestock[0]);
    printf("valor do estoque de batatas: %.2f\n", pricestock[1]);
    printf("valor do estoque de pães: %.2f\n", pricestock[2]);
}

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration--------------------
    struct product products[3];
    int option[2];
    products[0].stock = 500;
    products[1].stock = 500;
    products[2].stock = 500;
//----------------------------------------
    do
    {
        do
        {
            printf("\n1- REALIZAR COMPRA");
            printf("\n2- VER ESTOQUE");
            printf("\n3- SAIR\n\n");
            printf("escolha: ");
            scanf("%i", &option[0]);
            if (option[0] != 3 && option[0] != 2 && option[0] != 1)
            {
                system("cls || clear");
                printf("OPÇÃO INEXISTENTE, ESCOLHA UMA DAS ABAIXO\n\n");
            }
        } while (option[0] != 3 && option[0] != 2 && option[0] != 1);
        system("cls || clear");
        switch (option[0])
        {
        case 1:
            products[0].size = 10;
            products[1].size = 10;
            products[2].size = 10;
            products[0].price = 5.50;
            products[1].price = 8.50;
            products[2].price = 2.50;
            do
            {
                printf("\n1-laranja por R$%.2f, quantidade: %i", products[0].price, products[0].size);
                printf("\n2-batata por R$%.2f, quantidade: %i", products[1].price, products[1].size);
                printf("\n3-pão por R$%.2f, quantidade: %i", products[2].price, products[2].size);
                printf("\n\nescolha: ");
                scanf("%i", &option[1]);
                system("cls || clear");
            } while (option[0] != 3 && option[0] != 2 && option[0] != 1);
            if (option[1] == 1)
            {
                products[0].stock -= 10;
            }
            if (option[1] == 2)
            {
                products[1].stock -= 10;
            }
            if (option[1] == 3)
            {
                products[2].stock -= 10;
            }
            break;
        case 2:
            system("cls || clear");
            results(products);
            break;
        }
    } while (option[0] != 3);
    system("cls || clear");
    printf("COMPRAS FINALIZADAS, VOLTE SEMPRE");
    return 0;
}