#include<stdio.h>
func(char a);
int main()

{
	char a;
printf("enter an alphabet \n");
scanf("%c",&a);
func(a);	
return 0;	
}
func(char a){
	
	
	switch(a)
	{
		case 'a':
		printf("its a vowel");
		break;
		default:
			printf("its not a vowel ");
		break;
		
	}
	
	
	
}
