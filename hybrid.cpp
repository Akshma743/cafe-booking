#include <iostream>
using namespace std;


class Student {
public:
    void StudentInfo() {
        cout << "This is Student class." << endl;
    }
};


class Marks {
public:
    void MarksInfo() {
        cout << "This is Marks class." << endl;
    }
};


class Sports : public Student {
public:
    void SportsInfo() {
        cout << "This is Sports class derived from Student." << endl;
    }
};


class Result : public Marks, public Sports {
public:
    void showResult() {
        cout << "Result is derived from Marks and Sports." << endl;
    }
};

int main() {
    Result r;
    r.StudentInfo();
    r.MarksInfo();
    r.SportsInfo();
    r.showResult();
    return 0;
}
