#pragma once

class Vector {
    int x, y;
public:
    Vector(int x, int y);

    int getX() const;
    int getY() const;

    friend Vector operator+(int scalar, const Vector& v);
};
