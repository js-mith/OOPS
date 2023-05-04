#include<iostream>
using namespace std;
#include<string>

#include "student.cpp"

int main() {
    //crreate object staticcally
     student s1;

    // s1.age = 24;
     s1.rollno = 101;
     s1.name="devansh";


     cout << sizeof(s1) << endl;

     cout<< s1.getAge() << endl;

     cout << s1.rollno << endl;
     cout << s1.name << endl;

     s1.display();

     
     //create ibject dynamically

cout << "=================dynamic=================" << endl;
     student *s2 = new student;

     //(*s2).age = 23;
     s2->name="manish";
     (*s2).rollno = 104;
     
     cout << sizeof(*s2) << endl;
     cout << (*s2).getAge() << endl;

      (*s2).display();

      
      s2->display();
     

     return 0;
}