#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
       
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] % 2 != 0 && arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        if (i != minIndex) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int MAX_SIZE = 1000;
    int arr[MAX_SIZE];
    int n = 0;

   
    while (true) {
        int x;
        cin >> x;

        if (x == 0) {
            break;
        }

        arr[n] = x;
        n++;
    }

    
    selectionSort(arr, n);
    bubbleSort(arr, n);

    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

