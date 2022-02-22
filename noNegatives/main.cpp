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
    // Program that takes user numbers until they enter a negative number. Then print each of their numbers to the screen, and then print out the highest number and second highest number.
    int numbers[95];
    int tempNumber;
    
    tempNumber = 0;
    int counter;
    
    counter = 0;
    do {
        cout << "Please enter a number: " << endl;
        cin >> tempNumber;
        if (tempNumber >= 0) {
            numbers[counter] = tempNumber;
            counter = counter + 1;
        }
    } while (tempNumber >= 0);
    int index;
    
    // Only count to the value of the counter -1; because that is all that is stored in the array
    int valueA, valueB;
    
    valueA = 0;
    valueB = 0;
    for (index = 0; index <= counter - 1; index++) {
        cout << numbers[index] << endl;
        if (numbers[index] > valueA) {
            if (valueA > valueB) {
                valueB = valueA;
            }
            valueA = numbers[index];
        } else {
            if (numbers[index] > valueB) {
                valueB = numbers[index];
            }
        }
    }
    cout << "Highest number was: " << valueA << endl;
    cout << "Second highest number was: " << valueB << endl;
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
