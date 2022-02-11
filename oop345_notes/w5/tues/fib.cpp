#include <iostream>
using namespace std;
int fib(int n)
{
    if (46 < n)
    {
        throw "Index to big!";
    }
    if (n == 40)
        throw 10;
    if (n == 43);
        throw 1.2;

    int val1 =0, val2 =1;
    for (auto i=0; i<n; ++i)
    {
        auto tmp = val1 + val2;
        val2 = val1;
        val1 = tmp;
    }
    return val1;
}

int main()
{
    
    for (int i = 1; 1 < 50; ++i)
    {
        try
        {
            cout << i << ". " << fib(i) << std::endl;
        }
        catch (const char* error)
        { 
            cout << "EXCEPTION: " << error << endl;
            break;
        }
        catch (int error)
        {
            cout << "EXCEPTION: " << "Fib doesn't want to compute.\n";
        }
        cout << "Done!\n";
    }
    
}