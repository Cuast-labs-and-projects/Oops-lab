# include<iostream>
# include<cmath>

using namespace std;

bool checkTriangle(int x[5],int y[5]) 
{ 
  
    int a = x[0] * (y[1] - y[2]) 
            + x[1] * (y[2] - y[0]) 
            + x[2] * (y[0] - y[1]); 
  
    if (a == 0) 
        return false; 
    else
        return true; 
} 

 inline int find_shortest(int a[5],int b[5]){
        int min;
        int length1=sqrt(pow(a[1]-a[0],2)+pow(b[1]-b[0],2));
        min =length1;
        int length2=sqrt(pow(a[2]-a[1],2)+pow(b[1]-b[1],2));
        if(length2<min){
            min=length2;
        }
        int length3=sqrt(pow(a[2]-a[0],2)+pow(b[2]-b[0],2));
        if(length3<min){
            min=length3;
        }
        cout<<"lenght 1 = "<<length1<<'\n'<<"length 2 = "<<length2<<'\n'<<"length 3 = "<<length3<<endl;

        return min;

  }


  

    int main(){
     int x[5],y[5];

     for(int i=0;i<3;i++){
        cout<<"enter the x cordinate of "<<i+1<<" th side"<<endl;
        cin>>x[i];
        cout<<"enter the y cordinate of "<<i+1<<" th side"<<endl;
        cin>>y[i];
     }
     

     if(checkTriangle(x,y)){
       int min=find_shortest(x,y);
       cout<<"minimum side length is "<<min<<endl;
     }
     else{
         cout<<"invalid co-ordinates"<<endl;
     }
     


        
    }
