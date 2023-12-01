#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    void setX(int x) {
        this->x = x;
    }
    void setY(int y) {
        this->y = y;
    }
};

class Rectangle : public Point {
private:
    int length, width;
public:
    Rectangle(int x = 0, int y = 0, int length = 0, int width = 0) : Point(x, y) {
        this->length = length;
        this->width = width;
    }
    int getArea() {
        return length * width;
    }
    int getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Point p(1, 2);
    p.display();
    p.setX(3);
    p.setY(4);
    p.display();

    Rectangle r(1, 2, 3, 4);
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;

    return 0;
}
