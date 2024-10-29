// Chapter 5 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand(time(0)); 
    int randomnum = rand() % 100 + 1; 
    int guess;
    int guesses = 0;
    // cout << randomnum << endl; // I tots didnt cheat
     cout << "Try to guess a number between 1-100" << endl;

    do {
        cout << "Please enter your guess: ";
        cin >> guess;
        guesses++;

        if (guess > randomnum) {
            cout << "Too high try guessing somehting lower" << endl;
        }
        else if (guess < randomnum) {
            cout << "Too low try guessing somehting higher" << endl;
        }
    } while (guess != randomnum);

    cout << "Congratulations! You got the number in: " << guesses << " guesses" << endl;
    if (guesses == 1) {
        cout << "That was so lucky have yer heard of gambling kid" << endl;
    }
    else;
    return 0;
    //I swear on all things holy we did something like this but without rand
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
