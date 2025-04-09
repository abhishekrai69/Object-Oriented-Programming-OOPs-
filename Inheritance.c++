#include <iostream>
#include <string>
using namespace std;

// class Person {
// public:
//     string name;
//     int age;

//     // Person(string name, int age) {
//     //     this->name = name;
//     //     this->age = age;
//     // }
//     Person(){
//         cout<<"parent constructor...\n";

//     }
// };

// class Student : public Person{
// public:
//     int rollno;

//     Student(){
//         cout<< "child constructure...\n";
//     }

//     void getInfo(){
//         cout << "name: " << name << endl;
//         cout << "age: " << age << endl;
//         cout << "roll no: " << rollno << endl;
//     }
// };

// int main() {
//     Student s1;
//     s1.name = "abhishek";
//     s1.age = 23;
//     s1.rollno = 1169;

//     s1.getInfo();
//     return 0; 
// }

                    //multi-level inheritance
// class Person {
//     public:
//         string name;
//         int age;
//     };
    
//     class Student : public Person{
//     public:
//         int rollno;
//     };

//     class GradeStudent : public Student{
//     public:
//         string researchArea;
//     };
    
//     int main() {
//         GradeStudent s1;
//         s1.name = "iron man";
//         s1.researchArea = "quantum physic";
//         cout<< s1.name <<endl;
//         cout<< s1.researchArea <<endl;
//         return 0; 
//     }
    
                    //multiple inheritance
// class Student {
// public:
//         string name;
//         int rollno;
//     };
    
//     class Teacher{
//     public:
//         string subject;
//         double salary;
//     };

//     class TA : public Student, public Teacher{
//     };
    
//     int main() {
//         TA t1;
//         t1.name = "doctor doom";
//         t1.subject = "chemistry";

//         cout<< t1.name <<endl;
//         cout<< t1.subject <<endl;
//         return 0; 
//     }

class Person {
public:
    string name;
    int age;
};

class Student : virtual public Person {
public:
    int rollno;
};
class Teacher : virtual public Person{
public:
    string subject;
};
    
class TA : public Student, public Teacher{
};
        
int main() {
    TA t1;
    t1.name = "doctor dom";
    t1.subject = "chemistry";
    
    cout<< t1.name <<endl;
    cout<< t1.subject <<endl;
    return 0; 
}
        