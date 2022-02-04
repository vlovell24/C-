#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <iostream>
#include "employee.h"

using namespace std;


int main() {

    vector<int> v {2, 7, 1, 6, 2, -2, 4, 0};
    map <int, int> monthlengths { {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 30}, {11, 31}, {12, 31}};

    int const target = 2;
    int odds = 0;

    int simple = count(begin(v), end(v), target);

    //count all the odd numbers in the array v
    odds = count_if(begin(v), end(v), 
           [](auto elem) {return elem % 2 != 0;});

    //count all of the days that have 31 in the map monthlengths
    int longmonths = count_if(begin(monthlengths), end(monthlengths), [](auto elem) {return elem.second  == 31;});

    bool allof, noneof, anyof;

    //built in methods for determining any, none or all. Handy dandy
    allof = all_of(begin(v), end(v), [](auto elem) {return elem % 2 != 0; });
    noneof = none_of(begin(v), end(v), [](auto elem) {return elem % 2 != 0; });
    anyof = any_of(begin(v), end(v), [](auto elem) {return elem % 2 != 0; });

    cout << simple <<endl << odds << endl << longmonths << endl << anyof << endl;
    
    vector<int> v2 { 2, 4, 6, 6, 1, 3, -2, 0, 11, 2, 3, 2, 4, 4, 2, 4 };

    //find the first zero in v2
    auto result = find(begin(v), end(v), 0);
    int weLookedFor = *result;
    cout <<"The int we looked for was: " << weLookedFor << endl;

    //find the position of a word in a sentence
    string s { "Hello I am a sentence" };
    int word = s.find("am");
    cout << "The word we looked for was found at position: " << word << endl;

    //sorting a vector

    vector<Employee> staff {
        {"Valerie", "Lovell", 1000},
        {"Testy", "McTesterson", 2000},
        {"Yo", "Momma", 1000},
        {"Kitty", "McKittyface", 2000},
        {"Doggy", "McDoggyface", 1000},
        {"Birdie", "McBirdyface", 2000}
    };


    //sorting by salary
   std::sort(begin(staff), end(staff), [](Employee e1, Employee e2) {return e1.getSalary() < e2.getSalary(); });


}    
