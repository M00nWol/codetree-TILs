#include <iostream>
using namespace std;

int main() {
    int weight;
    double gravity;

    weight = 13;
    gravity = 0.165;

    cout << fixed;

    cout.precision(6);

    cout << weight << " * " << gravity << " = " << weight*gravity;
    return 0;
}