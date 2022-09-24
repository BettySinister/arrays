#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

// ФУНКЦИИ

// задание 1
void describeNumber() {
    cout << "Enter a number: ";
    int x;
    cin >> x;
    cout << x << " is ";
    if (x == 0) {
        cout << "just zero, it's not even or odd.";
        return;
    }
    else {
        x % 2 == 0 ? cout << "even and " : cout << "odd and ";
        x > 0 ? cout << "positive." : cout << "negative.";
        return;
    }
} 

// задание 2
void guessNumber() {
    while (true) {
        cout << "Enter two numbers (their difference must not exceed 10): " << endl;
        int x, y;
        cin >> x;
        cin >> y;

        int max, min;
        if (x == y) {cout << "Numbers are identical. Please try again." << endl; continue;}
        else if (x > y) {max = x; min = y;}
        else {max = y; min = x;}

        if (max - min > 10) {
            cout << "Their difference must not exceed 10! Please try again." << endl;
            continue;
        }
        srand(time(NULL));
        int generatedNumber = min + rand() % (max - min);

        int answer;
        cout << "I guessed a number between " << min << " and " << max << ". Could you guess?" << endl;
        cin >> answer;
        if (answer == generatedNumber) {
            cout << "Correct!";
            break;
        }
        else {
            cout << "Wrong! I guessed " << generatedNumber << ". Try again!" << endl;
        }
    }
}

// задание 3
void task3() {
    char optics[] = { 'о', 'п', 'т', 'и', 'к', 'а' };
    optics[1] = 'а';
    optics[3] = 'е';
}

// задание 4
void arrayPrint(char array[]) {
    //cout << sizeof(array); // почему sizeof(array) всегда возвращает именно 8? что за символ он решает выводить, когда заканчиваются буквы?
    for (int i = 0; i < sizeof(array); i++) { 
        cout << array[i];
    }
    
    /*int i = 0;
    while (array[i] != '\0') {
        cout << array[i];
        i++;
    };
    */
}

void month(int n) {
    // char January[] = { 'J', 'a', 'n', 'u', 'a', 'r', 'y', '\0' }; ???
    char January[] = { 'J', 'a', 'n', 'u', 'a', 'r', 'y'};
    char February[] = { 'F', 'e', 'b', 'r', 'u', 'a', 'r', 'y' };
    char March[] = { 'M', 'a', 'r', 'c', 'h' };
    char April[] = { 'A', 'p', 'r', 'i', 'l' };
    char May[] = { 'M', 'a', 'y' };
    char June[] = { 'J', 'u', 'n', 'e' };
    char July[] = { 'J', 'u', 'l', 'y' };
    char August[] = { 'A', 'u', 'g', 'u', 's', 't' };
    char September[] = { 'S', 'e', 'p', 't', 'e', 'm', 'b', 'e', 'r' };
    char October[] = { 'O', 'c', 't', 'o', 'b', 'e', 'r' };
    char November[] = { 'N', 'o', 'v', 'e', 'm', 'b', 'e', 'r' };
    char December[] = { 'D', 'e', 'c', 'e', 'm', 'b', 'e', 'r' };

    switch (n)
    {
    case 1: arrayPrint(January); break;
    case 2: arrayPrint(February); break;
    case 3: arrayPrint(March); break;
    case 4: arrayPrint(April); break;
    case 5: arrayPrint(May); break;
    case 6: arrayPrint(June); break;
    case 7: arrayPrint(July); break;
    case 8: arrayPrint(August); break;
    case 9: arrayPrint(September); break;
    case 10: arrayPrint(October); break;
    case 11: arrayPrint(November); break;
    case 12: arrayPrint(December); break;
    default:
    {
        cout << "Error: there is no such a month.";
    }
    }
}

// задание 5
int positiveEven(double array[10]) {
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number " << i + 1 << " out of 10: ";
        cin >> array[i];
        if ((int(array[i]) % 2 == 0) && array[i] > 0) {
            counter++;
        }
    }
    return counter;
}



int main()
{
    //describeNumber();
    
    //guessNumber();
    
    //task3();

    /*int x;
    while (true) {
        cin >> x;
        month(x);
    }
    */

    /*double integers[10];
    positiveEven(integers);*/

}
