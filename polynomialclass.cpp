class polynomial{

int *degcoeff;
int capacity;

polynomial(){
     this->degCoeff=new int[6];
        this->capacity=5;
}

polynomial(int capacity){
    this -> degcoeff = new int[capacity + 1];
    this -> capacity = capacity;
}

polynomial(polynomial const &p)
{
    int *newdeg = new int[p.capacity+1];
     for(int i=0;i<=p.capacity;i++)
            newdeg[i]=p.degCoeff[i];
            
        this->degCoeff=newdeg;
        
        this->capacity=p.capacity;
}

};