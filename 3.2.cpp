#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int MAX_SIZE = 1000;
    int arr[MAX_SIZE];
    int n = 0;

    // Nh?p m?ng
    while (true) {
        int x;
        cin >> x;

        if (x == 0) {
            break;
        }

        arr[n] = x;
        n++;
    }

    // S?p x?p m?ng
    bubbleSort(arr, n);

    // In m?ng d� s?p x?p
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

