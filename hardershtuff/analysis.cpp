#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

double getMean(const vector<double>& m){
    if (m.empty()) {
        return 0.0;
    }

    double sum = 0.0;
    for (double measurement : m){
        sum += measurement;
    }
    return sum / m.size();
}

int getMaximum (const vector<double> & m){
    if(!m.empty()){
        auto max_it = max_element(m.begin(), m.end());
        int max_value = *max_it;
        return *max_it;
    }
}

int getMinimum (const vector<double> & m){
    if (!m.empty()){
        auto min_it = min_element(m.begin(), m.end());
        int min_value = *min_it;
        return *min_it;

    }
}

double getStandardDeviation(const vector<double> & m, bool isSample = false){
    if (m.empty()){
        return 0.0;
    }

    double average = getMean(m);
    double squared_difference_sum = 0.0;
    for (double value : m) {
        squared_difference_sum += (value - average) * (value - average);
    }
    double divisor = isSample ? (m.size() - 1) : m.size();
    if (divisor <= 0) return 0.0;

    return sqrt(squared_difference_sum / divisor);
}


int main (){
    cout<< "Enter in 20 values" <<endl;
    vector<double> measurements(20);
    for (int i = 0; i < 20; ++i){
        cout<< "Please enter value " << i + 1 << " : " <<endl;
        cin >> measurements[i];
        if(!cin){
            cout << "Input error." <<endl;
            return 1;

        }

    }

    cout << "The mean is: " << fixed << getMean(measurements) << endl;
    cout << "The Maximum is: " << fixed << getMaximum(measurements) << endl;
    cout << "The minimum is: " << fixed << getMinimum(measurements) << endl;
    cout << "The standard deviation is: " << getStandardDeviation(measurements) <<endl;

}