# include<iostream>

using namespace std;

    class avg
    {
       
    public:
       static int arr[5];
       static double find_average(int n);
    
    };
    
    
    double avg::find_average(int n){
        double sum =0;
        for(int i=0;i<5;i++){
            sum+=arr[i];
        }
        return sum/n;
       
       
    }


    int avg::arr[5];

    int main(){
        int n;

        avg obj1,obj2,obj3;
        cout<<"enter the array limit"<<endl;
        cin>>n;
        cout<<"enter the elements"<<endl;
        for(int i=0;i<n;i++){
            cin>>obj1.arr[i];
        }
        double average=obj1.find_average(n);
        cout<<"Average is "<<average<<endl;
        
        cout<<"array multiplied by 5"<<endl;
        for(int i=0;i<n;i++){
            obj2.arr[i]*=5;
            cout<<obj2.arr[i]<<" ";
        }
        cout<<endl;

        average=obj3.find_average(n);
        cout<<"Average is "<<average<<endl;

       

        
    }
