#include<iostream>
using namespace std;

typedef long long int lli;

lli fibonacci(lli);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

lli fibonacci(lli x){
    if(x > 1){
        return fibonacci(x-1) + fibonacci(x-2);
    }
    return x;
}
