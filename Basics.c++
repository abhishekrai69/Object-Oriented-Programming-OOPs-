#include <iostream>
#include <string>
using namespace std;

class teacher {
private:
    double salary;
    int phonenumber;

public:
    //properties/attribute
    string name;
    string dept;
    string subject;

    //methods
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main() {
    teacher t1;
    t1.name ="abhishek";
    t1.subject ="science";
    t1.dept ="engineearing";

    cout << t1.dept <<endl;
    return 0;
}