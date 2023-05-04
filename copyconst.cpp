#include<iostream>
using namespace std;

#include "student.cpp"

int main() {
    student s1(10,1001);

    cout << "s1 : " ;

    s1.display();

    student s2(20,2001);
    
    // copy assignment operator 
    s2 = s1;

    cout << "s2 : " ;

    s2.display();

    student *s3 = new student(20,2001);

    cout << "s3 : ";

    s3 -> display();

    student s4(*s3);

    cout << "s4 : " ;

    s4.display();

    student *s5 = new student(s1);

    cout << "s5 : ";

    s5 -> display();


     
     return 0;
}