#include<stdio.h>
#include<stdlib.h>
#ifndef NUM
#define NUM 7
#endif
#include<stdbool.h>
#include<time.h>

void printArr(int *, int);
void fillArr(int *, int);
void bubbleSort(int *, int);

int main()
{
    srand(time(NULL));
    int arr[NUM];
    fillArr(arr,NUM);
    printArr(arr,NUM);
    insertionSort(arr,NUM);
    printArr(arr,NUM);
}

void insertionSort(int *arr, int size)
{
  int i,j,key ;
  for (i=0; i< size; ++i)
  {
      key = arr[i];
      j=i-1;
      while (j>=0 && arr[j] > key)
      {
          arr[j+1] = arr[j];
          --j;
      }
      arr[j+1]=key;
  }
}
void printArr(int *arr, int size)
{
    int cnt;
    for(cnt=0; cnt<size; ++cnt)
        printf("%d ",arr[cnt]);
    
    printf("\n");
}
                                        
void fillArr(int *arr, int size)
{
 int cnt;
 for(cnt=0;cnt<size;++cnt)
    arr[cnt]= rand()%(NUM*10);
}
