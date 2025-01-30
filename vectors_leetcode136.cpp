#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums)
{
int ans=0;
vector <int> num;
for(int val: num)
{
    ans=ans^val;
}
return ans;
}

