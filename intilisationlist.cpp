class student{
    public:

    int age;
    const int rollnumber;

    int &x; // age refrence variable;

    // intiliasation list - use when the constant is present in class

    student(int r , int age) : rollnumber(r) ,  age(age) , x(this -> age){
       
    }

    void display(){
        cout << age <<" "<<rollnumber << " " << x << endl;
    }
};