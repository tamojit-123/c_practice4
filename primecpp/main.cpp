#include <iostream>

using namespace std;
#include <process.h>
int main()
{
    unsigned long n,j;
    cout << "enter a number: ";
    cin >> n;
    for(j=2; j<=n/2; j++)
        if (n%j == 0)
    {
        cout << " it not  a prime; divisible by " << j << endl;
    }
    cout << "it is prime";
    return 0;
}
