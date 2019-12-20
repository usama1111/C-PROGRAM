#include<stdio.h>
main()
{
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int i,j;
	printf("enter array elements \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{

	scanf("%d",&a[i][j]);
}
}
printf("enter array elemets \n");

for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{

	scanf("%d",&b[i][j]);
}
}

for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{

	c[i][j]=a[i][j] + b[i][j];
}
printf("\n");
}
printf(" the addition is \n");
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{



printf(" %d",c[i][j]);
}
printf("\n");
}
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{

	c[i][j]=a[i][j] * b[i][j];
}
printf("\n");
}
printf("the multiplication is \n");
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{

	printf(" %d",c[i][j]);
}
printf("\n");
}
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{

	c[i][j]=a[i][j] - b[i][j];
}
printf("\n");
}
printf(" the subtraction is\n");
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{

	printf(" %d",c[i][j]);
}
printf("\n");
}
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{

	c[i][j]=a[i][j] / b[i][j];
}
printf("\n");
}
printf("the division is \n");
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
{

	printf(" %d",c[i][j]);
}
printf("\n");
}
}
