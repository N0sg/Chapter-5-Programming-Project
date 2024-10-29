// Chapter 5 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startingpop, days;
    double dailyincrease;

    do {
        cout << "Please enter the starting number of organisms (must be at least 2): ";
        cin >> startingpop;
        if (startingpop < 2) {
            cout << "Error the population has to be atleast 2\n";
        }
    } while (startingpop < 2);


    do {
        cout << "Please enter the average daily population increase: ";
        cin >> dailyincrease;
        if (dailyincrease < 0) {
            cout << "Error cannot be negative.\n";
        }
    } while (dailyincrease < 0);


    do {
        cout << "Please enter the number of days they will multiply : ";
        //Multiply just feels wrong
        cin >> days;
        if (days < 1) {
            cout << "Error number of days must be at least 1.\n";
        }
    } while (days < 1);

    double dailymultiplier = 1 + (dailyincrease / 100.0);

    cout << fixed << setprecision(2);
    double population = startingpop;
    for (int day = 1; day <= days; ++day) {
        cout << "How many days " << day << "Starting population" << startingpop << ": New size of population = " << population << endl;
        population *= dailymultiplier;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
