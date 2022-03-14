#include <iostream>

void selection_sort(const int size, int arr[]){
    for (int start = 0; start < size - 1; ++start)
    {
        int smallest = start;
        for (int current= start + 1; current < size; ++current)
        {
            if (arr[current] < arr[smallest])
                smallest = current;
        }
        std::swap(arr[start], arr[smallest]);
    }
    for (int index = 0; index < size; ++index)
        std::cout << arr[index] << ' ';

}
int main(int argc, const char * argv[])
{
    return 0;
}