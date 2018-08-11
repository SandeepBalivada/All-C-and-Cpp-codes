#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the size of array:"<<endl;
    int n,a[30],i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    int k,pos;
    cout<<"Enter the element to be searched:"<<endl;
    cin>>k;
    int l=0,mid,flag=0;
    int r=n-1;
    while(l<=r)
    {
        mid= (l+r)/2;
        if(a[mid]==k){
          cout<<"Element "<<k<<" found at position "<<mid+1<<endl;
          flag++;
          break;
          }
        else
        {
            if(k>a[mid])
            {
                l=mid+1;
            }
            else
                r=mid-1;
        }
    }
    if(flag==0)
        cout<<"not found";
    return 0;
}
