//maximum subarray sum
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int maxSum=INT16_MIN;
    int current_sum=0;
    for(int i=0;i<n;i++)
    {
        current_sum +=arr[i];
        maxSum=max(current_sum,maxSum);
        if(current_sum<0)
        current_sum=0;
    }
return maxSum;
}