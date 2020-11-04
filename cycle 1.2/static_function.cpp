# include<iostream>

using namespace std;

    class avg
    {
       static int n;
       static int arr[5];
       
    public:

       static double find_average();
       void getdata();
       void multiply(int);
       void sort();
       void show();
       void swap(int *,int *);

    
    };
    
    
    double avg::find_average(){
        double sum =0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum/n;
       
       
    }

    void avg::getdata(){
        cout<<"enter the array limit"<<endl;
        cin>>n;
        cout<<"enter the elements"<<endl;
      
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    void avg::multiply(int m){
        for(int i=0;i<n;i++){
            arr[i]*=m;
        }
        cout<<endl; 
    }

    void avg::sort(){
        
        int i, j;  
        for (i = 0; i < n-1; i++){
            for (j = 0; j < n-i-1; j++){
                if (arr[j] > arr[j+1])  
                swap(&arr[j], &arr[j+1]); 
            }  
        } 
        
       
 
    }
    void avg::show(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }
    }
    void avg::swap(int *xp, int *yp){

        int temp = *xp;  
        *xp = *yp;  
        *yp = temp;  
    } 



    int avg::arr[5];
    int avg::n;

    int main(){
      
        int multiplier;
        avg obj1,obj2,obj3;
        obj1.getdata();
        double average=obj1.find_average();
        cout<<"Average is "<<average<<endl;
        
        cout<<"enter the element to multiply "<<endl;
        cin>>multiplier;
        obj2.multiply(multiplier);
        cout<<"the multiplied array is"<<endl;
        obj2.show();
        average=obj1.find_average();
        cout<<"Average new average is "<<average<<endl;
       

        obj3.sort();
        cout<<"the sorted array is"<<endl;
        obj3.show();




       

        
    }
