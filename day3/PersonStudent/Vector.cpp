#include "Vector.h"

Vector::Vector(int x, int y) : x(x), y(y) {};

int Vector::getX() const {
    return this->x;
}

int Vector::getY() const {
    return this->y;
}


Vector operator+(int scalar, const Vector& v) {
    return { v.getX() + scalar, v.getY() + scalar };
}
