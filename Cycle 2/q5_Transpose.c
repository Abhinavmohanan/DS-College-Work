#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int row;
    int col;
    int val;
}sparse;

void readtoSparse(sparse a[]){
  int n;
  printf("Enter number of non zero values: ");
  scanf("%d",&n);
  printf("Matrix: \nRow\tCol\tVal\n");
  for(int i =0;i<=a[0].val;i++){
     scanf("%d",&a[i].row);
     scanf("%d",&a[i].col);
     scanf("%d",&a[i].val);
  }
}

void printSparse(sparse a[]){
    printf("\nRows Column Value");
    for(int i = 0;i <= a[0].val;i++){
        printf("\n%d\t%d\t%d",a[i].row,a[i].col,a[i].val);
    }
}

void transparse(sparse a[],sparse trans[]){
    trans[0].col = a[0].row;
    trans[0].row = a[0].col;
    trans[0].val = a[0].val;
    int l = 1;
    if(a[0].val > 0){
        for(int i=0; i < a[0].col; i++){
            for(int j=1; j <= a[0].val; j++){
                if(a[j].col == i){
                    trans[l].row = a[j].col;
                    trans[l].col = a[j].row;
                    trans[l].val = a[j].val;
                    l++;
                }
            }
        }
    }
}

void main(){
    sparse a[100],trans[100];
    printf("Enter sparse matrix:\n");
    readtoSparse(a);
    transparse(a,trans);
    printf("\n\nEntered Matrix: ");
    printSparse(a);
    printf("\n\nTranspose Matrix: ");
    printSparse(trans);
}
