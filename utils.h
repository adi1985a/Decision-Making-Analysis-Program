#pragma once
#include <windows.h>
#include <string>
#include <fstream>
#include <ctime>  // Add this for time and ctime functions
#include "config.h"

namespace Utils {
    void setColor(int color) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }

    void drawLine(int length = 80) {
        std::cout << std::string(length, '-') << std::endl;
    }

    void clearScreen() {
        system("cls");
    }

    void waitForKeyPress() {
        std::cout << "\nPress any key to continue...";
        _getch();
    }

    void logMessage(const std::string& message) {
        std::ofstream logFile(Config::LOG_FILE, std::ios::app);
        if (logFile.is_open()) {
            std::time_t now = std::time(nullptr);  // Fixed time call
            logFile << std::ctime(&now) << message << std::endl;  // Fixed ctime call
            logFile.close();
        }
    }

    void displayHeader() {
        clearScreen();
        setColor(Config::Colors::TITLE);
        drawLine();
        std::cout << "                  " << Config::PROGRAM_NAME << " v" << Config::VERSION << std::endl;
        std::cout << "                       by " << Config::AUTHOR << std::endl;
        drawLine();
        setColor(Config::Colors::DEFAULT);
    }
}
