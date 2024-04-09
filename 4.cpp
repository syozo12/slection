#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str[4] = {"radha", "loves", "shooting", "radha"};
    int n = 4;
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (str[j] > str[j + 1])
                swap(str[j], str[j + 1]);
        }
        if (flag)
            break;
    }
    cout<<"sorted string";
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
}