#include <stdio.h>

int binarySearch(int array[])
{
    int x = 12; // элемент, который ищем
    int low = 0; // наименьший индекс массива
    int hight = 9; // наибольший индекс массива

    while (low < hight)
    {
        int mid = (low+hight)/2; // индекс середины массива
        int guess = array[mid]; // средний элемент массива

        if (guess == x)
        {
            printf("\nЭлемент %i найден --> под индексом: %i", x, mid);
            return 0;
        }
        else if (guess > x)
        {
            hight = mid;
        }
        else
        {
            low = mid;
        }
    }
    printf("\nЭлемент %i не найден!", x);

    return 0;
}

int main(void)
{
    int array[10];

    for (int i = 0; i < 10; i++) {
        array[i] = i * 2;
    }

    for (int i = 0; i < 10; i++){
        printf("%i ", array[i]);
    }

    binarySearch(array);
    return 0;
}

// console log:
//  > 0 2 4 6 8 10 12 14 16 18
//  > Элемент 12 найден --> под индексом: 6
