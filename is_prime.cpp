#include<iostream>
using namespace std;

void func() {
    int n,i;
    bool isprime = true;

    cout << "Enter a number ";
    cin >> n;

    if(n == 0 || n == 1){
        isprime = false;
    }
    else {
        for(i=2;i<=n/2;i++){
            if(n%i == 0) {
                isprime = false;
                break;
            }
        }
    }
    if(isprime) 
    cout << n << " is a prime number";
    else 
    cout << n << " is not a prime number";
}

int main() {
    func();
}
