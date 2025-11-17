#include <iostream>
#include <vector>

using namespace std;

int Pos(int num, int pos){
    int result;

    while(pos>=0){
        result = num%10;
        num /= 10;
    
        pos--;
    }

    return result;
}

int main(){
    // 1. n을 정의하자. 
    int n;
    int arr[100000];

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // 차수별로 정렬하는 알고리즘
    for(int pos=0; pos<=5; pos++){
        // 각 차수 자리 저장하는 벡터
        vector<int> store[10];
        int digit;

        // 각 자리벡터에 분류해서 저장
        for(int i=0; i<n; i++){
            digit = Pos(arr[i], pos);
            store[digit].push_back(arr[i]);
        }

        // 다시 arr에 옮기기
        int idx = 0;
        for(int i=0; i<10; i++){
            for(int v : store[i]){
                arr[idx++] = v;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}