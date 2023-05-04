#include<iostream>
using namespace std;
#include "student.cpp"

int main() {
student s1(10,101);
cout << "the adresss : " <<  &s1 <<endl;

s1.display();

student s2(20);

s2.display();
  /*
    student s1;

    s1.display();

    student s2;

    student *s3= new student;

    s3 -> display();

    cout << "parametrised constr. Demo" << endl;

    student s4(10);

    s4.display();
    
    student *s5 = new student(101);
     
     s5 -> display();

     student s6(20,106);

     s6.display();
     */
     
     return 0;
}