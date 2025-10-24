#include <iostream>
#include <algorithm>

using namespace std;

class Student{
    public:
        int height;
        int weight;
        int num;

        Student() {};
        Student(int height, int weight, int num){
            this->height = height;
            this->weight = weight;
            this->num = num;
        }
};

bool Cmp(const Student &a, const Student &b){
    if(a.height != b.height){
        return a.height > b.height;
    }

    if(a.weight != b.weight){
        return a.weight > b.weight;
    }

    return a.num < b.num;
}

int main() {
    int n, height, weight;

    cin >> n;

    Student student[n];

    for(int i=0; i<n; i++){
        cin >> height >> weight;
        student[i] = Student(height, weight, i+1);
    }

    sort(student, student+n, Cmp);


    for(int i=0; i<n; i++){
        cout << student[i].height << " " << student[i].weight <<  " " << student[i].num << endl;
    }
    return 0;
}