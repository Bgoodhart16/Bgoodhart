#include <iostream>
using namespace std;


void heapify(int arr[], int arrSize, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if(l < arrSize && arr[l] > arr[largest])
        largest = l;

    if(r < arrSize && arr[r] > arr[largest])
        largest = r;

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, arrSize, largest);
    }
}



void heapSort(int arr[], int arrSize) {
    for (int i = arrSize / 2 - 1; i >= 0; i--)
        heapify(arr, arrSize, i);
 
    // One by one extract an element from heap
    for (int i = arrSize - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
    
}




void printArr(int arr[], int arrSize) {
    for (int i = 0; i < arrSize - 1; ++i)
        cout << arr[i] << " ";
    
    cout << endl;
}


int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    
    heapSort(arr, arrSize);

    cout << "The sorted array is: ";
    printArr(arr, arrSize);
}