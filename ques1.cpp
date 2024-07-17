//Write a program to display the array element.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {100, 200, 300, 400, 500};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
