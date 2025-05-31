
#include <iostream>
using namespace std;


bool isPrime(int n) {
    
    
    if (n <= 1)
        return false;


    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}


bool isEmirp(int n) {

    
    int rev = 0;
    int val = n;
    while (val != 0) {
        int d = val % 10;
        rev = rev * 10 + d;
        val /= 10;
    }


    return n != rev && isPrime(n) && isPrime(rev);
}

int main() {
    int n = 13; 
    if (isEmirp(n))
        cout << "Yes";
    else
       cout<<"No";
}
