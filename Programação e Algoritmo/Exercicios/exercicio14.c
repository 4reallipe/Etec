#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"portuguese");	
	int temp;
	
	wprintf(L"Digite a temperatura: \n");
	wscanf(L"%d",&temp);
	
	if(temp >= 20 && temp <=30){
		wprintf(L"Temperatura agradável \n");
	}else{
		wprintf (L"De suar o boga // De congelar o boga \n");
	}
	
	system ("pause");
	return 0;
}