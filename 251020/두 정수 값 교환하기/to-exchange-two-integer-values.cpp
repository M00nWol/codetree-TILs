#include <iostream>

using namespace std;

int n, m;

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
    cout << *a << " " << *b;
}

int main() {
    cin >> n >> m;

    swap(&n, &m);

    return 0;
}