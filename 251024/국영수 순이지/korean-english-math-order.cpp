#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name;
int korean, english, math;

class Student{
    public:
        string name;
        int korean, english, math;

        Student(){};
        Student(string name, int korean, int english, int math){
            this->name = name;
            this->korean = korean;
            this->english = english;
            this->math = math;
        };
};  

bool Cmp(const Student &a, const Student &b){
    if(a.korean==b.korean){
        if(a.english==b.english){
            return a.math > b.math;
        } else {
            return a.english > b.english;
        }
    } 

    return a.korean > b.korean;
}

int main() {
    cin >> n;

    Student student[n];

    for (int i = 0; i < n; i++) {
        cin >> name >> korean >> english >> math;
        student[i] = Student(name, korean, english, math);
    }

    sort(student, student+n, Cmp);

    for(int i=0; i<n; i++){
        cout << student[i].name << " " << student[i].korean << " "  << student[i].english << " " << student[i].math << endl;
    }

    
    return 0;
}