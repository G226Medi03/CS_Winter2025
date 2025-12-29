#pragma once

using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;
public:
    Date(int year, int month, int day);
    ~Date();
    void print() const;
};
