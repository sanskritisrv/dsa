// smallest no in an array
#include<iostream>
using namespace std;


int main()
{
  int size;
  cout<<"Enter size of the array"<<endl;
  cin>>size;

  int num[size];
  cout<<"enter array"<<endl;
  for(int j=0;j<size;j++)
  { 
    cin>>num[j];
  }
  int smallest=num[0];

  for(int i=0;i<size;i++)
  {
     if(num[i]<smallest)
      smallest=num[i];


  }

  
  cout<<"smallest ="<<smallest<<endl;
  return 0;
  }
  

 //sum and product of all nos in an array

  



