#include<iostream>
using namespace std;

class student{
    static int totalstudents; //total number students present

    public :

    int rollnumber;
    int age;

  

  student(){
    totalstudents++;
  }
  int getRollnumber(){
    return rollnumber;
  }

  static int getTotalstudent(){
    return totalstudents;
  }

};

int student :: totalstudents = 0 ; // intialize outside the class

int main() {

    student s1;
    student s2,s3,s4,s5;

   // cout << student :: totalstudents << endl;

    cout << student :: getTotalstudent() <<endl;

   
     return 0;
}