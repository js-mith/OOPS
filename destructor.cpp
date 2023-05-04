#include <iostream>
using namespace std;

#include "student.cpp"

int main()
{
    student s1(10, 20);

    student s2(20, 40);

    student *s3 = new student(50, 60); // not this destructor called use delete s3;

    s1 = s2;

    s2 = *s3;

    *s3 = s1;

    delete s3; // then called *s3 destuctor called



    return 0;
}