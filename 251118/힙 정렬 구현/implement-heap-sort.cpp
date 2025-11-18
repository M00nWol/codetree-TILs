#include <iostream>
#include <algorithm>

using namespace std;

void heapify(int* arr, int n, int i){
    int largest = i;
    int l = 2*i;
    int r = 2*i+1;

    if(l<=n && arr[l]>arr[largest]){
        largest = l;
    } 
    if(r<=n && arr[r]>arr[largest]){
        largest = r;
    }

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

int main() {
    int n;
    int arr[100001];

    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    // 1. max-heap
    for(int i=n/2; i>=1; i--){
        heapify(arr, n, i);
    }

    // 2. sort
    for(int i=n; i>1; i--){
        swap(arr[1], arr[i]);
        heapify(arr, i-1, 1);
    }

    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}