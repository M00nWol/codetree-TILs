#include <iostream>
#include <algorithm>

using namespace std;

class Num{
    public:
        int value;
        int num;
        int after;

        Num(){};
        Num(int value, int num, int after){
            this->value = value;
            this->num = num;
            this->after = after;
        }
};

bool Cmp1(const Num &a, const Num &b){
    return a.value < b.value;
}

bool Cmp2(const Num &a, const Num &b){
    return a.num< b.num;
}

int main() {
    int n, value;

    cin >> n;

    Num num[n];

    for(int i=0; i<n; i++){
        cin >> value;
        num[i] = Num(value, i+1, 0);
    }

    sort(num, num+n, Cmp1);
    
    for(int i=0; i<n; i++){
        num[i].after = i+1;
    }

    sort(num,num+n,Cmp2);

    for(int i=0; i<n; i++){
        cout << num[i].after << " ";
    }

    return 0;
}