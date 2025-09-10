#include<stdio.h>
#include<string.h>
int main(){
	char userPass[20];
	printf("Enter your password:");
	scanf("%s",userPass);
	if(strcmp(userPass,"1234")==0)
	printf("\"Access Granted\"");
	else
	printf("\"Access Denied\"");
	return 0;
}
