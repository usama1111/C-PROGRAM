#include<stdio.h>
struct book{
	
	char name[30];
	int price;
	int quantity;

	
	
}b[2];
main(){
	int i;
	FILE *uu;
uu=fopen("hello.txt","w");
if (uu==NULL)
{
	exit(1);
}
for(i=0;i<2;i++)
{
	scanf(" %s  %d  %d",&b[i].name,&b[i].price,&b[i].quantity);
	
	
}
for(i=0;i<2;i++)
{
	fprintf(uu,"%s %d %d",&b[i].name,&b[i].price,&b[i].quantity);
	
	
	
	
	
}
fclose(uu);
}
