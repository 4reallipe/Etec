#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>
int main (void){
	setlocale(LC_ALL,"portuguese");	
	int num;
	wprintf(L"digite seu número: \n");
	wscanf(L"%d",&num);
	if(num >= 0){
	wprintf(L"Número positivo \n");
	}else{
	wprintf (L"Número negativo \n");
	}
	
	system ("pause");
	return 0;
}