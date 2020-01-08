
#include<stdio.h>
#include<string.h>
struct library{
	 int a_number;
	 char name[100] ;
	 char book_title[100];

}b[2];
main(){
	

	int i;
	printf("enter book accession number \n enter author name \n enter book title\n");
	for(i=0;i<2;i++)
	{
		scanf("%d",&b[i].a_number);
		scanf("%s",&b[i].name);
		scanf("%s",&b[i].book_title);
		
}
	for(i=0;i<2;i++)
	{
		printf("%d \n",b[i].a_number);
		printf("% \ns",b[i].name);
		printf("%s \n",b[i].book_title);
		
}	
char name2[30];
strcpy(b[2].name,name2);		

	for(i=0;i<2;i++)
	{
	if (strcmp(b[i].name,name2))
{
	
		printf("%d \n",b[i].a_number);
		printf("%s \n",b[i].name);
		printf("%s \n",b[i].book_title);
}


	}
	char title[100];
	strcpy(b[2].book_title,title);
	int count=0 ;
		for(i=0;i<2;i++)
	{
	if (	strcmp(b[i].book_title,title))
{
	count++;
	
}
}
int count2;


printf("\nthe count of particular title books are=%d\n",count);	
	for(i=0;i<2;i++)
	{   b[i].book_title;
	count2++;
}
printf("\nthe count of books are=%d\n",count2);
int mm;
printf("enter 0 for exit \n");
	scanf("%d",&mm);	
do{
int mm;
printf("enter 0 for exit \n");
	scanf("%d",&mm);	
	char u ;
	char q;
	
	printf("do you want to issue a book Y OR N? \n");
	scanf("%c",&u);
	
if(u == 'y' || u == 'Y')
{
	
	count2--;
	
}
else
{
	break;
}

printf("do you want to give it back Y OR N \n ?");
	scanf("%c",&q);
if(q=='Y'|| q == 'y')
{
	
	count2++;
	
}	
else{
	break;
}
	
	


}

while ( mm != 0 );
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

