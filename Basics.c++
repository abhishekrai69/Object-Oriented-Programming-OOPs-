#include <iostream>
#include <string>
using namespace std;

class teacher {
private:
    double salary;
    int phonenumber;

public:
    teacher() {
        cout <<"Hi,I am constructure\n";
    }
    //properties/attribute
    string name;
    string dept;
    string subject;

    //methods
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter
    double setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};

int main() {
    teacher t1; //constucture call
    t1.name ="abhishek";
    t1.subject ="science";
    t1.dept ="engineearing";
    t1.setSalary(25000);

    cout << t1.dept <<endl;
    cout<< t1.getSalary() <<endl;
    return 0;
}