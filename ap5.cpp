#include <iostream>
using namespace std;
bool prime(int n)
{
    if (n <= 2)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int prims[10];
    for (int i = 2; i < 10; i++)
    {
        if (prime(i))
        {
            prims[i] = i;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << prims[i] << endl;
    }

    return 0;
}