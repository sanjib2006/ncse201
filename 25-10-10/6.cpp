#include <iostream>
using namespace std;

// Generic Bubble Sort

template <class X>
void bubblesort(X &a, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

int main()
{
    int arr[] = {3, 2, 5, 8, 1};
    bubblesort(arr, 5);

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout <<endl;
    
    float farr[] = {3.123, 2.1, 5.5, 8.7, 1.3};
    bubblesort(farr, 5);

    for (int i = 0; i < 5; i++)
        cout << farr[i] << " "; 
    cout << endl; 

    string sarr[] = {
        "Hello",
        "Howareyou",
        "abbasLovesSweet",
        "sher",
        "nm",
        "ranishWaalaTA",
    };

    bubblesort(sarr, 5);
    for (int i = 0; i < 5; i++)
        cout << sarr[i] << " "; 
    cout << endl; 
    return 0;

}