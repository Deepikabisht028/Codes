#include<iostream>
#include<string>
using namespace std;
int main()
{  string s;
   cout<<"Enter the string:";
   getline(cin,s);
   int l=s.size(),c=0;
   for(int i=0;i<l;i++)
      for(int k=i;k<l;k++)
        for(int j=i+1;j<l;j++)
        { if(s[i]==s[j])
           { c++;
             for(int y=j;(y+1)<l;y++)
               s[y]=s[y+1];
              l--;  
           }
             
        }
   cout<<"Updated string:";
   for(int i=0;i<l;i++)
     cout<<s[i];
   cout<<endl;
   cout<<"No. of Duplicate Character:"<<c;
   return 0;
     
}
