#include <iostream>
#include <cmath>
using namespace std;

class Square {
private:
    double a;

public:
    Square(double side) {
        a =side;
    }

    double getSide() const {
        return a;
    }

    double circumference() const {
        return 4*a;
    }

    double area() const {
        return a*a;
    }
};

class Cube : public Square {
public:
    Cube(double side) : Square(side) {}

    double area() const {
        double squareArea = Square::area();
        return 6*squareArea;
    }

    double volume() const {
        double squareArea= Square::area();
        return squareArea*getSide();
    }
};

int main() {
    double side;

    cout << "Enter the side: ";
    cin >> side;

    Square square(side);
    cout <<"A square with the following features has been obtained:" <<endl;
    cout <<"Side: "<< square.getSide()<<endl;
    cout <<"Circumference: "<< square.circumference() <<endl;
    cout <<"Area: "<< square.area()<<endl;

    Cube cube(side);
    cout << endl;
    cout << "A cube with the following features has been obtained:" <<endl;
    cout << "Side: " << cube.getSide() <<endl;
    cout << "Area: " << cube.area() <<endl;
    cout << "Volume: " << cube.volume()<< endl;

    //Additional functionality

    double cubeAreaUsingSquareArea = cube.area();
    double cubeVolumeUsingSquareArea = cube.area() * cube.getSide();

    cout << endl;
    cout << "Additional:" << endl;
    cout << "Area of the cube using only Square's area() function: " << cubeAreaUsingSquareArea << endl;
    cout << "Volume of the cube using only Square's area() function: " << cubeVolumeUsingSquareArea << endl;

    return 0;
}
