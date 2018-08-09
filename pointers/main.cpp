#include <iostream>
#include<stdio.h>

using namespace std;
int swap(int *, int *);


int main()
{

    int *p,*q;
    int x,y;
    cout<<"Enter the values of x and y:"<<endl;
    cin>>x>>y;
    p=&x,q=&y;
    cout<<"The values of x and y are: "<<*p<<" and "<<y<<endl;
    cout<<"Swapping the numbers :"<<endl;
    swap(p,q);
    cout<<"The values of x and y are: "<<x<<" and "<<y<<endl;

    return 0;
}

int swap(int *m,int *n)
{cout<<"This is just an item2 "<<endl;
    int temp= *m;
    *m=*n;
    cout<<"This is just an item "<<endl;
    *n=temp;
    cout<<"The values of x and y function are: "<<*m<<" and "<<*n<<endl;

    return 0;
}
