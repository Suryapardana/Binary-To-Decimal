#include <iostream>
#include<string>
#include<cmath>
using namespace std;

//angga gans
// g++ 6.3.0

int main()
{
    string bin;
    int i,n,sum=0;
    cin>>bin;
    n=bin.length();
    for(i=n-1;i>=0;i--)
    {
          if(bin[i]=='1')
      sum=sum+pow(2,n-i-1);
    }
    cout<<sum;
}
