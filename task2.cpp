#include <iostream>
using namespace std;

void bubble_sort(){
    int *arr;
    int size;
    int temp;

    cout << "Введите количетво элементов: ";
    cin >> size;

    arr = new int[size];
    cout<<"Введите ваши элементы"<<endl;

    for (int i = 0; i < size; i++) {
        cout << "элемент " << i+1 << "= ";
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    bubble_sort();
}