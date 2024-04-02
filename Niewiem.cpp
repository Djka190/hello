#include<iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    int choice, num, num2,num3, odp1, year1, month1, day1, k2, p = 0;
    string k1;
    cout << "------WELCOME TO BOYWITHUKE QUIZ------" << endl;
    cout << "Menu: " << endl
    << "1. Song Lyrics" << endl
    << "2. Album Dates" << endl
    << "3. Knowledge" << endl 
    << "0. Leave" << endl;
    cin >> choice;
    while (choice != 0) {
    switch(choice) {
       case 1:
        cout << "------SONG LYRICS------" << endl; 
        srand(time(NULL));
        num = rand()% 3 + 1;
        if(num == 1) {
        cout << "Tobi tells me lies when I'm sleep-deprived" << endl <<
"Tobi says that I'm the worst of my kind" << endl <<
"The voice that trails behind makes me petrified" << endl <<
"Thinking I won't live to see twenty-five" << endl;
       cout << "Your time to shine! Guess the song: " << endl <<
       "1. Migraines" << endl << "2. Psycho" << endl << "3.  Lovesick" << endl
       << "4. Two moons" << endl;
       
       cin >> odp1;
       if (odp1 == 2) {
       cout << "Wow gratuluje" << endl;
       p++;
       }
       else {
       while (odp1 != 2) {
       cout << "Zle debilu" << endl;
       cin >> odp1;
       }
       cout << "No wkoncu" << endl;
       p++;
        }
        }
        else if(num == 2) {
        cout << "I'm not a psycho, but I might go crazy" << endl <<
"Writing typos, they ask, Why so shaky?" << endl <<
"Missing my coat, all this pressure hitting my head" << endl;
cout << "Your time to shine! Guess the song: " << endl <<
       "1. Migraines" << endl << "2. Psycho" << endl << "3.  Lovesick" << endl
       << "4.Two moons" << endl;
       
       cin >> odp1;
       if (odp1 == 1 ) {
       cout << "Wow gratuluje" << endl; 
       p++;
       }
       else {
       while (odp1 != 1) {
       cout << "Zle debilu" << endl;
      cin >> odp1;
       }
       cout << "No wkoncu" << endl;
       p++;
        }
        }
        else if(num== 3) {
        cout << "Two moons, I can feel myself start catching on fire" << endl <<
"But you knew, yeah, you kept it to yourself, to yourself" << endl <<
"Two moons, I get lost on my way searching for liars" << endl <<
"This ain't good for my health, no, this ain't good for my health" << endl;

       cout << "Your time to shine! Guess the song: " << endl <<
       "1. Migraines" << endl << "2. Psycho" << endl << "3.  Lovesick" << endl
       << "4.Two moons" << endl;
       
       cin >> odp1;
       if (odp1 == 4) {
       cout << "Wow gratuluje" << endl;
       p++;
       }
       else {
      while (odp1 != 4) {
       cout << "Zle debilu" << endl;
       cin >> odp1;
       }
       cout << "No wkoncu" << endl;
       p++;
        }
        }
        break;
    case 2:
    cout << "------Album Dates------" << endl;
    srand(time(NULL));
        num2 = rand()% 3 + 1;
        if(num2 == 1) {
        cout << "Tell me the date for Serotonin Dreams" << endl;
        cout << "Year: " << endl;
        cin >> year1;
        if(year1 == 2022) {
        cout << "Nice man" << endl;
        }
        else {
       while(year1 != 2022) {
       cout << "Nuh uh" << endl;
       cin >> year1;
       }
       cout << "Finally" << endl; 
        }
        cout << "Month (number): " << endl;
        cin >> month1;
        if(month1 == 5) {
        cout << "nice" << endl;
        }
        else {
        while(month1!= 5) {
        cout << "You dumb or what" << endl;
        cin >> month1;
        }
        cout << "Finally" << endl;
        }
        cout << "Day: " << endl;
        cin >> day1;
        if(day1 == 5) {
        cout << "nice" << endl;
        p++;
        }
        else {
        while(day1!= 5) {
        cout << "You dumb or what" << endl;
        cin >> day1;
        }
        cout << "Finally" << endl;
        p++;
        }
        }
        else if(num2 == 2) {
        cout << "Tell me the date for Lucid Dreams" << endl;
        cout << "Year: " << endl;
        cin >> year1;
        if(year1 == 2023) {
        cout << "Nice man" << endl;
        }
        else {
       while(year1 != 2023) {
       cout << "Nuh uh" << endl;
       cin >> year1;
       }
       cout << "Finally" << endl; 
        }
        cout << "Month (number): " << endl;
        cin >> month1;
        if(month1 == 10) {
        cout << "nice" << endl;
        }
        else {
        while(month1!= 10) {
        cout << "You dumb or what" << endl;
        cin >> month1;
        }
        cout << "Finally" << endl;
        }
        cout << "Day: " << endl;
        cin >> day1;
        if(day1 == 6) {
        cout << "nice" << endl;
        p++;
        }
        else {
        while(day1!= 6) {
        cout << "You dumb or what" << endl;
        cin >> day1;
        }
        cout << "Finally" << endl;
        p++;
        }
        }
        else if(num2 == 3) {
        cout << "Tell me the date for Fever Dreams" << endl;
        cout << "Year: " << endl;
        cin >> year1;
        if(year1 == 2021) {
        cout << "Nice man" << endl;
        }
        else {
       while(year1 != 2021) {
       cout << "Nuh uh" << endl;
       cin >> year1;
       }
       cout << "Finally" << endl; 
        }
        cout << "Month (number): " << endl;
        cin >> month1;
        if(month1 == 6) {
        cout << "nice" << endl;
        }
        else {
        while(month1!= 6) {
        cout << "You dumb or what" << endl;
        cin >> month1;
        }
        cout << "Finally" << endl;
        }
        cout << "Day: " << endl;
        cin >> day1;
        if(day1 == 4) {
        cout << "nice" << endl;
        p++;
        }
        else {
        while(day1!= 4) {
        cout << "You dumb or what" << endl;
        cin >> day1;
        }
        cout << "Finally" << endl;
        p++;
        }
        }
        break;
    case 3:
    cout << "------Knowledge------" << endl;
    srand(time(NULL));
    num3 = rand()%3 + 1;
    if (num3 == 1) {
    cout << "Where does BWU live?" << endl;
    cin >> k1;
    if(k1 == "Massachusetts") {
    cout << "nice man" << endl;
    p++;
    }
    else {
    while(k1 != "Massachusetts") {
    cout << "bro is dumb" << endl;
    cin >> k1;
    }
    cout << "Finally" << endl;
    p++;
    }
    }
    else if(num3 == 2) {
    cout << "How old is Boywithuke" << endl;
    cin >> k2;
    if (k2 == 21) {
    cout << "wowowowo" << endl;
    p++;
    }
    else {
    while(k2 != 21) {
    cout << "bro is dumb" << endl;
    cin >> k2;
    }
    cout << "Finally" << endl;
    p++;
    }
    }
    else if (num3 == 3) {
    cout << "What is Bwu's MBTI (pisz z dużej)" << endl;
    }
    if (k1 == "INTP") {
    cout << "wow amazing" << endl;
    p++;
    }
    else {
    while(k1 != "INTP") {
    cout << "Bro is dumb asf" << endl;
    cin >> k1;
    }
    cout << "Finally" << endl;
    p++;
    }
     } 
    cout << "Choose quiz again: " << endl; 
     cin >> choice;
     }
     cout << "Thank you for playing! Your points: " << p << endl;
    return 0;
}