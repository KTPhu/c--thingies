#include <iostream>
#include <vector>
using namespace std;

int getPositiveCount(const vector<double> & measurements){
    int count = 0;
    for (double m : measurements){
        if (m > 0){
            count++;
        }
    }
    return count;
}


int main (){
    cout << "how many values do you want to enter?" << endl;
    int n;
    cin >> n;
    vector<double> measurements (n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter measurement " << i+1 << ": " <<endl;
        cin >> measurements[i];
    }

    cout << "Number of positive values: " <<getPositiveCount(measurements) << endl;

    
}