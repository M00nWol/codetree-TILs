#include <iostream>

using namespace std;

int a, b;

void change(int* a, int* b){
    if(*a<*b){
        *a += 10;
        *b *= 2;
    } else {
        *b += 10; 
        *a *= 2;
    }
}

int main() {
    cin >> a >> b;

    change(&a, &b);

    cout << a << " " << b;

    return 0;
}