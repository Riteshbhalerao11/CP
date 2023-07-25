/*
Unique numbers, given 2N+1 numbers where every number comes twice except one number
Find that number.

We can do this simply by applying XOR of all numbers. Because XOR of same bits is zero
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums;
    int n, temp;
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        cin>>temp;
        nums.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int res {0};
    for (int i = 0; i < n; i++)
    {
        res = res ^ nums[i];
    }
    cout << res;
    
    
}