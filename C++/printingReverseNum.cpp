#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: " << endl;
    cin >> n;
    int ans=0;
    while (n > 0)
    {
        int last_digit = n % 10;

        // cout << last_digit;
        // n = n / 10;

        ans=ans*10+last_digit;
        n=n/10;
    }
    cout<<ans<<endl;

    return 0;
}