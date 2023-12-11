#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//----------------------------------------

struct employer_data
{
    char name[999];
    char function[999];
    float money;
};
float enterprise(struct employer_data b[])
{
    int i;
    float results;
    float plus = 0;

    for (i = 0; i < 2; i++)
    {
        plus += b[i].money;
    }
    results = plus / 2;
    return results;
}
float person(struct employer_data a[])
{
    int i;
    int f = 0;
    float plus = 0;
    float result;

    for (i = 0; i < 2; i++)
    {
        if (strcmp(a[i].function, "programador") == 0)
        {
            f++;
            plus += a[i].money;
        }
    }
    result = plus / f;

    return result;
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration--------------------
    struct employer_data employer[2];
    int i;
//----------------------------------------

    for (i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("Digite seu nome: ");
        gets(employer[i].name);
        fflush(stdin);
        printf("\nDigite seu cargo: ");
        gets(employer[i].function);
        fflush(stdin);
        printf("\nDigite seu sálario: ");
        scanf("%f", &employer[i].money);
        fflush(stdin);
        system("cls || clear");
    }
    printf("média sálarial de um funcionario: %.2f", person(employer));
    printf("\nmédia sálarial da empresa: %.2f", enterprise(employer));
    return 0;
}