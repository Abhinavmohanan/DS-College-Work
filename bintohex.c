#include<stdio.h>
#include<math.h>

int btod(int bin[])
{
    int dec=0 ,j=3,i=0;
    while(j>=0)
    {
        dec += bin[j] * pow(2,i);
        i++;
        j--;
    }
    return dec;
}

void main()
{
    int nx4[20][4],m;

    printf("Enter the number of rows:  ");
    scanf("%d",&m);
    printf(" Enter the matrix : \n");
    for(int i=0;i<m;i++)
    {
       for(int j = 0; j<4;j++)
       {
        scanf("%d",&nx4[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
      printf("%x \n",btod(nx4[i]));
    }
}
