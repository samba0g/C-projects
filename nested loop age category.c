#include<stdio.h>
#include<conio.h>
main(){

char name[50],cat[20];
int age;

a:
printf("Enter your full name:\n");
gets(name);
printf("Enter your age:\n");
scanf("%f",&age);

printf("\nyour name is %s\n",name);

if (age>=20 && age < 60){

 printf("\nYou are adult\n");
}
 else if (age < 20)
  {

printf ("\nYou are young\n");
}
 else {
printf ("\nYou are old\n");
}
system("pause");
return 0;
}
