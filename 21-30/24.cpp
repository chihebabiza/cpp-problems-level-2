#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << "\n";
        cin >> number;
    } while (number < 0);
    return number;
}

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void ReadArray(int arr[100], int &size)
{
    size = ReadPositiveNumber("Enter the size of array");
    for (int i = 1; i <= size; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int size)
{
    cout << "Original array : ";
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int MaxOfArray(int arr[100], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], size = 0;
    ReadArray(arr, size);
    PrintArray(arr, size);
    cout << "Max number is " << MaxOfArray(arr, size) << endl;
    return 0;
}