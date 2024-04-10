#include<iostream>
#include <chrono>
#include <ctime>
#include <windows.h>
#include <string>
#include <thread>
#include <stdio.h>
#include <libloaderapi.h>


using namespace std;


//not being used anymore but I could probably find some use for it so I'm keeping it
void sleep(float seconds) {
    clock_t startClock = clock();
        float secondsAhead = seconds * CLOCKS_PER_SEC;
        return;
}

void SkidBot1(); //Function in Bot1.cpp
void SkidBot2(); //Function in Bot2.cpp
void SkidBot3(); //Function in Bot3.cpp

int main() {
    string client;
    string test1;
    int numberbots(3);
    char Botone[] = ("botone");
    char BotTwo[] = ("bottwo"); 
    char BotThree[] = ("botthree");
    char VRCbot[] = ("bot");
    char Help[] = ("/help");
    char test[] = ("test");
    char funny[] = ("funny");
    cout << "Enter a command.\n/help for a list of commands.\n";
    cin >> client;
    if (client == Help) {
        cout << "Bot           starts up VRC ApBots\ntest          this command does nothing it's meant for debugging.\nfunny         funny i shuold do it in see\nbotone        Opens SkidBot1\nbottwo        Opens SkidBot2\nbotthree      Opens SkidBot3\n";
     // cout << "test          this command does nothing it's meant for debugging.\n";
    }
    else {
        if (client == VRCbot) {
            cout << "Please enter the number of bots you would like.\n" << "The maximum of bots is three.\n";
            cin >> numberbots;
           //new code
            /* 
        int numberbots;
        cin >> numberbots;


        for (int i =0; i < numberbots; i++){
          if (numberbots >= 6){
           cout << "cant have this many";
           break;
        }
        cout << "SkidBot %d is opening... \n", numberbots;

        cout << "test\n";
    }*/
            switch (numberbots) {
            case 1: 
                cout << "Starting up 1 bot. \n";//making sure
                SkidBot1();
                break;
            case 2:
                cout << "Starting up 2 bots.. \n";//making sure
                SkidBot1();
                SkidBot2();
                break;
            case 3:
                cout << "Starting up 3 bots... \n";//making sure
                SkidBot1();
                SkidBot2();
                SkidBot3();
                break;
            defaults:
                cout << "Error entering the number of bots.\nPlease restart the program and try again.\n";
            }
        }
        else {
            if (client == test) {
                cout << "This way works\ n";
            }
            else {
                if (client == funny) {
                    while (true)
                    {
                        cout << "==============================================================\n                        :?7.                                    \n                     :?B@@G7.                                \n                   :J#@@@@@@B!.                                \n                 ^J#@@@@@@@#J^                                \n               ^Y#@@@@@@@B?:      :                            \n             ^Y&@@@@@@@B?:      ^YBJ^                        \n          .~5&@@@@@@&G7.      ~Y&@@@#Y^                        \n         .~G@@@@@@@@P~     .~5&@@@@@@@#Y^                    \n           :?B@@@@@@@#Y^ .~5&@@@@@@@@@@@&5~.                \n    .!~      :7G@@@@@@@&5P&@@@@@@&B@@@@@@@&5~.                \n  .7G@&5~.     .7G@@@@@@@@@@@@@&P!.!G@@@@@@@&P!.            \n:7B@@@@@&5~.     .!P@@@@@@@@@&5~    .!P&@@@@@@@P!:            \n:!P@@@@@@@&P!.   :7G@@@@@@@@@@P!.     .~P&@@@@&P~.            \n  .!P&@@@@@@@G!:?B@@@@@@@@@@@@@@G7.     .~5&&5~                \n    .~5&@@@@@@@#@@@@@@@#Y5&@@@@@@@G7:     .~^                \n      .~5&@@@@@@@@@@@#J^  ^Y#@@@@@@@B?:                        \n         ^Y#@@@@@@@BJ:      !B@@@@@@@@5~.                    \n           ^J#@@@B?:      ^J#@@@@@@@B?^                        \n             ^JG?:      ^Y#@@@@@@@B?:                        \n               .      ~5&@@@@@@@G7:                            \n                   .~P&@@@@@@@G7.                            \n                   :7B@@@@@@G!.                                \n                     .7G@&P!.                                \n                       .7!.                                    \n==============================================================\n";
                    }
                }
                else {
                    if (client == Botone) {
                        cout << "Starting up Bot1. \n";//making sure
                        sleep(1);
                        SkidBot1();
                    }
                    else {
                        if (client == BotTwo) {
                            cout << "Starting up Bot2.  \n";//making sure
                            sleep(1);
                            SkidBot2();
                        }
                        else {
                            if (client == BotThree) {
                                cout << "Starting up Bot3. \n";//making sure
                                sleep(1);
                                SkidBot3();
                            }
                            else {
                                cout << "Invalid command.\nPlease restart the program and try again.\n";
                            }
                        }
                    }
                }
                
            }
        }
    }
    // -- old code v2
    //cout << "Please enter the number of bots.\n" << "The maximum of bots is three.\n";
    //cin >> numberbots;
    /*
    char botone[] = ("1"); - old code -- v2
    char bottwo[] = ("2"); - old code -- v2
    char botthree[] = ("3"); - old code -- v2
    if (numberbots == botone) {

        cout <<"Starting up 1. \n";//making sure 
        SkidBot1();
    }
    else {
        if (numberbots == bottwo) {
            cout << "Starting up 2.. \n";//making sure 
            SkidBot1();
            SkidBot2();
        }
        else {
            if (numberbots == botthree) {
                cout << "Starting up 3... \n";//making sure 
                SkidBot1();
                SkidBot2();
                SkidBot3();
            }
            else {
                
                cout << "Error entering the number of bots.\n"; 
                cout << "Please restart the program and try again.\n";
            };
        };
    };
    */
    // --old code v1
    //add more process for the number of bots 
    //SkidBot1();
    //sleep(20.0);
	//SkidBot2();
    //sleep(45.0);
    //SkidBot3();
    //bot code//
	return 0;
}

