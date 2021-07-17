#include <iostream>
using namespace std;
#include <vector>

vector<int> getPrimeFactor(int data)
{
    vector<int> a(0);
    int i = 2;
    while(data > 1)
    {
        if(data % i == 0)
        {
            a.push_back(i);
            data = data / i;
        }
        else i++;
    }
    return a;
}

