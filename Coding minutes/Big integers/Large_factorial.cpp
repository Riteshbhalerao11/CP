#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<string>
#define ll long long
#define vl vector <long long>
#define vi vector <int>
#define f(i,a,b) for(int i = a ; i < b ; i++)
using namespace std;

int CharToInt(char x)
{
    return x - '0';
}

vi Multiply(vi n1 , int n2)
{
    stack <int> tempres;
    vi result;
    reverse(n1.begin(),n1.end());
    int temp{0} , carry{0};
    f(i,0,n1.size())
    {
        temp = ((n1[i] * n2) + carry) % 10;
        carry = ((n1[i] * n2) + carry) / 10; // Corrected this line
        tempres.push(temp);
    }
    while(carry)
    {
        tempres.push(carry % 10);
        carry = carry / 10;
    }
    while (!tempres.empty())
    {
        temp = tempres.top();
        tempres.pop();
        result.push_back(temp);
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    vi temp {1};
    f(i,1,n)
    {
        temp = Multiply(temp,(i+1));
    }
    f(i,0,temp.size())
    {
        cout<<temp[i];
    }
    return 0;
}
