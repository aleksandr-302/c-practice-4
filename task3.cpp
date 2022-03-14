#include <iostream>
using namespace std;

void insertion_sort()
{
    int *arr;
    int size;
    int temp,
    item;
    cout << "Введите количетво элементов: ";
    cin >> size;

    arr = new int[size];
    cout<<"Введите ваши элементы"<<endl;

    for (int i = 0; i < size; i++) {
        cout << "элемент " << i+1 << "= ";
        cin >> arr[i];
    }
    for (int counter = 1; counter < size; counter++)
    {
        temp = arr[counter];
        item = counter-1;
        while(item >= 0 && arr[item] > temp)
        {
            arr[item + 1] = arr[item];
            arr[item] = temp;
            item--;
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    insertion_sort();
}