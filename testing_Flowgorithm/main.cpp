#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    // FIZZBUZZ Program
    int a;
    
    for (a = 1; a <= 100; a++) {
        if (a % 3 == 0 && a % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else {
            if (a % 3 == 0) {
                cout << "FIZZ" << endl;
            } else {
                if (a % 5 == 0) {
                    cout << "BUZZ" << endl;
                } else {
                    cout << a << endl;
                }
            }
        }
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
