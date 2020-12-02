# include <iostream>

using namespace std;

class employee{
   protected:
   string name;
   int empno;
   int pay_rate;

   employee(string name,int empno,int pay){
       this->name=name;
       this->empno=empno;
       this->pay_rate=pay;
   }

};
class manager:private employee{
    bool is_salaried;
    
};