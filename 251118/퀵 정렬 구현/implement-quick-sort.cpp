#include <iostream>
#include <algorithm>

using namespace std;

int selectPivot(int* arr, int low, int high){
    int mid = (low+high)/2;

    int p1 = arr[low];
    int p2 = arr[mid];
    int p3 = arr[high];
    int pivotIndex;

    if((p1>=p2 && p1<=p3) || (p1>=p3 && p1 <= p2)){
        pivotIndex = low;
    } else if((p2>=p1 && p2<=p3) || (p2>=p3 && p2<=p1)){
        pivotIndex = mid;
    } else {
        pivotIndex = high;
    }

    swap(arr[pivotIndex], arr[high]);

    return high;
}

int Partition(int* arr, int low, int high){
    int pivotIndex = selectPivot(arr, low, high);
    int pivot = arr[pivotIndex];
    int i = low-1;
   
    for(int j=low; j<=high-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }

    swap(arr[i+1], arr[high]);

    return i+1;
}

void QuickSort(int* arr, int low, int high){
    if(low < high){
        int pos = Partition(arr, low, high);

        QuickSort(arr, low, pos-1);
        QuickSort(arr, pos+1, high);
    }
}


int main() {
    int n;
    int arr[100000];

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int low = 0;
    int high = n-1;


    QuickSort(arr, low, high);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}