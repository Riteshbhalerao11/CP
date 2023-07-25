#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#define ll long long
#define vl vector <long long>
#define vi vector <int>
#define f(i,a,b) for(int i = a ; i < b ; i++)
using namespace std;
int main()
{
    vi num1 {9, 3, 7,5,6,3,1,4,2,1,2,3,1,1,2,3,9,7,8};
    vi num2 {3, 4, 5,9,7,8,9,7,6,5,4};
    vi result;
    stack <int> res;
    int carry{0};
    int counter = max(num1.size(), num2.size());
    int tempres{0};
    for (int i = 0; i < counter; i++)
    {
        // Updated loop conditions
        if (i < num1.size() && i < num2.size()) // No need to check (i < num1.size() - 1) and (i < num2.size() - 1)
        {
            tempres = (num1[i] + num2[i] + carry) % 10;
            carry = (num1[i] + num2[i] + carry) / 10;
        }
        else
        {
            if (i >= num1.size()) // Corrected the condition here
            {
                tempres = (num2[i] + carry) % 10;
                carry = (num2[i] + carry) / 10;
            }
            else
            {
                tempres = (num1[i] + carry) % 10;
                carry = (num1[i] + carry) / 10;
            }
        }
        res.push(tempres);
    }
    if (carry)
    {
        res.push(carry);
    }
    int temp;
    while (!res.empty()) // Changed the loop condition here
    {
        temp = res.top();
        res.pop();
        cout << temp;
    }

    return 0;
}
