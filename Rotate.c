#include<stdio.h>
#include<stdlib.h>

void rotate(int a[],int n,char d,int cr)
{
        int *b,i,index;
        b = (int*) calloc(sizeof(int),n);
        for (i = 0; i < n; i++)
        {
            if(d=='r')
            {
                index = i+cr;
                if(index > n-1)
                {
                    index -= n;
                }
                *(b+index) = *(a+i);
            }
            else{
                index = i-cr;
                if(index < 0)
                {
                    index += n;
                }
                *(b+index) = *(a+i);
            }
        }
        for (i = 0; i < n; i++)
        {
            *(a+i) = *(b+i);
        }
        
}

void main()
{
    int a[100],n,rt;
    char c;
    printf("Enter no. of elements of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    getchar();
    printf("Enter direction of rotation: ");
    scanf("%c",&c);
    printf("Length of rotation: ");
    scanf("%d",&rt);
    rotate(a,n,c,rt);
    printf("Rotated array is : \n");
    for(int i = 0; i < n; i++)
    {
       printf("%d ",a[i]);
    }
}
