#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

int swaps;

void bubbleSort(int array[], int n)
{
    int i, k;
    for (i = 0; i < n - 1; i++){
        for (k = 0; k < n - i - 1; k++){
            if (array[k] > array[k + 1]){
                int tmp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = tmp;
                swaps+=1;
            }
        }
        printf("\npass #%d: %d",i+1,swaps);
        swaps=0;
    }
}

void printArray(int array[], int len)
{
	for (int i = 0;i<len;++i)
	{
		printf("%d ",array[i]);
	}
}

int main(void)
{
    swaps=0;
    int array[9]={97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(array,9);
    //printArray(array,9);
}
