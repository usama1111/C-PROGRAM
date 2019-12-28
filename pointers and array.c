#include<stdio.h>
void fun(int *ptr);
int main(){
int arr[]={2,3,4,5,6};
int *p=arr;
int i;
printf("%u \n",arr);
printf("%u \n",p);
printf("%d \n",*p);

printf("Calling Function");
fun(p);
printf("\n Altered Array");
for(i=0;i<5;i++){
printf("\n %d ",arr[i]);
}
}
void fun(int *ptr){
int i;
for(i=0;i<5;i++){
printf("\n %d ",ptr[i]);
}
for(i=0;i<5;i++){
ptr[i]=ptr[i]+10;
}

}
