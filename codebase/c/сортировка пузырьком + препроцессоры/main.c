#include <time.h>
#include <stdlib.h>
#include <stdio.h>

    #define randnum(min, max) \
            ((rand() % (int)(((max) + 1) - (min))) + (min))

    #define swap(t,x,y) \
            ({t temp=x;\
             x=y; \
             y=temp;})


void sortArr(int arr[], int arrayLength)
{
    printf("Отсортированный массив:\n");
    for (int i = 0; i < arrayLength; i++) {
        for (int j = 0; j < arrayLength-i-1; j++) {
            if (arr[j] > arr[j+1])
            {
                swap(float,arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < arrayLength; i++)
    {
        printf("%i ", arr[i]);
    }
}

void putsArr(int defaultArray[], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        printf("%i ", defaultArray[i]);
    }
    printf("\n");
    sortArr(defaultArray, arrayLength);
}

void pullArr(int defaultArray[], int arrayLength)
{
   for (int i = 0; i < arrayLength; i++)
   {
       defaultArray[i] = randnum(1, 101);
   }
    printf("Дефолтный массив:\n");
    putsArr(defaultArray, arrayLength);
}

int main()
{
    srand(time(NULL));
    const int arrayLength = randnum(1, 101);
    int defaultArray[arrayLength];
    pullArr(defaultArray, arrayLength);
}

// console log:
// << Дефолтный массив:
//    74 25 78 10 35 73 32 36 74 15
//    Отсортированный массив:
//    10 15 25 32 35 36 73 74 74 78   >>
