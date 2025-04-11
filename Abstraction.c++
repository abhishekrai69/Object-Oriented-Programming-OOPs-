#include <iostream>
#include <string>
using namespace std;

class Shape { //abstract class
    virtual void draw() = 0; //pure vrtual class
};

class Circle : public Shape {
    public:
    void draw(){
        cout<< "drawing a circle";
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}