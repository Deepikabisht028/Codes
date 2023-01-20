#include<iostream>
#include<math.h>
using namespace std;

int main()
{   int n,k,l=1;

    cout <<"Enter the size of array: ";
    cin>>n;
    int a[n],m=sqrt(n);

    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter the number to be searched: ";
    cin>>k;
    if(a[0]==k)
    {   cout<<"The Index of the no. is 0";
        return 0;
    }

    while(l<n)
    { if(a[l]==k)
      { cout<<"The Index of the no. is "<<l;
         return 0;
      }
      else if(l*m<n && a[l]<k && k<a[l*m])
      {  for(int i=l;i<l*m;i++)
          { if(a[i]==k)
            { cout<<"The Index of the no. is "<<i;
               return 0;
            }
          }
      }
      l=l*m;
    }
    for(int i=l/m;i<n;i++)
    {    if(a[i]==k)
         {  cout<<"The Index of the no. is "<<i;
            return 0;
         }
    }
    cout<<"Number Not found";
    return 0;
}
