#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[e];
    int i = s - 1;

    for (int j = s; j < e; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

void quickSort(int arr[], int s, int e) {
    if (s < e) {
        int p = partition(arr, s, e);

        // left wala part phle short kre
        quickSort(arr, s, p - 1);
        // right wala part baad me /
        quickSort(arr, p + 1, e);
    }
}

int main() {
    int arr[5] = {3, 1, 5, 6, 2};
    int n = 5  ;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
