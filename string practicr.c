#include<stdio.h>
#include<string.h>
 
int main()
{ char a[100];
	char name [1000];
	printf("enter a name \n" );
	scanf("%s",&name);
	
	printf("before reverse %s \n",name);
	
	printf("after reverse %s",strrev(name));
	
printf("the lenght of name is %d",strlen(name));
printf("enter another name \n");
scanf("%d",&a);
printf("0 for equal and 1 for equal \n %d \n",strcmp(a,name));
}
