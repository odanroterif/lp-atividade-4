#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//----------------------------------------
struct student
{
    char name[999];
    char birthday[999];
    float note[2];
    float result;
};
void condition(struct student people[])
{

    //char c[5][999];
    int i;
    
    for (i = 0; i < 5; i++)
    {
        
        if (people[i].result >= 7)
        {
            //strcpy(c[i], "\nAPROVADO");
             printf("\nAPROVADO");
        }
        else
        {
            //strcpy(c[i], "\nREPROVAODO");
             printf("\nREPROVAODO");
        }
    }
    //return c;
}

void results(struct student people[])
{
    int i;

    for (i = 0; i < 5; i++)
    {
       
        printf("\naluno %i média: %.1f ", i + 1, people[i].result); //condition(finalnote));
        (condition(people));
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration--------------------
    struct student students[5];
    int i, j;
    float plus = 0;
//----------------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("Digite seu nome: ");
        gets(students[i].name);
        fflush(stdin);
        printf("\nDigite sua data de nascimento: ");
        gets(students[i].birthday);
        fflush(stdin);
        for (j = 0; j < 2; j++)
        {
            do
            {
                printf("\nDigite a %i° nota: ", j + 1);
                scanf("%f", &students[i].note[j]);
                fflush(stdin);
                system("cls || clear");
                if (students[i].note[j] < 0 || students[i].note[j] > 10)
                {
                    system("cls || clear");
                    printf("NOTA INVALIDA\n\n");
                }
            } while (students[i].note[j] < 0 || students[i].note[j] > 10);
            plus += students[i].note[j];
        }
        students[i].result = plus / 2;
        plus = 0;
    }
    system("cls || clear");
    results(students);
    return 0;
}
