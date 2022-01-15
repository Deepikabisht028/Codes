#include <iostream>
using namespace std;
float comptax(int s)
{  if(s==250000)
      return 0;
   else if(s>250000 && s <=300000)
         {
              float t=(s-250000)*0.1;
              return t;
         }
   else if(s>300000 && s<=400000)
   {
       float t=5000+(s-300000)*0.2;
              return t;
   }
   else 
   {
        float t=25000+(s-400000)*0.3;
              return t;
   }
     
}
int main()
{
    int sal;
    float tax=0;
    cout<<"Enter the salary:";
    cin>>sal;
    tax=comptax(sal);
    sal=sal-tax;
    cout<<"Tax="<<tax<<"\nNet sal after deduction:"<<sal;
    return 0;
}
