/*
print pattern:
n=4

1
3*2
6*5*4
10*9*8*7 
*/



#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number of lines of patterns you wish to see:" << endl;
    int n,val=1,fin,flag=0;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
        {
         fin=val-1+i;
         cout<<fin-2*flag;
         flag++;
         if(k<i)
            cout<<"*";
         else
            flag=0;
         val++;
        }
        cout<<endl;
    }
    return 0;
}
