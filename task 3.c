#include<stdio.h>

void moveLeft2(int p[5])
{
    int temp1 = p[0];
    int temp2 = p[1];

    for(int i = 0; i <  5 - 2; i++)
    {
        p[i] = p[i + 2];
    }

    p[3] = temp1;
    p[4] = temp2;
}

int main()
{
    int p[4][5] = {
        {15,30,28,19,61},
        {1,2,3,4,5},
        {6,7,8,9,20},
        {11,12,13,14,15}};
    int i;

    moveLeft2(p);
    return 0;
}
