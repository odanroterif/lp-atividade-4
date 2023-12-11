#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//----------------------------------------
struct contact
{
    char name[999];
    int telephone;
    char email[999];
};
int phone(struct contact people[])
{

    int i;
    int recept;
    for (i = 0; i < 3; i++)
    {
        if (strcmp(people[3].name, people[i].name) == 0)
        {
            recept = people[i].telephone;
        }
    }

    return recept;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration--------------------
    struct contact persons[4];
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
}