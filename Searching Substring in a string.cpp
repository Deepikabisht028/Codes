#include<iostream>
using namespace std;
void func(int a[],int N)
{ for(int x=0;x<6;x++)
  { for(int i=0;i<6;i++)
    {  if(a[i]>N)
       { int j=a[i];
         for(int k=i;k<5;k++)
           a[k]=a[k+1];
         a[5]=j;
       }
    }
  }
}
int main()
{  int N,a[6]={-1,12,0,-4,55,63};
   func(a,3);
   for(int i=0;i<6;i++)
     printf("%d ",a[i]);
    return 0;
}
