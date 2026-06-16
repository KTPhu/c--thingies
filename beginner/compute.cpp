#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int getMean(const vector<double> & measurements){
    double sum = 0;
    for (double m : measurements){
        sum +=m;
        
    }
    return sum / measurements.size(); //size is the number of elements in the vector//
}

int getMaximum( const vector<double> & measurements){
    double max = measurements[0];
    for (double m : measurements){
        if (m > max){
            max = m;
        }
    }
    return max;
}


int main (){
    cout << "How many measurements do you want to enter?" << endl;
    int n;
    cin >> n;
    vector<double> measurements (n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter measurement " << i+1 << ": " <<endl;
        cin >> measurements[i];
    }

    cout << "Mean: " <<getMean(measurements) << endl;
    cout << "Maximum: " <<getMaximum(measurements) << endl;

}