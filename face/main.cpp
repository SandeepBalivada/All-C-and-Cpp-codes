#include <iostream>
#include<stdlib.h>

using namespace std;

void getScore();
void calcAverage();
int findLowest();

int score[5],j=0,low;
float avg;
//int* p;
//*p =&score[0];
int main()
{
   for(int i=1;i<=5;i++)
   {
       cout<<"Enter the test score of student no."<<i<<":"<<endl;
       getScore();
   }
   low = findLowest();
   calcAverage();
    return 0;
}

void getScore()
{
    cin>>score[j];
    if(score[j]<0 || score[j]>100)
    {
        cout<<"Invalid test score"<<endl;
        exit(0);
    }
    j++;
}

int findLowest()
{
  int min = score[0];
 for(int k=0;k<5;k++)
 {
     if(score[k]<min)
        min = score[k];
 }
 return min;
}

void calcAverage()
{
int sum =0;
for(int m=0;m<5;m++)
{
    if(score[m]!=low)
        sum = sum + score[m];
}
avg = sum/4.0;
cout<<endl<<"The average of highest four test scores is: "<<avg<<endl;

}
