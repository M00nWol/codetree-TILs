#include <iostream>
#include <algorithm>

using namespace std;

class Element{
    public:
        int value;
        int idx;
        int after;

        Element(){};
        Element(int value, int idx, int after){
            this->value = value;
            this->idx = idx;
            this->after = after;
        }
};

bool Cmp1(Element &a, Element &b){
    return a.value < b.value;
}

bool Cmp2(Element &a, Element &b){
    return a.idx < b.idx;
}

int main() {
    int n, value;

    cin >> n;

    Element ele[n];

    for(int i=0; i<n; i++){
        cin >> value;
        ele[i] = Element(value, i, i);    
    }    

    sort(ele, ele+n, Cmp1);

    for(int i=0; i<n; i++){
        ele[i].after = i+1;
    }

    sort(ele, ele+n, Cmp2);


    for(int i=0; i<n; i++){
        cout << ele[i].after << " ";
    }
    return 0;
}