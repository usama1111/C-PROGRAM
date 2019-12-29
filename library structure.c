
#include<stdio.h>
struct lib{
	
	int num;
	char author[200];
	char title[100];
	
};
struct lib b1[2];
main(){
	
int i;	
int j=0;
 printf("enter book num \n enter book author \n enter book title \n");
for(i=0;i<2;i++)
{
scanf("%d %s %s",&b1[i].num,&b1[i].author,&b1[i].title);
j++;
}

for(i=0;i<2;i++)
{
	printf("%d %s %s",b1[i].num,b1[i].author,b1[i].title);
	
}

printf("the count is %d",j);
}
