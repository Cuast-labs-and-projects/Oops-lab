#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream in("input.txt");
    vector<int>a;
    int  temp;
    int i = 0;
    while (in >> temp)
    {   
        
        a.push_back(temp);
        i++;
    }
    in.close();
    cout << i<<endl;
    for (int j = 0; j < i; j++)
    {
        for (int k = j + 1; k < i; k++)
        {
            if (a[j] + a[k] == 2020)
                cout << a[j] * a[k];
        }
    }
    return 0;
}

