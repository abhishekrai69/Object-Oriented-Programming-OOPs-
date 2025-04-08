#include <iostream>
#include <string>
using namespace std;

// class teacher{
// private:
//     double marks;
// public:
//     //non-parameterized
//     teacher(){
//         dept ="engineearing";
//     }
    
//     //parameterrized
//     teacher(string n, string d, string s, double sal){
//         dept ="engineearing";
//     }
//     //copy constructor
//     teacher(teacher &orgObj){
//         cout<<"i am custom copy constructor...\n";
//         this->name = orgObj.name;
//         this->dept = orgObj.dept;
//         this->subject = orgObj.subject;

//     }
//     string name;
//     string dept;
//     string subject;

//     //methods
//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     void getInfo(){
//         cout <<"name: " << name << endl;
//         cout <<"marks: " << marks <<endl;
//     }
//     //setter
//     double setmarks(double s){
//         marks = s;
//     }
//     //getter
//     double getmarks(){
//         return marks;
//     }
// };
// int main(){
//     teacher t1("abhishek","engineearing","c++",95);
//     //t1.getInfo();
//     teacher t2(t1); //custom copy constructor
//     t2.getInfo();
//     return 0;
// }

/*--------------------------------------------------------------------*/
// class Student {
// public:
//     string name;
//     string semester;
//     double cgpa;

//     Student(string name, string semester, double cgpa){
//         this->name = name;
//         this->semester = semester;
//         this->cgpa = cgpa;
//     }
//     Student(Student &obj){
//         this->name = obj.name;
//         this->cgpa = obj.cgpa;
//         this->semester = obj.semester;
//     }

//     void getInfo() {
//         cout <<"name: "<< name <<endl;
//         cout <<"cgpa: "<< cgpa <<endl; 
//         cout <<"semster: "<< semester <<endl;
//     }
// };
// int main() {
//     Student s1("Abhishek Rai","6th", 7.5);
//     Student s2(s1);
//     //s1.getInfo();
//     s2.getInfo();
//     return 0;
// }

class Student {
    public:
        string name;
        double* cgpaPtr;
    
        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        Student(Student &obj){
            this->name = obj.name;
            cgpaPtr = new double;
            *cgpaPtr = *obj.cgpaPtr;
        }
    
        void getInfo() {
            cout <<"name: "<< name <<endl;
            cout <<"cgpa: "<< *cgpaPtr <<endl; 
        }
    };
    int main() {
        Student s1("Abhishek Rai", 7.5);
        Student s2(s1); //"SANAKAR SAHOO"

        s1.getInfo();
        *(s2.cgpaPtr) = 8.5;
        s1.getInfo();

        s2.name = "sanskar sahoo";
        s2.getInfo();
        return 0;
    } 