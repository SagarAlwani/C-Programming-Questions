	#include<iostream>
    using namespace std;
    int fact(int );
    int main()
    {
        int n;
        cout <<"Enter a Number whoes Factorial u want to print\n";
        cin >> n;
        cout << "Factorial of " << n << "is = " << fact(n);
        return 0;
    }
    int fact(int n)
    {
        if(n > 1)
            return n * fact(n - 1);
        else
            return 1;
    }
