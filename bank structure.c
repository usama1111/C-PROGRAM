
#include<stdio.h>
struct employe{
 int employe_code;
 char nam;
 int day;
 int month;
 int year;
}a[3];


main()
{
 struct employe e1={2,"ali",20,1,2019};
 struct employe e2={3,"ki",24,3,2018};
 struct employe e3={5,"ww",9,2,2012};
int a,b,c;
int i;
printf("enter day \n");
printf("enter month \n");
printf("enter year \n");
scanf("%d %d %d",&a,&b,&c);

for(i=1;i<=3;i++)
{
if((c - e3.year)>=3)
{
	printf("%s",e3.nam);
	
}
	
	
}
}
