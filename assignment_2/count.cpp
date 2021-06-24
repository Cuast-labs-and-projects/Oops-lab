# include <iostream>
# include <string>

using namespace std;


int main(){
    string s;
    int count=0;
    cout<<"enter the text"<<endl;
    getline(cin,s);
    if(tolower(s[0])=='s'){
        count++;
    }
    for(int i=1;i<s.size()-1;i++){
        if(tolower(s[i])==' ' && tolower(s[i+1]=='s'))
        count++;
    }
    auto itr=s.begin()+5;
    string s2="adsfsd";
    cout<<s.compare(s2);

    cout<<s;

    cout<<count;
    return 0;
}
