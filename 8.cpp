#include <iostream>
#include <time.h>
using namespace std;

void funmas(int ar[], const int size) {
    for (int i = 0; i < size; i++) {
        ar[i] = 1 + rand() % 5;
    }
    for (int i = 0; i < size; i++) {
        cout << ar[i] << endl;
    }

}
void funmas2(int ar[], const int size) {
    for (int i = 0; i < size; i++) {
        if (ar[i] % 2 == 0) {
            cout << ar[i] << endl;
        }
        else {
            cout << "-" << endl;
        }
    }

}


int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    const int size = 5;
    int ar[size];
    cout << "Перший масив" << endl;
    funmas(ar, size);
    cout << endl;
    cout << "Масив только з простими елементами" << endl;
    funmas2(ar, size);
} 