#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
#define TRUE 1

   
void new_marksheet();
void list_all();
struct personal{
char name[50],fname[80],add[50],ph[50],school_name[50],m_grade[50];
int sum,total;
float m_per;
};
struct personal nm[100];
int n=0;
char numstr[50];
void password_match();
void main_menue();

void main(){
	
while(TRUE){

	
    printf("\n\t\tWELCOME TO MARKS SHEET GENERATOR...!\n");
    printf("\t\t=======================================");
    printf("\n\tPress Any Key To Continue the Program..!");
    getch();
    password_match();
    
}



}
void password_match(){
system("cls");
char pass[100]="helloworld";
char username[100],password[100];
printf("\n\tPlease Enter the Following information for next Step...!");
printf("\n\t\tPlease Enter the Password:");
scanf("%s",&password);
            if ( strcmp(password,pass)==0)
            {
            printf("\n\t\tThanks for giving Correct User Name and Password\n");
            main_menue();
            }
            else{
            printf("\n\t\tEnter the Correct User-Name and Password\n");
            }
        }
void main_menue(){
    char ch;
    system("cls");
    printf("\n\t\tWELCOME TO MARKS SHEET GENERATOR...!\n");
    printf("\t\t=======================================");
printf("\n\n\t\tPress [1] for Creating Marksheet");
printf("\n\n\t\tPress [2] For saving data in file");
printf("\n\n\t\tPress [3] Exit\n");
ch=getch();
switch(ch){
case '1':
     new_marksheet();
break;

case '2':
    list_all();
    break;

case '3':
    exit(0);
break;



default:
    printf(" Invalid Selection");
    
    }
}


void new_marksheet()
{

	
	

    system("cls");
    printf("\n\t\tWELCOME TO MARKS SHEET GENERATOR...!\n");
    printf("\t\t=======================================");
printf("\nMarksheet id No: %d",n+1);
printf("\nEnter the Stundent Name:\n");
scanf("%s",nm[n].name);
printf("\nEnter the Father Name:\n");
scanf("%s",nm[n].fname);
printf("\nEnter the Address:\n");
scanf("%s",nm[n].add);
printf("\nEnter the Contact No:\n");
scanf("%s",nm[n].ph);
printf("\nEnter the School Name:\n");
scanf("%s",nm[n].school_name);

printf("\n\t\t======================================");
printf("\n\t\tSubject Session\n");
printf("\n\t\t======================================");
printf("\n\t\tEnter the Subject's Marks");
printf("\n\t\t======================================\n");
int sub[5],ob=0,i=0;
for(i=1;i<=5;i++){
    printf("Enter Subject [%d] Mark's:\n",i);
    scanf("%d",&sub[i]);
    ob=nm[n].sum+=sub[i];
}
printf("\nMARKS OBTAINED=%d\n",nm[n].sum);
float per;
char ass[100];
per=ob/500.00*100;
nm[n].m_per=per;
printf("\nPERCENTAGE=%f",nm[n].m_per);
if(per >= 80)
    {
        printf("\nGRADE=A-1\n");
        
        nm[n++].m_grade==ass;
}
else if ( per >=70)
    {
        printf("\nGRADE=A\n");
        
        nm[n++].m_grade==ass;
}
else if ( per >=60)
{
    printf("\nGRADE=B\n");
    
    nm[n++].m_grade==ass;
}
else if ( per >=40)
{
    printf("\nGRADE=C\n");
    
    nm[n++].m_grade==ass;
}
else if ( per < 40)
{
    printf("\nFAIL\n");
    
    nm[n++].m_grade==ass;
}


}

void list_all()
{
system("cls");

    printf("\n\n\t\t\tList of All Record in File..!\n");
    printf("\t\t=========================================\n");

int j=0;
if(n<1){
    printf("No Record has found in File\n");
}
FILE *fp;
	fp=fopen("myfile.txt","w");
if(fp==NULL)
{

printf("error opening file \n");

exit(1);
}




for(j=0;j<n;j++){
    fprintf(fp,"\t\tMARKS SHEET NUMBER:[%d]\n",n+1);
    fprintf(fp,"\tNAME:%s\n",nm[j].name);
    fprintf(fp,"\tFATHER NAME:%s\n",nm[j].fname);
    fprintf(fp,"\tADDRESS:%s\n",nm[j].add);
    fprintf(fp,"\tPHONE NUMBER:%s\n",nm[j].ph);
    fprintf(fp,"\tSCHOOL NAME:%s\n",nm[j].school_name);
    fprintf(fp,"\tPERCENTAGE:%.2f\n",nm[j].m_per);
    fprintf(fp,"\tOBTAINED MARKS:%d\n",nm[j].sum);
    fprintf(fp,"\tTOTAL MARKS:500\n");
    fprintf(fp,"\tGRADE:%s\n",nm[j].m_grade);

}
fclose(fp);
}
















