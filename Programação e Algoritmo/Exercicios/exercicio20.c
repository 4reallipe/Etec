#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"Portuguese");
	
	int pres, nota;
	
	wprintf(L"Digite a Quantidade de Presenças (em %%): ");
	scanf("%d", &pres);
	
	system("cls");
	
	wprintf(L"Digite a nota do aluno: ");
	scanf("%d", &nota);
	
	system("cls");
	
	if(pres >= 75 && nota >= 7){
		wprintf(L"Nota: %d \n", nota);
		wprintf(L"Presença: %d%% \n", pres);
		wprintf(L"Aprovado. \n");
	} else {
		wprintf(L"Nota: %d \n", nota);
		wprintf(L"Presença: %d%% \n", pres);
		wprintf(L"Reprovado. \n");
	}
	
	
	system("pause");
	return 0;
}