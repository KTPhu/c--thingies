#include <iostream>
#include <vector>

using namespace std;

int getMean (const vector<double>& m){
    double sum = 0;
    for (double measurement : m){
        sum += measurement;
    }
    return sum;

    double average = sum / m.size();
    return average;
}

int getMaximum (const vector<double> & m){
    
}

int main (){
    cout<< "Enter in 20 values" <<endl;
    vector<double> measurements(20);
    for (int i = 0; i < 20; ++i){
        cout<< "Please enter value " << i + 1 << " : " <<endl;
        cin >> measurements[i];

    }
}