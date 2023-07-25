/*
Find 2 unique numbers from 2N + 2.
*/

#include<iostream>
#include<vector>
#define ll long long
#define vl vector <long long>
#define vi vector <int>
#define f(i,a,b) for(int i = a ; i < b ; i++)
using namespace std;
int main()
{
    vi nums {1,2,3,1,2,3,4,5,4,7};
    int restemp {0};
    for(auto i : nums)
    {
        restemp = restemp ^ i;
    }
    int temp = restemp;
    int pos {0};
    while((temp & 1) == 0)
    {
        pos++;
        temp = temp>>1;
    }
    int res1 {0}, res2 {0};
    for(auto i : nums)
    {
        if(((i>>pos)&1) % 2 == 0)
        {
            res1 = res1 ^ i;
        }
        else
        {
            res2 = res2 ^ i;
        }
    }
    cout << res1 << " " << res2<<endl; 
    return 0;
}