/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Numbers
Returns 'true' if the 2 integers are 
dvisible Otherwise, returns 'false'.
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){; // 2 int parameters
    if (d == 0)
        return false;
    else if (n % d == 0)
        return true; // 1 
    else    
        return false; // 0 
}

bool isPrime(int n){; // checks prime 
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int nextPrime(int n){;
    if (n <= 1)
        return 2;
    int prime = n;
    bool num = false;
    while (!num) { //! means not 
        prime++;

        if (isPrime(prime))
            num = true;
    }
    return prime;
}

int countPrimes(int a, int b){;
    int primenum = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
            primenum++; //increments by 1 
    }
    return primenum;
}

bool isTwinPrime(int n){; // returns true or false so bool is used
    if(!isPrime(n))
        return false;
    if(isPrime(n-2) || isPrime(n+2))
        return true;
    else
        return false;
}

int nextTwinPrime(int n){;
    int i = n + 1;

    while(!(isTwinPrime(i)))
    {
        i++;
    }
    return i;
}

int largestTwinPrime(int a, int b){;
    for (int i = b; i >= a; i--)
    {
        if (isTwinPrime(i))
            return i;
    }
    return -1;
}

int main()
{
    int n, d; // 2 num inputs
    bool num;
    cout << "Enter first number: ";
    cin >> n;
    cout << "Enter second number: ";
    cin >> d;
    if (isDivisibleBy(n, d))
        cout << "Yes" << endl;
    else   
        cout << "No" << endl;
    
    if (isPrime(n))
        cout << n << "is a prime number" << endl;
    else 
        cout << n << "is not a prime number" << endl;

    cout << nextPrime(n) << endl;

    cout << countPrimes(n,d);
    
    num = isTwinPrime(n);
    if (num == true)
        cout << n << " is a twin prime";
    else    
        cout << n << " is not a twin prime";

    cout << nextTwinPrime(n);
    cout << largestTwinPrime(n,d);
    
    return 0;

}
