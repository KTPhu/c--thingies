#include <iostream>
#include <vector>

using namespace std;
int main (){
    double pH;
    while (true) {
        cout << "Enter a pH value: " << endl;
        cin >> pH;
        if (!cin) {
            cout << "Input error." << endl;
            return 1;
        }
        if (pH >= 0.0 && pH <= 14.0) {
            cout << "Valid pH. Enter another value." << endl;
            continue;
        }
        cout << "Invalid pH, stopping." << endl;
        break;
    }

    // vector<double> measurements (10);
    // for (int i = 0; i < 10; i++){
    //     cout << "Enter measurement " << (i + 1) << ": ";
    //     cin >> measurements[i];
    //     if (!cin) {
    //         cout << "Input error." << endl;
    //         return 1;
    //     }
    // }

    return 0;
}

