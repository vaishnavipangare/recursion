#include <iostream>
using namespace std;
int sum(int n) {
    if (n == 0) {         
        return 0;
    }
    return n + sum(n - 1);  
}
int main() {
    int n;
    cout << "Enter the value of n: "<<endl;
    cin >> n;
    cout << "Sum of first " << n << " natural numbers = " << sum(n)<<endl;
    return 0;
}

/*Output:-
Enter the value of n: 
7
Sum of first 7 natural numbers = 28
*/
