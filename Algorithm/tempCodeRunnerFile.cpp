#include <iostream>
using namespace std;

void compute(int n) {
    int sum1 = 0;
    int sum2 = 0;
    float sum3 = 0;
    for(int i = 1; i <= n; i++) {
        sum1 += i;
        sum2 += i * i;
        sum3 += 1.0 / i;
    }  
    cout << "Sum of numbers: " << sum1 << endl;
    cout << "Sum of squares: " << sum2 << endl;
    cout << "Sum of reciprocals: " << sum3 << endl;
}
int main() {
    int n;
    cout << "Enter your size: ";
    cin >> n;
    compute(n);
    return 0;
}