#include <iostream>
using namespace std;

class Triangle {
private:
    double base;
    double height;
    double area;

public:
    // Constructor
    Triangle(double b, double h) {
        base = b;
        height = h;
        area = 0.5 * base * height;
    }

    void displayArea() {
        cout << "Area of Triangle = " << area << endl;
    }
};

int main() {
    double b, h;

    cout << "Enter base: ";
    cin >> b;

    cout << "Enter height: ";
    cin >> h;

    // Object created → constructor automatically runs
    Triangle t1(b, h);

    t1.displayArea();

    return 0;
}