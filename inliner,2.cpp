#include <iostream>
using namespace std;

void printArr (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

  const int size = 5;
  int arr[size] = {5, 2, 3, 4, 1};

  int temp;

  cout << "Original array: ";
  printArr(arr, size);

  swap(arr[0], arr[size - 1]);

  cout << "Array with first and last element swapped: ";
  printArr(arr, size);

  return 0;
}
