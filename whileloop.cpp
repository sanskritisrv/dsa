//loop to caluclate sum of n numbers using while 
#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter n"<<endl;
cin>>n;

int i=1;
int sum=0;
while(i<=n)
{
    sum =sum+i;
    i++;
}
cout<<"Sum is = "<<sum<<endl;
return 0;
}


