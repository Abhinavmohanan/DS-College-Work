#include<stdio.h>
#include<stdlib.h>

void sort(int *a,int n)
{
    int temp;
    for(int i =0 ;i< n-1;i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }
        }
        
    }

}




void main()
{
    int a[100],mode,n,count,maxcount=0,i=0,j=0;
    float mean,median;
    printf("Enter no. of elements of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
       mean += a[i];
    }
    mean /= n ;
    sort(a,n);
    if(n%2 == 0)
    {
        median =  (float) ( a[(n/2)] +  a[n/2 - 1])/ 2;
    }
    else
    {
       median = (a[n/2]);
    }

    while(i < n)
    {
        count =0;
        while(j < n)
        {
           if(a[i] == a[j])
            count++;
           else
             break;
           j++;
        }
        if (maxcount < count)
        {
            maxcount = count;
            mode = a[i]; 
        }
        i=j;
    }

    printf("Mean is %f \n Median is %f \n Mode is %d",mean,median,mode);

}
