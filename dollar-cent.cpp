# include <iostream>
# include <math.h>

using namespace std;

class dollar{
  
private:
   int var1;
   
public:
    dollar(){};
    dollar(int );
    ~dollar();
    void show();
    int getdata(){
        return var1;
    }
};

dollar::dollar(int a)
{
    this->var1=a;
    
}

dollar::~dollar()
{
}
void dollar::show(){
    
    cout<<var1<<endl;
   

}
class cent{
  
private:
   int var2;
  
public:
    cent(){};
    cent(int , int );
    ~cent();
    void show();
    int getdata(){
        return var2;
    }
    void operator=(Dollar a)
    {
        var2 = 100*a.getdata();
    }
};



cent::cent(int a ,int b)
{
    this->var2=a;
    
}

cent::~cent()
{
}
void cent::show(){
    
    cout<<var2<<endl;
   

} 


int main(){

    dollar obj1;
    cent obj2;

    
    return 0;
}
