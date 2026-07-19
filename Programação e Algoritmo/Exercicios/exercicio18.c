#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"Portuguese");
	
	int hor;
	
	wprintf(L"Digite horario atual (Formato 24h): ");
	wscanf(L"%d", &hor);
	
	system("cls");
	
	if(hor>= 8 && hor<=18){
		wprintf(L"Horario atual: %d h \n", hor);
		wprintf(L"Horario Comercial \n");
	} else{
		wprintf(L"Horario atual: %d h \n", hor);
		wprintf(L"Fora de horario comercial \n");
	}
	
	system("pause");
	return 0;
}
