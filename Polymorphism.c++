#include <iostream>
#include <string>
using namespace std;

// class Student {
// public:
//     string name;

//     Student(){
//         cout <<"non-parameterized\n";
//     }

//     Student(string name){
//         this->name = name;
//         cout <<"parameterized...";
//     }
// };

// int main(){
//     Student s1("bat man");

//     return 0;
// }


                    //compile time polymorphism
// class Print {
// public:
//     void show(int x){
//         cout <<"int : " << x << endl;
//     }

//     void show(char ch){
//         cout <<"char : " << ch << endl;
//     }
// };

// int main(){
//     Print p1;
//     p1.show(1169);
//     return 0;
// }


                    //run time polymorphism
class Parent {
public:
    void getInfo(){
    cout <<"parent class";
    }
    virtual void hello(){
        cout<<"hello from parents";
    }
};

class Child : public Parent{
public:
    void getInfo(){
    cout <<"child class";
    }
    void hello(){
        cout<<"hello from child";
    }
};
    
int main(){
    Parent p1;
    p1.hello();
    // Child p1;
    // p1.getInfo();
    return 0;
}