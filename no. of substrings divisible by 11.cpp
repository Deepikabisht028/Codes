#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count=0;
    for(int i=0;s[i]!='\0';i++){ 
        int n=0;
        for(int j=i;s[j]!='\0';j++){
           n=n*10+(s[j]-'0');  
           if(n%11==0) 
           {count++;}
        }
    }
    cout <<count;

    return 0;
}
