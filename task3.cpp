#include <iostream>
using namespace std;

void insertion_sort() // сортировка вставками
{
    int *arr;
    int size;
    int temp, // временная переменная для хранения значения элемента сортируемого массива
    item; // индекс предыдущего элемента
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
        temp = arr[counter]; // инициализируем временную переменную текущим значением элемента массива
        item = counter-1; // запоминаем индекс предыдущего элемента массива
        while(item >= 0 && arr[item] > temp) // пока индекс не равен 0 и предыдущий элемент массива больше текущего
        {
            arr[item + 1] = arr[item]; // перестановка элементов массива
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