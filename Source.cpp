#include <iostream>
using namespace std;

int fib(int x) {
    if (x == 0)
        return 0;
    if (x == 1 || x == 2)
        return 1;
    else if(x > 2) {
        return fib(x-1)+ fib(x-2);
    }
}

int main() {
    int n;
    cout << "How much numbers you want to print: " << endl;
    cin >> n;

    cout << "The Finonacci serie: " << endl;
    for(int i = 0; i < n; i++) {
      cout << fib(i) << " ";
    }
    
    return 0;
}
