

class student{

    public :
    int rollno;

    private:
    int age;

    public:
    ~student(){
        cout << " Destructor called ! " << endl;
    }

    //default constructor
    student(){
        cout << "=====constructor. 1 called !=====" << endl;
    }
  
  // parameterised constructor
    student(int rollno){

        cout << "===== const. 2 called !======" << endl;
       this -> rollno = rollno;
    }

    student(int a , int r){
           cout << "this :" << this << endl;
        cout << "====const. 3 called ! ===" << endl;
       this -> age = a;
       this -> rollno = r;
    }
    string name;

    void display(){
        cout << age << " " << rollno << endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int a, int password){
        if(password != 123){
            return;
        }
        if(a<0){
            return;
        }
        age = a;
    }

};
