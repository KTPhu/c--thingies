#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    double celcius;
    cout << "Enter temperature in Celsius: ";
    cin >> celcius;
    double farenheit = 9.0/5.0 * celcius + 32;
    cout << "Average: " << fixed << setprecision(3) << farenheit  << endl;
    return 0;
}