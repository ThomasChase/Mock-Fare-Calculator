// This is my program to calculate the fare to use the local ferry service.
// Created by Thomas Chase
// Created on October 11, 2019
//Sources: None

// setting the preprocessors
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;



int main (){
    //declaring variables
    char reply;
    int vehicle;
    char driver;
    int regularPassenger;
    int seniorOrDisabledPassenger;
    int youthPassenger;
    double totalFare;
    char height;
    int bike;
    // fare variables
    double regularFare = 13.25;
    double youthFare = 6.60;
    double seniorFare = 6.60;
    double disabeledFare = 6.60;
    double bikeFare = 4.00;
    // vehicle fare variables with drivers fare
    double nv14 = 50.90; // normal vehicle under 14 feet with reg driver
    double nv22 = 63.75; // normal vehicle under 22 feet with reg driver
    double nvs14 = 44.25; // normal vehicle under 14 feet with senior or disabled driver
    double nvs22 = 57.10; // normal vehicle under 22 feet with senior of disabled driver
    double lv30low = 98.70; // long vehicle under 30 feet long and under 7'2" high with driver
    double lv30high = 197.10; // long vehicle under 30 long and over 7'2" high with driver
    double lv40 = 263.80; // long vehicle under 40 feet with driver

    //Beginning interaction with user

    cout << "Welcome to Thomas Chase's fare calculator." << endl;
    cout << "Are you driving a vehicle onto the ferry? (y/n): ";
    cin >> reply;
    if (reply == 'y'){      //loop for if they are driving onto the ferry
            cout << "How long is your vehicle in feet?: ";
            cin >> vehicle;
            if (vehicle >= 22 && vehicle < 30){ //large vehicle loop
                cout << "Is your vehicle over 7 feet, 2 inches tall? (y/n): ";
                cin >> height;
                if (height == 'y'){     //if vehicle is over the height limit
                        cout << "How many passengers in your vehicle?(excluding the driver): " << endl;
                        cout << "Regular fare adults: ";
                        cin >> regularPassenger;
                        cout << "Senior Citizens or Disabled: ";
                        cin >> seniorOrDisabledPassenger;
                        cout << "Youth: ";
                        cin >> youthPassenger;
                        cout << fixed << setprecision(2);
                        cout << "Your total fare is: $" << lv30high + (regularPassenger * regularFare) + (seniorOrDisabledPassenger * seniorFare) + (youthPassenger * youthFare);
                        return 0;
                }
                if (height == 'n'){     //if vehicle is under the limit
                        cout << "How many passengers in your vehicle?(excluding the driver): " << endl;
                        cout << "Regular fare adults: ";
                        cin >> regularPassenger;
                        cout << "Senior Citizens or Disabled: ";
                        cin >> seniorOrDisabledPassenger;
                        cout << "Youth: ";
                        cin >> youthPassenger;
                        cout << fixed << setprecision(2);
                        cout << "Your total fare is: $" << lv30low + (regularPassenger * regularFare) + (seniorOrDisabledPassenger * seniorFare) + (youthPassenger * youthFare);
                        return 0;
                }
            }
            if (vehicle >= 30 && vehicle < 40){
                cout << "How many passengers in your vehicle?(excluding the driver): " << endl;
                cout << "Regular fare adults: ";
                cin >> regularPassenger;
                cout << "Senior Citizens or Disabled: ";
                cin >> seniorOrDisabledPassenger;
                cout << "Youth: ";
                cin >> youthPassenger;
                cout << fixed << setprecision(2);
                cout << "Your total fare is: $" << lv40 + (regularPassenger * regularFare) + (seniorOrDisabledPassenger * seniorFare) + (youthPassenger * youthFare);
                return 0;
            }
            if (vehicle >= 40){
                cout << "Sorry the vehicle is to large to go on the Ferry" << endl;
                return 0;
            }
            cout << "Is the driver Senior Citizen or Disabled? (y/n): ";
            cin >> driver;
            if (driver == 'y'){         //loop for if the driver is disabled or senior citizen
               cout << "How many passengers in your vehicle?(excluding the driver): " << endl;
               cout << "Regular fare adults: ";
               cin >> regularPassenger;
               cout << "Senior Citizens or Disabled: ";
               cin >> seniorOrDisabledPassenger;
               cout << "Youth: ";
               cin >> youthPassenger;
               if (driver == 'y' && vehicle < 14){     // driver is disabled or a senior with a vehicle under 14 feet
                    cout << fixed << setprecision(2);
                    cout << "Your total fare is: $" << nvs14 + (regularPassenger * regularFare) + (seniorOrDisabledPassenger * seniorFare) + (youthPassenger * youthFare);
                    return 0;
               }
               if (driver == 'y' && vehicle >= 14 && vehicle < 22){     // driver is disabled or a senior with a vehicle bigger than 14 feet but less less then 20 feet
                    cout << fixed << setprecision(2);
                    cout << "Your total fare is: $" << nvs22 + (regularPassenger * regularFare) + (seniorOrDisabledPassenger * seniorFare) + (youthPassenger * youthFare);
                    return 0;
               }
            }
            if (driver == 'n'){ // loop if driver is not disabled or s senior citizen
                    cout << "How many passengers in your vehicle?(excluding the driver): " << endl;
                    cout << "Regular fare adults: ";
                    cin >> regularPassenger;
                    cout << "Senior Citizens or Disabled: ";
                    cin >> seniorOrDisabledPassenger;
                    cout << "Youth: ";
                    cin >> youthPassenger;
                    if (driver == 'n' && vehicle < 14 ){ //vehicle is under 14 feet
                        cout << fixed << setprecision(2);
                        cout << "Your total fare is: $" << nv14 + (regularPassenger * regularFare) + (seniorOrDisabledPassenger * seniorFare) + (youthPassenger * youthFare);
                        return 0;
                    }
                    if (driver == 'n' && vehicle >= 14 && vehicle < 22){  //vehicle is over 14 feet but under 22 feet
                        cout << fixed << setprecision(2);
                        cout << "Your total fare is: $" << nv22 + (regularPassenger * regularFare) + (seniorOrDisabledPassenger * seniorFare) + (youthPassenger * youthFare);
                        return 0;
                    }
            }


        }
        if (reply == 'n'){      //Loop if customer is not driving on the ferry.
            cout << "How many regular fare adults in your group?: ";
            cin >> regularPassenger;
            cout << "How many Senior Citizens or Disabled persons in your group?: ";
            cin >> seniorOrDisabledPassenger;
            cout << "How many Youths in your group?: ";
            cin >> youthPassenger;
            cout << "How many bicycles?: ";
            cin >> bike;
            cout << fixed << setprecision(2);
            cout << "Your total fare is: $" << (bike * bikeFare) + (regularPassenger * regularFare) + (seniorOrDisabledPassenger * seniorFare) + (youthPassenger * youthFare);
            return 0;
        }



    }

