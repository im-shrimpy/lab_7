#include <stdlib.h>
#include <stdio.h>
#define LEN 9

void bubbleSort(int *arr)
{
    for(int i=0;i<LEN-1;i++)
    {
        int numSwaps=0;
        for(int j=0;j<LEN-i-1;j++)
        {
            if(arr[j]>=arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                numSwaps++;
            }
        }
        printf("Iteration #%d: %d\n",i+1,numSwaps);
    }
}

int main(void){
    int array[LEN]= {97,16,45,63,13,22,7,58,72};
    bubbleSort(array);
    
    return 0;
}