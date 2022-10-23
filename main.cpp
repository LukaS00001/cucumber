#include <iostream>
#include <vector>
using namespace std;
int main()
{
cout << "hi"; 
}
template <typename type_arr>
    void selection_sort(type_arr *arr, int size)
    {
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(arr[i], arr[min_index]);
        }
    }
}