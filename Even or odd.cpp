#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("\n %d is Even.\n",a);
	}
	else{
		printf("\n %d is Odd.\n",a);
	}
	return 0;
}
