#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
    char data;
    int l=0;
    fstream myfile;
    myfile.open("example.txt",ios::in );
    cout<<"Content of File:";
    while(myfile>>noskipws>>data)
    {      cout<<data;  
        if(data=='\n')
       {  l++;
      }
         
    }
    cout<<"\n\nTotal number of lines in file:: "<<l;
    myfile.close();
    
    myfile.open("example.txt",ios::app | ios::in );
    myfile.seekg (0,myfile.end);
    myfile<<"Bye";
    cout<<endl;
    
    myfile.seekg(0, myfile.beg);
    cout<<"Content of File After Appending\n";
    while(myfile>>noskipws>>data)
    {    cout<<data;  }
    myfile.close();
    return 0;
}
