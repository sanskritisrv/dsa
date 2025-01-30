//array like, dynamic in nature,
//stl-- standard template library, library jisko vectors use karta hai ,it is more imp  
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(88);
    vec.pop_back();
    vec.front();
    vec.back();
    vec.at(1);

}
