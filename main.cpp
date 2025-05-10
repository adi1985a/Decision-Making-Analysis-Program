#include <iostream>
#include<conio.h>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include <limits>  // Add this include
#include "config.h"
#include "utils.h"

using namespace std;

// Program description
void showProgramDescription() {
    Utils::displayHeader();
    Utils::setColor(Config::Colors::HIGHLIGHT);
    cout << "\nPROGRAM DESCRIPTION:\n";
    cout << "This program helps analyze decision-making mechanisms through:\n";
    cout << "1. Self-Report - Analyze your own decision-making patterns\n";
    cout << "2. Report - Analyze someone else's decision-making patterns\n\n";
    Utils::setColor(Config::Colors::DEFAULT);
    Utils::drawLine();
}

// Main menu
int showMainMenu() {
    int choice;
    bool validInput = false;
    
    while (!validInput) {
        Utils::displayHeader();
        cout << "\nMAIN MENU:\n";
        cout << "1. Self-Report (Complete analysis of your decision patterns)\n";
        cout << "2. Report (Analyze others' decision patterns)\n";
        cout << "3. View Program Description\n";
        cout << "4. Exit\n\n";
        Utils::drawLine();
        cout << "Enter your choice (1-4): ";
        
        if (cin >> choice) {
            if (choice >= 1 && choice <= 4) {
                validInput = true;
            } else {
                HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                cout << "Invalid choice! Please try again.\n";
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                Utils::waitForKeyPress();
            }
        } else {
            cin.clear();
            cin.ignore(256, '\n');
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "Invalid input! Please enter a number between 1-4.\n";
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            Utils::waitForKeyPress();
        }
    }
    return choice;
}

//After answering the questions, we will get a full report on your decision-making mechanisms.
//Finish Test in the end needs to be improved and expanded.

void separator();

// Helper function to create product description
string createProductDescription(const string& rep_system, const string& authority, 
                             const string& comparison, const string& detail,
                             const string& motivation, const string& method, 
                             const string& focus) {
    return rep_system + authority + comparison + detail + motivation + method + focus;
}

int main() {
    try {
        Utils::logMessage("Program started");
        
        while (true) {
            int choice = showMainMenu();
            
            switch (choice) {
                case 1: {  // Added braces for scope
                    Utils::displayHeader();
                    // Self-report functionality starts here
                    {
                        char odpowiedz, odpowiedz1, odpowiedz2, odpowiedz3, odpowiedz4, odpowiedz5, odpowiedz6, odpowiedz7, odpowiedz8;
                        int liczba_odp = 0;
                        int liczba_odp1 = 0;
                        int liczba_odp2 = 0;
                        int liczba_odp3 = 0;
                        int liczba_odp4 = 0;
                        int liczba_odp5 = 0;
                        int liczba_odp6 = 0;
                        int liczba_odp7 = 0;
                        int liczba_odp8 = 0;

                        int wybor_start = 2;

                        string wzrokowy, audytywny, kinestetyczny;
                        wzrokowy = "You look at this great product and imagine you already have it. ";
                        audytywny = "You heard about this product on the radio and you tell you something inside that you want to have it. ";
                        kinestetyczny = "You just feel for a long time that this is a product for you and you imagine you already have it in your hands. ";

                        string autoryt_wew, autoryt_zew, podobienstwa, roznice, szczegolowi, ogolni, dazenie, unikanie, procedury, opcje, ja, inni;
                        autoryt_wew = "He has many advantages, but only you know why it is the best for you. ";
                        autoryt_zew = "It was tested by experts from the industry, and their assessments were very high. ";
                        podobienstwa = "It is very similar to one you already know well because you were very pleased with it. ";
                        roznice = "You haven't seen it yet, it is completely new and you like it. ";
                        szczegolowi = "It is perfect in every detail. ";
                        ogolni = "In general, it is a perfect product. ";
                        dazenie = "You know what you want. Acquiring this product will allow you to achieve your goals. ";
                        unikanie = "Acquiring this product will allow you to avoid many problems in the future. ";
                        procedury = "Why should you buy it? Because the situation forces you to do so, you just had to have it. ";
                        opcje = "You have a wonderful opportunity, because the acquisition of the product will give you unimaginable possibilities and it is now more cheaper. ";
                        ja = "The purchase of this product is only your idea because you know exactly what you will have. ";
                        inni = "Acquiring this product will also help your loved ones, and you will gain recognition of the environment. ";

                        cout << "PROGRAM FOR THE REPORT AND SELF-REPORT." << endl;
                        cout << "\nSelf-report or Raport is a study on what drives us in every decision in our lives." << endl;
                        cout << "The study of human sensory systems and its metaprograms." << endl;
                        cout << "\nChoose what you want to do." << endl;
                        cout << "1.Self-raport.(ready)" << endl;
                        cout << "2.Raport.(incompleated)" << endl;
                        //      a) representative systems
                        //      b) metaprograms
                        //      c) lifestyles (age)

                        cout << "\nEnter a number (1 or 2) and confirm your choice with the ENTER key: " ;
                        cin >> wybor_start;
                        system("cls");

                        if (wybor_start==2)  ////tu zaczynamy tworzyc raport (1) , wszystko powinno byc na koncu podsumowane

                        {

                            cout << "Raport." << endl;
                            cout << "\nIf you want to know more about a person " << endl;
                            cout << "what influences them the most and why, first take a good look at that person " << endl;
                            cout << "and get to know this person if you can and then answer the following questions. " << endl;
                            cout << "\nTo be expanded.." << endl;
                            return 0;

                            //to be expanded..


                        }


                        if (wybor_start==1) //here we start to create autorport, everything should be summarized at the end
                        {


                            cout << "Autoraport." << endl;
                            cout << "\nIf you want to know more about yourself, who you are, " << endl;
                            cout << "what affects you the most and why, please answer the following questions. " << endl;
                            system("cls");


                            //REPRESENTATIVE SYSTEM - Visual


                            cout << "1. Do you like to have order around you?? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;

                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "2. Are you annoyed by not evenly arranged books on the shelf? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;

                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "3. When you walk past a pile of newspapers, do you ever think of straightening them out? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;

                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");


                            cout << "4. Do you remember well the colors and drawings on the covers of books and their locations in the bookcase,," << endl;
                            cout<< "but you have a hard time remembering the title and author's name? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;

                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "5. Do you prefer to read and take your own notes while studying? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;
                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "6. Do you remember faces but often forget names? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;
                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "7. Do you care a lot about your appearance and the appearance of other people? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;
                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "8. When talking to another person, do you keep a considerable distance to see the whole thing? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;
                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "9. Do you usually have an upright body posture with your head slightly up? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;
                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "10. Are you breathing shallowly, rather quickly, in the upper part of your chest? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;
                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "11. Do you speak quickly and your tone of voice is rather high? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;
                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "12. Do you mostly wear carefully selected clothes and enjoy aesthetic surroundings? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz;
                            if (odpowiedz=='y')
                            {
                                liczba_odp++;
                            }
                            else if (odpowiedz=='n')
                            {
                                liczba_odp--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");










                            //SYSTEM REPREZENTACYJNY - audytywny


                            cout << "13. Do you like to talk a lot and you speak with great ease using " << endl;
                            cout << "characteristic long sentences in your speech? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;


                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "14. Do you prefer listening to recordings or lectures rather than reading? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;

                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "15. Do you make many spelling mistakes? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;

                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "16. Do you have trouble with geometry or maps? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;
                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "17. Do you often remember melodies and dialogues from movies? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;
                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "18. Do you often repeat aloud while studying? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;
                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "19. Do you often repeat what you heard or hum it?" << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;
                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "20. Can you remember names easier than faces? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;
                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "21. Do you like long conversations? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;
                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "22. Is your body posture tilted slightly to one side? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;
                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "23. Is the way your breathing is quite deep, or are you breathing through your entire chest? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;
                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "24. Is your speech rather rhythmic and melodious? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz1;
                            if (odpowiedz1=='y')
                            {
                                liczba_odp1++;
                            }
                            else if (odpowiedz1=='n')
                            {
                                liczba_odp1--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");







                            //REPRESENTATIVE SYSTEM - Kinesthetic


                            cout << "25. Are you a person who is rather calm, calm, empathetic and sensitive? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;

                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "26. Do you often think, reflect and wonder about something? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;

                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "27. Do you usually speak quietly and calmly? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;

                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }


                            system("cls");

                            cout << "28. Do you go through everything strongly and have a rich emotional life? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;
                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "29. Do you like physical exercise and sports? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;
                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "30. Do you practice any sport or do you regularly go for long walks? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;
                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "31. Do you gesticulate quite spontaneously during a conversation and like to pat yourself and others? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;
                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "32. Do you find it difficult to stay in one place, do you change positions and fidget? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;
                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "33. Do you attach importance to your own comfort in clothing and also in your surroundings? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;
                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "34. Is your speech soft, deep, and does your voice have a lower pitch? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;
                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "35. Do you keep your distance in your contacts and move closer to the person you are talking to? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;
                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");

                            cout << "36. Is your way of breathing deep, are you breathing all over you? " << endl;
                            cout<< "\nAnswer yes(y) or no(n) and confirm with ENTER: ";
                            cin >> odpowiedz2;
                            if (odpowiedz2=='y')
                            {
                                liczba_odp2++;
                            }
                            else if (odpowiedz2=='n')
                            {
                                liczba_odp2--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");



                            char wybor_sys_rep;

                            cout << "Choose one of the three assumptions described " << endl;
                            cout << "regarding your near future, which one best suits you? " << endl;
                            cout << "\n1. In the future, I would like my life to be drawn only" << endl;
                            cout << "in bright colors, so that looking back I could see" << endl;
                            cout << "undiscovered horizons and fully sharpened scenery that would paint me new possibilities," << endl;
                            cout << "illuminating all the positive features of my personality." << endl;
                            cout << "\n2. In the future, I would like to be able to listen and speak louder" << endl;
                            cout << "about my achievements in my own life, so that the voice of intuition would speak to me every day " << endl;
                            cout << "in screaming colors and play as I hum, making me the master of the music of my life. "<< endl;
                            cout << "\n3. In the future, I would like to feel that the meaning of my life is much"<< endl;
                            cout << "more meaningful and profound, to feel that I am standing on solid foundations " << endl;
                            cout << "that allow me to better fit into this cold world, " << endl;
                            cout << "and that opens a soft path through life before me." << endl;
                            cout << "\nEnter a number (1,2 or 3) and confirm your choice with the ENTER key: " ;
                            cin >> wybor_sys_rep;


                            if (wybor_sys_rep=='1')
                            {
                                liczba_odp+=3;
                            }

                            if (wybor_sys_rep=='2')
                            {
                                liczba_odp1+=3;
                            }

                            if (wybor_sys_rep=='3')
                            {
                                liczba_odp2+=3;
                            }




                            system("cls");





                            /*
                                switch(wybor_sys_rep)
                                {
                                              case 1:


                                                   break;

                                              case 2:

                                                   break;

                                              case 3:

                                                   break;



                                                default:
                                                cout << "Wrong value has been entered."<< endl;
                                                break;
                                }
                            */






                            //METAPROGRAMS ------------

                            //authorities 1 internal 2 external

                            cout << "37. In an electronics store and you choose household appliances, what will you do before buying the product? " << endl;
                            cout<< "\n1) You know that only you can make the best decision, and what you decide is entirely up to you. " << endl;
                            cout<< "2) Before you buy anything, you ask other people's opinions, read the opinions of experts " << endl;
                            cout<< "in the field or prefer the staff to advise you. " << endl;

                            cout<< "\nEnter a number (1 or 2) and confirm your choice with the ENTER key: ";
                            cin >> odpowiedz3;

                            if (odpowiedz3=='1')
                            {
                                liczba_odp3++;
                            }
                            else if (odpowiedz3=='2')
                            {
                                liczba_odp3--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");


                            //1 similarities 2 differences

                            cout << "38. Suppose you are going to buy a new car, what would you be guided by in choosing it?" << endl;
                            cout<< "\n1) This car should already be familiar to you and have similar characteristics to the model "<< endl;
                            cout<< "you already know well from the past." << endl;
                            cout<< "2) This car should stand out with something innovative, it must be different "<< endl;
                            cout<< "from the previous ones that you have already driven." << endl;


                            cout<< "\nEnter a number (1 or 2) and confirm your choice with the ENTER key: ";
                            cin >> odpowiedz4;

                            if (odpowiedz4=='1')
                            {
                                liczba_odp4++;
                            }
                            else if (odpowiedz4=='2')
                            {
                                liczba_odp4--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");


                            //1 particular 2 general

                            cout << "39. What do you do when you read a leaflet, a poster on a bulletin board or a newspaper advertisement?" << endl;
                            cout << "\n1) You read it carefully, you pay attention to details, because sometimes there may be " << endl;
                            cout<< "things or services that you especially need."<< endl;
                            cout<< "2) You browse it generally, not paying attention to details, you focus on general issues, " << endl;
                            cout<< "because you are interested in specifics."<< endl;



                            cout<< "\nEnter a number (1 or 2) and confirm your choice with the ENTER key: ";
                            cin >> odpowiedz5;

                            if (odpowiedz5=='1')
                            {
                                liczba_odp5++;
                            }
                            else if (odpowiedz5=='2')
                            {
                                liczba_odp5--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");


                            //1 challenge 2 avoidance

                            cout << "40. After reading which of the travel agencies advertisements " << endl;
                            cout << "would you be more likely to take advantage of the offer? " << endl;
                            cout << "\n1) Holidays in this extremely picturesque place guarantee you that you will have a great rest, " << endl;
                            cout << "you will have the opportunity to swim a few kilometers in warm ocean water " << endl;
                            cout << "every day, and maybe you will also want to learn how to swim on water skis or windsurfing. " << endl;
                            cout << "In the evenings you can meet a lot of very interesting people from almost all over the world, " << endl;
                            cout << "which will allow you to make many new friends."<< endl;
                            cout << "\n2) Holidays in this extremely picturesque place guarantee you a perfect rest, " << endl;
                            cout << "getting rid of all the problems of everyday life, spending time only on carefree lazing around." << endl;
                            cout << "I'm sure you won't meet any of your co-workers there. " << endl;
                            cout << "You will avoid spending whole evenings alone, because lots of interesting and very sociable people " << endl;
                            cout << "from all over Europe come there, which will let you forget about boredom" << endl;
                            cout << "because it is still quite a little known place in our country. " << endl;

                            cout<< "\nEnter a number (1 or 2) and confirm your choice with the ENTER key: ";
                            cin >> odpowiedz6;

                            if (odpowiedz6=='1')
                            {
                                liczba_odp6++;
                            }
                            else if (odpowiedz6=='2')
                            {
                                liczba_odp6--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");



                            //1 procedure 2 options

                            cout << "41. What are you more focused on? " << endl;
                            cout << "\n1) Taking care of the duties that belong to you. It's a proven method of success." << endl;
                            cout << "2) Making sure not to miss out on good opportunities and new opportunities. This is your method of success. " << endl;

                            cout<< "\nEnter a number (1 or 2) and confirm your choice with the ENTER key: ";
                            cin >> odpowiedz7;

                            if (odpowiedz7=='1')
                            {
                                liczba_odp7++;
                            }
                            else if (odpowiedz7=='2')
                            {
                                liczba_odp7--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");



                            //1 Me 2 Others

                            cout << "42. What do you pay attention to first when deciding to buy a product or service?" << endl;
                            cout << "\n1) You are an intelligent customer, therefore, in the first place, you pay attention to what you will get from it, " << endl;
                            cout << "what benefits this purchase can bring you." << endl;
                            cout << "2) You mainly pay attention to how it will benefit others, what benefits it will bring to your family, " << endl;
                            cout << "employees or how it will make an impression on people you know." << endl;

                            cout<< "\nEnter a number (1 or 2) and confirm your choice with the ENTER key: ";
                            cin >> odpowiedz8;

                            if (odpowiedz8=='1')
                            {
                                liczba_odp8++;
                            }
                            else if (odpowiedz8=='2')
                            {
                                liczba_odp8--;
                            }
                            else
                            {
                                cout << "Wrong value has been entered." << endl;
                                cout << "Press Enter to continue..." << endl;
                                cin.clear();
                                cin.ignore(256, '\n'); 
                                cin.get();
                            }
                            system("cls");





                            cout << "Number of answers - visual : " << liczba_odp << endl;
                            cout << "Number of answers - auditory : " << liczba_odp1 << endl;
                            cout << "Number of answers - kinesthetic : " << liczba_odp2 << endl;



                            if ((liczba_odp > liczba_odp1) && (liczba_odp > liczba_odp2))
                            {
                                cout << "\nYour preferred representation system is the VISUAL system." << endl;
                                cout << "Information Retrieval Tool: Eyeballs."<< endl;
                                cout << "Type of information recording: Electromagnetic waves."<< endl;
                            }
                            if ((liczba_odp1 > liczba_odp) && (liczba_odp1 > liczba_odp2))
                            {
                                cout << "\nYour preferred representation system is the AUDITORY system." << endl;
                                cout << "Information retrieval tool: Ears."<< endl;
                                cout << "Type of information recording: Acoustic waves."<< endl;
                            }
                            if ((liczba_odp2 > liczba_odp) && (liczba_odp2 > liczba_odp1))
                            {
                                cout << "\nYour preferred representation system is the KINESTHETIC system." << endl;
                                cout << "Information logging type: Whole body."<< endl;
                                cout << "Type of information recording: Receptors."<< endl;
                            }

                            if ((liczba_odp > liczba_odp1) && (liczba_odp == liczba_odp2))
                            {
                                cout << "\nYour preferred representation system is the VISUAL-KINESTHETIC system" << endl;
                                cout << "Information retrieval tool: Eyeballs and touch."<< endl;
                                cout << "Type of information recording: Electromagnetic waves and body receptors."<< endl;
                            }
                            if ((liczba_odp1 > liczba_odp) && (liczba_odp1 == liczba_odp2))
                            {
                                cout << "\nYour preferred representation system is the AUDIO-KINESTHETIC system." << endl;
                                cout << "Information Retrieval Tool: Ears and Touch."<< endl;
                                cout << "Type of information recording: Acoustic waves and body receptors."<< endl;
                            }
                            if ((liczba_odp > liczba_odp2) && (liczba_odp == liczba_odp1))
                            {
                                cout << "\nYour preferred representation system is the AUDIO-VISUAL system." << endl;
                                cout << "Information Retrieval Tool: Eyeballs and Ears."<< endl;
                                cout << "Type of information recording: Electromagnetic waves and acoustic waves."<< endl;
                            }
                            if ((liczba_odp == liczba_odp1) && (liczba_odp1 == liczba_odp2))
                            {
                                cout << "\nYou have no preferred representational system, your mind operates with all of them equally." << endl;
                                cout << "Information retrieval tool: Eyeballs, ears and touch."<< endl;
                                cout << "Type of information recording: Electromagnetic waves, acoustic waves and body receptors."<< endl;
                            }

                            if (liczba_odp3 > 0)
                            {
                                cout << "\nYour Metaprogram 1 is: Internal Authority." << endl;
                            }
                            if (liczba_odp3 < 0)
                            {
                                cout << "\nYour Metaprogram 1 is: External Authority." << endl;
                            }
                            if (liczba_odp4 > 0)
                            {
                                cout << "Your metaprogram 2 is: Similarities." << endl;
                            }
                            if (liczba_odp4 < 0)
                            {
                                cout << "Your metaprogram 2 is: Differences." << endl;
                            }
                            if (liczba_odp5 > 0)
                            {
                                cout << "Your metaprogram 3 is: Specific." << endl;
                            }
                            if (liczba_odp5 < 0)
                            {
                                cout << "Your metaprogram 3 is: General." << endl;
                            }
                            if (liczba_odp6 > 0)
                            {
                                cout << "Your Metaprogram 4 is: Aim." << endl;
                            }
                            if (liczba_odp6 < 0)
                            {
                                cout << "Your metaprogram 4 is: Avoidance." << endl;
                            }
                            if (liczba_odp7 > 0)
                            {
                                cout << "Your metaprogram 5 is: Procedures." << endl;
                            }
                            if (liczba_odp7 < 0)
                            {
                                cout << "Your metaprogram 5 is: Opportunities." << endl;
                            }
                            if (liczba_odp8 > 0)
                            {
                                cout << "Your metaprogram 6 is: Me." << endl;
                            }
                            if (liczba_odp8 < 0)
                            {
                                cout << "Your metaprogram 6 is: Others." << endl;
                            }

                            cout << "\nDetailed description of metaprograms in txt file" << endl;
                            cout << "Press any key to continue Self-raport." << endl;
                            getch();
                            system("cls");


                            cout << "Imagine that you want to buy a certain product." << endl;
                            cout << "You have two options to choose from for this product. Read the two descriptions below, " << endl;
                            cout << "choose product 1 or 2 and remember the answer." << endl;
                            cout << " " << endl;



                            //visual
                            if ((liczba_odp > liczba_odp1) && (liczba_odp > liczba_odp2)) {
                                if (liczba_odp3 > 0 && liczba_odp4 > 0 && liczba_odp5 > 0 
                                    && liczba_odp6 > 0 && liczba_odp7 > 0 && liczba_odp8 > 0) {
                                    
                                    string product1 = createProductDescription(wzrokowy, autoryt_wew, podobienstwa, 
                                                                            szczegolowi, dazenie, procedury, ja);
                                    cout << product1 << endl;
                                    cout << "\nIf you choose this product after reading the description below, remember the number: 1" << endl;
                                    separator();

                                    string product2 = createProductDescription(kinestetyczny, autoryt_zew, roznice,
                                                                            ogolni, unikanie, opcje, inni);
                                    cout << "\n" << product2 << endl;
                                    cout << "\nIf you choose this product after reading the description below, remember the number: 2" << endl;
                                }
                            }

                            getch();


                            //auditory
                            if ((liczba_odp1 > liczba_odp) && (liczba_odp1 > liczba_odp2) && (liczba_odp3 > 0) && (liczba_odp4 > 0) && (liczba_odp5 > 0)
                                    && (liczba_odp6 > 0) && (liczba_odp7 > 0) && (liczba_odp8 > 0)) {
                                string product1 = createProductDescription(audytywny, autoryt_wew, podobienstwa, 
                                                                            szczegolowi, dazenie, procedury, ja);
                                cout << product1 << endl;
                                cout << "\nIf you choose this product after reading the description below, remember the number: 1." << endl;
                                separator();

                                string product2 = createProductDescription(kinestetyczny, autoryt_zew, roznice,
                                                                            ogolni, unikanie, opcje, inni);
                                cout << "\n" << product2 << endl;
                                cout << "\nIf you choose this product after reading the description below, remember the number: 2" << endl;
                            }

                            getch();


                            //kinesthetic
                            if ((liczba_odp2 > liczba_odp) && (liczba_odp2 > liczba_odp1) && (liczba_odp3 > 0) && (liczba_odp4 > 0) && (liczba_odp5 > 0)
                                    && (liczba_odp6 > 0) && (liczba_odp7 > 0) && (liczba_odp8 > 0)) {
                                string product1 = createProductDescription(kinestetyczny, autoryt_wew, podobienstwa, 
                                                                            szczegolowi, dazenie, procedury, ja);
                                cout << product1 << endl;
                                cout << "\nIf you choose this product after reading the description below, remember the number: 1." << endl;
                                separator();

                                string product2 = createProductDescription(wzrokowy, autoryt_zew, roznice,
                                                                            ogolni, unikanie, opcje, inni);
                                cout << "\n" << product2 << endl;
                                cout << "\nIf you choose this product after reading the description below, remember the number: 2" << endl;
                            }

                            getch();



                        }






                        else
                        {
                            cout << "Wrong value has been entered." << endl;

                        }
                    }
                    Utils::waitForKeyPress();
                    break;
                }
                    
                case 2: {
                    Utils::displayHeader();
                    cout << "Report analysis feature - Coming soon!\n";
                    Utils::waitForKeyPress();
                    break;
                }
                    
                case 3: {
                    showProgramDescription();
                    Utils::waitForKeyPress();
                    break;
                }
                    
                case 4: {
                    Utils::logMessage("Program ended normally");
                    return 0;
                }
                    
                default: {
                    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                    cout << "Invalid choice! Please try again.\n";
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    Utils::waitForKeyPress();
                    break;
                }
            }
        }
    }
    catch (const exception& e) {
        Utils::logMessage("Error: " + string(e.what()));
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "An error occurred: " << e.what() << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        return 1;
    }

    return 0;
}

void separator()
{
    cout << "-----------------------------------------------" ;
}
