#include <iostream>

using namespace std;

int main()
{
    int a[30],n,i;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;
    for( i=0;i<n;i++)
        cin>>a[i];
    cout<<"Array elements before sorting:"<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
          int temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
    }
    cout<<"After sorting the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
