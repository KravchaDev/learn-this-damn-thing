#include <iostream>
#include <ctime>

using namespace std;

void binarySearch(int data_array[], int element, int len)
{
    int low = 0; // первый элемент выбранной части массива
    int high = len-1;  // последний элемент
    while (low <= high) // пока наименьший элемент массива меньше или равень последнему
    {
        int mid = (low + high)/2;  // средний индекс выбранного массива
        int guess = data_array[mid];  // средний элемент выбранного массива

        if (guess == element)
        {
            cout<<"Element "<< element <<" found at "<<mid<<" th index"<<endl ;
            return ;
        }
        else if (guess > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout<<"Element Not Found"<<endl ;
    return ; //number not found
}

void bubbleSort(int arr[], int len)
{
    for(int i = 0; i < len; i++) 
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void randomFill(int arr[], int len)
{
    srand(time(NULL));
    for(int i = 0; i < len; i++)
    {
        arr[i] = rand() % 101;
    }
}

void generalPut(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int x;
    x = rand() % 101;

    randomFill(arr, n);
    generalPut(arr, n);
    bubbleSort(arr, n);
    generalPut(arr, n);
    binarySearch(arr,x, n);
    return 0;
}
