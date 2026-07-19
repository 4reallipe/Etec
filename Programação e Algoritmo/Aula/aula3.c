#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<wchar.h>
#include<stdbool.h> // serve para  fazer os booleanos(True/False) Funcionar

int main (void){
setlocale(LC_ALL,"Portuguese");
char nome[10] = "Quarta";
char aluno1[9] = "davi"; 
int idade = 12;
float altura = 1.75;
bool aluno = true;

wprintf(L"Semana: %S \n",nome); // %S (char) Aqui serve pra mostrar o que têm dentro das variaveis de tipo texto
wprintf(L"Aluno: %S \n",aluno1);
wprintf(L"Sua idade %d \n",idade); // %d (real) Aqui serve pra mostrar o que têm dentro das variaveis de tipo inteiro
wprintf(L"Sua altura %.2f \n",altura); // %f (float) Aqui serve pra mostrar o que têm dentro das variaveis de tipo real, o .2 dps do %f serve pra limitar as casa decimais
wprintf(L"Aluno %d \n",aluno);

system("pause");
return 0;
}