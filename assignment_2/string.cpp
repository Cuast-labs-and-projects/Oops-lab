# include <iostream>

using namespace std;


int main(){
    string s;
    int count=0;
    cout<<"enter the text"<<endl;
    getline(cin,s);
    for(int i=0;i<s.size()-1;i++){
        if(tolower(s[i])=='i' && tolower(s[i+1]=='t'))
        count++;
    }
    cout<<count;
    return 0;
}
