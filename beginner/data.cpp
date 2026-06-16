#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int getSumOfMeasurements (const vector<double>& m) {
    double sum = 0;
    for (double measurement : m) {
        sum += measurement;
    }
    return sum;
}
double getAverageOfMeasurements (const vector<double>& m) {
    if (m.empty()) return 0.0;
    double sum = getSumOfMeasurements(m);
    double average = sum / m.size();
    return average;
}


int main(){
    cout << "How many measurements do you want to enter ";
    int nMeasurements;
    cin >> nMeasurements;
    vector<double> measurements(nMeasurements);
    for (int i = 0; i < nMeasurements; ++i) {
        cout << "Enter measurement " << i + 1 << ": " << endl;
        cin >> measurements[i];
    }
    cout << "Sum: "<< fixed << getSumOfMeasurements(measurements) << endl;
    cout << "Average: " << fixed << setprecision(3) << getAverageOfMeasurements(measurements) << endl;
}
