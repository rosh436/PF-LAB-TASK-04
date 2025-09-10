#include<stdio.h>
int main(){
	int celsiusTemp;
	printf("Enter the temperature: ");
	scanf("%d",&celsiusTemp);
	if(celsiusTemp>30)
	printf("\"Hot Day\"");
	else
	printf("\"Pleasant day\"");
	return 0;
}
