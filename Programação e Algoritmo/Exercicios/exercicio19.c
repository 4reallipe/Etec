#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>
int main (void){
	setlocale(LC_ALL,"portuguese");	
	int nota;
	wprintf(L"digite nota do aluno: \n");
	wscanf(L"%d",&nota);
	if(nota >= 9){
	wprintf(L"parabéns você é um execelente aluno \n");
	}else {
	wprintf (L"melhore but kkkkk \n");
	}
	
	system ("pause");
	return 0;
}