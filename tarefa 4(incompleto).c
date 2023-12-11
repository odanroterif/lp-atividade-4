#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//----------------------------------------
struct bankconter
{
    int number;
    float money[2];
    char type[999];
    char name[999];
};
float transition(struct bankconter bank, int select[])
{
    bank.money[0] = 9999.99;
    float retiret;
    switch (select[1])
    {
    case 1:
        printf("ATUALMENTE NA CONTA %.2f", bank.money[0]);
        printf("\n\nquanto você quer sacar?: ");
        scanf("%f", &retiret);
        bank.money[0] -= retiret;
        break;
    case 2:
        printf("ATUALMENTE NA CONTA %.2f", bank.money[0]);
        printf("\n\nquanto você quer depositar?: ");
        scanf("%f", &retiret);
        bank.money[0] += retiret;
        break;
    }
    return bank.money[0];
}
float transition2(struct bankconter bank, int select[])
{
    bank.money[1] = 9999.99;
    float retiret;
    switch (select[1])
    {
    case 1:
        printf("ATUALMENTE NA CONTA %.2f", bank.money[1]);
        printf("\n\nquanto você quer sacar?: ");
        scanf("%f", &retiret);
        bank.money[1] -= retiret;
        break;
    case 2:
        printf("ATUALMENTE NA CONTA %.2f", bank.money[1]);
        printf("\n\nquanto você quer depositar?: ");
        scanf("%f", &retiret);
        bank.money[1] += retiret;
        break;
    }
    return bank.money[1];
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    // variable declaration--------------------
    struct bankconter bank;
    float acont[2];
    int option[3];
    //----------------------------------------
    do
    {
        do
        {
            printf("Digite seu nome: ");
            gets(bank.name);
            fflush(stdin);
            printf("\nDigite o número da conta: ");
            scanf("%i", &bank.number);
            fflush(stdin);
            system("cls || clear");
            printf("1- CONTA POUPANÇA");
            printf("\n2- CONTA CORRENTE");
            printf("\n3- SAIR");
            printf("\n\nescolha: ");
            scanf("%i", &option[0]);
            if (option[0] != 1 && option[0] != 2 && option[0] != 3)
            {
                system("cls || clear");
                printf("ESCOLHA SOMENTE UMA DAS OPÇÕES ABAIXO\n\n");
            }
        } while (option[0] != 1 && option[0] != 2 && option[0] != 3);
        switch (option[0])
        {
        case 1:
            do
            {
                printf("1- SACAR");
                printf("\n2- DEPOSITAR");
                printf("\n\nescolha: ");
                scanf("%i", &option[1]);
                system("cls || clear");
                if (option[1] != 1 && option[1] != 2)
                {
                    system("cls || clear");
                    printf("ESCOLHA SOMENTE UMA DAS OPÇÕES ABAIXO\n\n");
                }
            } while (option[1] != 1 && option[1] != 2);
            switch (option[1])
            {
            case 1:
                acont[0] = transition(bank, option);
                break;
            case 2:
                acont[0] = transition(bank, option);
                break;
            }

        case 2:
            do
            {
                printf("1- SACAR");
                printf("\n2- DEPOSITAR");
                printf("\n\nescolha: ");
                scanf("%i", &option[1]);
                system("cls || clear");
                if (option[1] != 1 && option[1] != 2)
                {
                    system("cls || clear");
                    printf("ESCOLHA SOMENTE UMA DAS OPÇÕES ABAIXO\n\n");
                }
            } while (option[1] != 1 && option[1] != 2);
            switch (option[1])
            {
            case 1:
                acont[1] = transition2(bank, option);
                break;
            case 2:
                acont[1] = transition2(bank, option);
                break;
            }
        }
        system("cls || clear");
    } while (option[0] != 1 && option[0] != 2 && option[0] != 3);
    system("cls || clear");
    printf("saldo restante da conta poupança: %.2f", acont[0]);
    printf("\nsaldo restante da conta corrente: %.2f", acont[1]);
    return 0;
}
}

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration--------------------
    struct bankconter bank;
    int i;
//----------------------------------------
    for (i = 0; i < 3; i++)
    {
        printf("Digite um nome: ");
        gets(persons[i].name);
        fflush(stdin);
        printf("\nDigite um número: ");
        scanf("%i", &persons[i].telephone);
        fflush(stdin);
        printf("\nDigite um email: ");
        gets(persons[i].email);
        fflush(stdin);
        system("cls || clear");
    }
    printf("Qual o nome de quem você esta buscando nos contatos?: ");
    gets(persons[3].name);
    fflush(stdin);
    printf("\n\naqui esta o número: %i", phone(persons));
    return 0;
}*/
