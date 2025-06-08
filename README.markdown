# 🧠🔍 DecisionInsight Pro: Sensory & Metaprogram Analyzer ⚙️
_A C++ console application for analyzing decision-making mechanisms through self-assessment questionnaires on sensory systems and metaprograms._

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B%2011%2B-blue.svg)](https://isocpp.org/)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://www.microsoft.com/windows)

## 📋 Table of Contents
1.  [Overview](#-overview)
2.  [Key Features](#-key-features)
3.  [Screenshots](#-screenshots)
4.  [System Requirements](#-system-requirements)
5.  [Core Configuration & Utilities (`config.h`, `utils.h`)](#-core-configuration--utilities-configh-utilsh)
6.  [Installation and Setup](#️-installation-and-setup)
7.  [Usage Guide](#️-usage-guide)
8.  [File Structure](#-file-structure)
9.  [Technical Notes](#-technical-notes)
10. [Contributing](#-contributing)
11. [License](#-license)
12. [Contact](#-contact)

## 📄 Overview

**DecisionInsight Pro**, authored by Adrian Lesniak, is an insightful C++ console application designed to explore and analyze individual decision-making patterns. It primarily focuses on a **Self-Report** mode where users answer a series of questions to assess their preferred sensory systems (Visual, Auditory, Kinesthetic - VAK) and key metaprograms (e.g., internal/external authority, comparison styles). Based on these assessments, the program can generate tailored product descriptions. A **Report** mode, intended for analyzing others, is included as a placeholder for future development. The application features a colorful Windows-specific console interface, robust input validation, and event logging, all managed through a modular design utilizing user-provided `config.h` and `utils.h` files.

![Demo GIF](screenshots/1.gif)

## ✨ Key Features

*   🧠 **Self-Report Analysis**:
    *   **Sensory System Assessment**: Evaluates preferences for Visual, Auditory, and Kinesthetic processing through a 36-question (yes/no) questionnaire.
    *   **Metaprogram Evaluation**: Assesses six distinct metaprograms (e.g., authority source, comparison strategy, detail level, motivation direction, operational method, focus type) via a targeted six-question survey.
    *   **Personalized Output**: Identifies the dominant sensory system and lists the determined metaprogram preferences.
    *   `createProductDescription`: Generates example product descriptions tailored to the user's analyzed sensory and metaprogram profile.
*   📝 **Report Mode (Placeholder)**:
    *   Includes a menu option for analyzing others' decision patterns, currently marked as incomplete and "to be expanded."
*   🖥️ **Interactive Console Interface**:
    *   `showProgramDescription`: Displays a comprehensive overview of the program's purpose and capabilities.
    *   `showMainMenu`: Presents clear options: Self-Report, Report (incomplete), View Program Description, and Exit.
    *   **Colorful Output**: Utilizes Windows console API (via `utils.h`) for distinct colors (e.g., red for errors, other colors for UI elements) to enhance readability.
*   🛠️ **Utilities & Configuration**:
    *   **`Utils` Class (from `utils.h`)**: Manages UI elements like header display, line separators (`separator`), logging messages, waiting for keypresses, and setting console colors.
    *   **`Config` (from `config.h`)**: Defines global settings, notably color constants for the console.
*   ✍️ **Event Logging**:
    *   Logs significant program events (start, end) and any encountered errors to a specified log file using `Utils::logMessage`.
*   ⚙️ **Robust Operation**:
    *   Main program loop continues until the user chooses to exit.
    *   Includes thorough input validation for menu choices and questionnaire responses (y/n, 1/2).

## 🖼️ Screenshots

_Screenshots showcasing the main menu, the self-report questionnaire process, example outputs for sensory systems and metaprograms, tailored product descriptions, and the program description screen._

<p align="center">
  <img src="screenshots\1.jpg" width="300"/>
  <img src="screenshots\2.jpg" width="300"/>
  <img src="screenshots\3.jpg" width="300"/>
  <img src="screenshots\4.jpg" width="300"/>
  <img src="screenshots\5.jpg" width="300"/>
  <img src="screenshots\6.jpg" width="300"/>
  <img src="screenshots\7.jpg" width="300"/>
  <img src="screenshots\8.jpg" width="300"/>
  <img src="screenshots\9.jpg" width="300"/>
  <img src="screenshots\10jpg" width="300"/>
  <img src="screenshots\11jpg" width="300"/>
</p>


## ⚙️ System Requirements

*   **Operating System**: Windows (due to dependencies like `<windows.h>` for `SetConsoleTextAttribute` and `<conio.h>` for `_getch`, managed via `utils.h`).
*   **C++ Compiler**: A C++ compiler supporting C++11 or later (e.g., g++, MSVC).
*   **Standard C++ Libraries**: `<iostream>`, `<fstream>`, `<string>`, `<vector>`, `<map>` (likely for metaprograms/word lists), `<stdio.h>`, `<ctype.h>`, `<limits>`.
*   📄 **`config.h` and `utils.h` Header Files (User-Provided)**: This project **critically requires** these two header files. **They are not included in the repository and must be created by the user.** `config.h` should define configuration settings like color constants. `utils.h` should declare the `Utils` class and its utility methods. See "Core Configuration & Utilities" and "Installation and Setup" for details.
*   **Write Permissions**: The application needs write permissions in its execution directory for the log file.

## ⚙️ Core Configuration & Utilities (`config.h`, `utils.h`)

These user-provided header files are essential:

*   **`config.h`**: Defines global configurations.
    *   Example: `Config::Colors` enum or constants (e.g., `Config::COLOR_ERROR`, `Config::COLOR_TEXT_DEFAULT`).
*   **`utils.h`**: Declares a `Utils` class (or namespace with static functions) for common tasks.
    *   Example Methods: `Utils::displayHeader()`, `Utils::logMessage(const std::string& message)`, `Utils::waitForKeyPress()`, `Utils::setColor(Config::Colors color)`, `Utils::clearScreen()`, `Utils::drawLine()`.

**Example structure for `config.h`:**
```cpp
#ifndef CONFIG_H
#define CONFIG_H

namespace Config {
    // Console Color Definitions (Windows-specific values)
    enum Colors {
        DEFAULT = 7,
        RED_ERROR = 12,
        CYAN_MENU = 11,
        YELLOW_HIGHLIGHT = 14,
        GREEN_SUCCESS = 10
        // Add other colors as needed
    };

    // Potentially other global settings
    // const std::string LOG_FILE_PATH = "decision_analyzer.log";
}

#endif // CONFIG_H
```

**Example structure for `utils.h` (declaring a `Utils` class):**
```cpp
#ifndef UTILS_H
#define UTILS_H

#include "config.h" // If Colors enum is in Config namespace
#include <string>
#ifdef _WIN32
#include <windows.h>
#include <conio.h>
#endif
#include <fstream>
#include <iostream>
#include <ctime>

class Utils {
public:
    static void displayHeader(const std::string& programTitle, const std::string& author);
    static void logMessage(const std::string& message, const std::string& logFilePath = "app.log"); // Define log file path
    static void waitForKeyPress(const std::string& prompt = "Press any key to continue...");
    static void setColor(Config::Colors color); // Or (int color)
    static void clearScreen();
    static void drawLine(char c = '-', int length = 70);
    static std::string getCurrentTimestamp(); // For logging
};

#endif // UTILS_H
```
*You must implement the static methods of the `Utils` class, likely in a `utils.cpp` file.*

## 🛠️ Installation and Setup

1.  **Clone the Repository**:
    ```bash
    git clone <repository-url>
    cd <repository-directory>
    ```
    *(Replace `<repository-url>` and `<repository-directory>` with your specific details)*

2.  **Create `config.h` and `utils.h`**:
    Place your `config.h` and `utils.h` files (as described in "Core Configuration & Utilities (`config.h`, `utils.h`)") in the project directory. Also, create `utils.cpp` if your `Utils` class methods are not inline.

3.  **Save Main Code**:
    Ensure your main program logic is saved as `decision_analysis.cpp` (or your chosen main file name) in the project directory.

4.  **Compile the Program**:
    Open a terminal (Command Prompt, PowerShell, etc.) in the project directory.
    **Example using g++ (MinGW):**
    ```bash
    g++ decision_analysis.cpp utils.cpp -o decision_analysis.exe -std=c++11 -static-libgcc -static-libstdc++
    ```
    *(This assumes `utils.cpp` contains implementations for `Utils` class methods. Adjust if your structure differs).*

5.  **Run the Program**:
    ```bash
    .\decision_analysis.exe
    ```
    *(or `decision_analysis.exe` in CMD)*

## 💡 Usage Guide

1.  Compile and run `decision_analysis.exe` as detailed above.
2.  **Interface**:
    *   The program will display a main menu with the following options:
        1.  Self-Report Analysis
        2.  Report on Others (Currently Incomplete)
        3.  View Program Description
        4.  Exit
3.  **Input**:
    *   Select a menu option (1–4) by typing the number and pressing Enter.
    *   **For Self-Report (Option 1)**:
        *   You'll be prompted again to choose between self-report (1) or report on others (2 - which will show the incomplete message).
        *   If self-report is chosen, you will answer:
            *   36 yes/no (`y`/`n`) questions to determine your sensory system preferences.
            *   A question to select a future scenario (1–3), which may weight your sensory scores.
            *   Six questions (typically choosing between two options, e.g., `1` or `2`) to determine your metaprograms.
        *   Invalid inputs (e.g., anything other than 'y', 'n', '1', '2' where expected) will trigger error messages and re-prompts.
    *   **Report (Option 2 from main menu)**: Will display a placeholder message indicating it's incomplete and return to the menu.
4.  **Output**:
    *   **Self-Report**:
        *   Displays your calculated scores for Visual, Auditory, and Kinesthetic sensory systems (e.g., "Visual: 8, Auditory: 2, Kinesthetic: 4").
        *   Identifies your dominant or preferred sensory representational system (e.g., "Your preferred representation system is the VISUAL system").
        *   Lists your determined metaprograms (e.g., "Metaprogram 1: Internal Authority," "Metaprogram 2: Sameness with Exception").
        *   Shows example product descriptions or communication styles tailored to your sensory and metaprogram preferences.
    *   Errors encountered during operation are logged to the specified log file (e.g., `app.log`) via `Utils::logMessage`.
5.  **Actions**:
    *   After each major operation or report display, you will typically be prompted to press any key to return to the main menu.
    *   Select option `4` from the main menu to exit the application.

## 🗂️ File Structure
*   `decision_analysis.cpp`: The main C++ source file containing the core program logic, questionnaires, and analysis.
*   `config.h`: (User-provided) Header file for global configurations, especially color constants.
*   `utils.h`: (User-provided) Header file declaring the `Utils` class for console utilities and logging.
*   `utils.cpp`: (User-provided, if `Utils` methods are not inline) Implementation file for the `Utils` class.
*   `[log_file_name].log`: A log file (name determined by `Utils::logMessage` implementation) where program events and errors are recorded.
*   `README.md`: This documentation file.

## 📝 Technical Notes
*   **Windows Specifics**: Relies on Windows headers (`<windows.h>`, `<conio.h>`) for console colors and `_getch()`, primarily managed through the `Utils` class. Cross-platform adaptation would require alternatives for these functionalities.
*   **Modular Design**: The separation of concerns into `Config`, `Utils`, and the main application logic promotes better organization.
*   **Report Mode Incomplete**: The "Report on Others" feature is a known placeholder. Future development could involve designing a similar questionnaire or analysis method suitable for evaluating others.
*   **Self-Report Enhancements**: The summary could be made more detailed, or results could be saved to a personalized file.
*   **Input Validation**: The program includes robust checks for yes/no answers and numeric menu choices using `std::cin.fail()`, `clear()`, and `ignore()`.

## 🤝 Contributing
Contributions to **DecisionInsight Pro** are highly encouraged! If you have ideas for completing the "Report" mode, expanding the metaprograms analyzed, adding data storage for self-report results, improving the tailoring of product descriptions, or enhancing cross-platform support:

1.  Fork the repository.
2.  Create a new branch for your feature (`git checkout -b feature/YourInsightfulIdea`).
3.  Make your changes and commit them (`git commit -m 'Feature: Implement YourInsightfulIdea'`).
4.  Push to the branch (`git push origin feature/YourInsightfulIdea`).
5.  Open a Pull Request.

Please ensure your code is well-commented and aligns with good C++ practices.

## 📃 License
This project is licensed under the **MIT License**.
(If you have a `LICENSE` file in your repository, refer to it: `See the LICENSE file for details.`)

## 📧 Contact
Created by **Adrian Lesniak**.
For questions, feedback, or issues, please open an issue on the GitHub repository or contact the repository owner.

---
✨ _Understanding decisions, one pattern at a time._
