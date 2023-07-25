#include <iostream>
#include <vector>
#include <string>
#define ll long long
#define vl vector <long long>
#define vi vector <int>
#define f(i,a,b) for(int i = a ; i < b ; i++)
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k, pos;
    int pcombs = (1 << s.length());
    vector <string> result;
    result.push_back("");

    f(i, 0, pcombs)
    {
        k = i;
        pos = 0;
        string temp; // Initialize temp for each subset
        f(j, 0, s.length())
        {
            if ((k & (1 << j)) != 0)
            {
                temp += s[pos];
            }
            pos++;
        }
        result.push_back(temp);
    }
    
    cout << endl;
    f(i, 0, pcombs)
    {
        cout << result[i] << " ";
    }
    return 0;
}
