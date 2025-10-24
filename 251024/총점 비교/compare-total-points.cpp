#include <iostream>
#include <algorithm>

using namespace std;

class Student{
    public:
        string name;
        int score1, score2, score3;

        Student(){};
        Student(string name, int score1, int score2, int score3){
            this->name = name;
            this->score1 = score1;
            this->score2 = score2;
            this->score3 = score3;
        };
};

bool Cmp(const Student &a, const Student &b){
    return (a.score1+a.score2+a.score3) <(b.score1+b.score2+b.score3);
}


int main() {
    string name;
    int n, score1, score2, score3;

    cin >> n;
    Student student[n];

    for(int i=0; i<n; i++){
        cin >> name >> score1 >> score2 >> score3;
        student[i] = Student(name, score1, score2, score3);
    }

    sort(student, student+n, Cmp);

    for(int i=0; i<n; i++){
        cout << student[i].name << " " << student[i].score1 << " " << student[i].score2 << " " << student[i].score3 << endl;
    }

    return 0;
}