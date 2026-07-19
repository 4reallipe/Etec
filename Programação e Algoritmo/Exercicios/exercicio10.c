#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"portuguese");	
	int num;
	
	wprintf(L"Digite um numero de 1 a 7: \n");
	wscanf(L"%d",&num);
	
	if(num == 1){
		wprintf(L"Dia atual: Segunda \n");
	}
	if(num == 2){
		wprintf(L"Dia atual: Terça \n");
	}
	if(num == 3){
		wprintf(L"Dia atual: Quarta \n");
	}
	if(num == 4){
		wprintf(L"Dia atual: Quinta \n");
	}
	if(num == 5){
		wprintf(L"Dia atual: Sexta \n");
	}
	if(num == 6){
		wprintf(L"Dia atual: Sábado \n");
	}
	if(num == 7){
		wprintf(L"Dia atual: Domingo \n");
	}
	
	system ("pause");
	return 0;
}