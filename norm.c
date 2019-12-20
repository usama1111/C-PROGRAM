#include<stdio.h>
#include<math.h>
main()
{ int i,j,n,m,a[10][10],sum=0;
double norm;
printf("\nEnter the dimensions:: ");
scanf("%d%d",&n,&m);

printf("\nEnter the eleents of matrix::\n");
for(i=0;i<n;i++)
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);

printf("\nOriginal Matrix is:: ");
for(i=0;i<n;i++)
{ printf("\n");
for(j=0;j<n;j++)
printf("\t%d",a[i][j]);
}

for(i=0;i<n;i++)
for(j=0;j<m;j++)
{ sum+=(a[i][j] * a[i][j]);
}

norm=sqrt((double)sum);

printf("\nNORM:: %lf", norm);
}
{ int i,j,n,m,a[10][10],sum=0;
double norm;
printf("\nEnter the dimensions:: ");
scanf("%d%d",&n,&m);

printf("\nEnter the eleents of matrix::\n");
for(i=0;i<n;i++)
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);

printf("\nOriginal Matrix is:: ");
for(i=0;i<n;i++)
{ printf("\n");
for(j=0;j<n;j++)
printf("\t%d",a[i][j]);
}

for(i=0;i<n;i++)
for(j=0;j<m;j++)
{ sum+=(a[i][j] * a[i][j]);
}

norm=sqrt((double)sum);

printf("\nNORM:: %lf", norm);
}
