#include <stdio.h>
int main()
{
int a[10], b[10],c[10], k=0, n1, n2, i, j;
printf("Enter array1 size : ");
scanf("%d",&n1);
printf("\nEnter array2 size : ");
scanf("%d",&n2);
printf("\nEnter array1 element : ");
for(i = 0;i < n1;i++)
scanf("%d",&a[i]);
printf("\nEnter array2 element : ");
for(i = 0;i < n2;i++)
scanf("%d",&b[i]);
for(i = 0;i < n1;i++)
{
for(j = 0;j < n2;j++)
{
if(b[i] == a[j])
{
c[k] = b[i];
k++;
}
}
}
printf(" Intersection: ");
for(i=0;i<k;i++)
{
  printf("%d",c[i]);
}
}
