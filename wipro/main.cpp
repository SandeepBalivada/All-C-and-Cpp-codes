/*
print pattern:
n=4

1
2*3
4*5*6
7*8*9*10
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number of lines of patterns you wish to see:" << endl;
    int n,val=1;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
        {
         cout<<val;
         if(k<i)
            cout<<"*";
         val++;
        }
        cout<<endl;
    }
    return 0;
}
