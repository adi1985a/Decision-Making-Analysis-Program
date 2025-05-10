# Decision-Making Analysis Program

## Overview
This C++ console application analyzes decision-making mechanisms through self-report and report modes. The self-report feature evaluates sensory systems (visual, auditory, kinesthetic) and metaprograms (e.g., internal/external authority) via a questionnaire. The report mode (for analyzing others) is incomplete. It features Windows-specific colored output, logging, and a modular design with `config.h` and `utils.h`.

## Features
- **Self-Report**:
  - Assesses sensory systems (visual, auditory, kinesthetic) with 36 yes/no questions.
  - Evaluates six metaprograms (authority, comparison, detail, motivation, method, focus) with six questions.
  - Generates product descriptions tailored to user preferences using `createProductDescription`.
  - Outputs dominant sensory system and metaprogram results.
- **Report**:
  - Placeholder for analyzing others’ decision patterns (incomplete, marked "to be expanded").
- **Interface**:
  - `showProgramDescription`: Displays program overview.
  - `showMainMenu`: Presents options (self-report, report, description, exit).
  - Colored console output (red for errors, others via `utils.h`) using Windows API.
- **Utilities**:
  - `Utils` class (from `utils.h`): Handles header display, logging, keypress waiting, color setting.
  - `Config` (from `config.h`): Defines color constants and settings.
  - `separator`: Draws a line for visual separation.
- **Logging**:
  - Logs program start, end, and errors to a file via `Utils::logMessage`.
- **Main Program**:
  - Loops until user selects exit (4).
  - Robust input validation for menu and questionnaire responses.

## Requirements
- C++ compiler (e.g., g++, MSVC) with C++11 or later
- Windows OS (for `<windows.h>`, `SetConsoleTextAttribute`, `_getch`)
- Standard C++ libraries: `<iostream>`, `<fstream>`, `<stdio.h>`, `<ctype.h>`, `<limits>`
- Custom headers: `config.h`, `utils.h` (assumed to provide `Config::Colors`, `Utils` functions)
- Write permissions for log file
- Operating system: Windows (due to console functions)

## Setup
1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```
2. Ensure `config.h` and `utils.h` are in the project directory with required definitions (e.g., `Config::Colors`, `Utils::displayHeader`).
3. Save the provided code as `decision_analysis.cpp`.
4. Compile the program:
   ```bash
   g++ decision_analysis.cpp -o decision_analysis
   ```
5. Run the program:
   ```bash
   .\decision_analysis
   ```

## Usage
1. Compile and run the program using the steps above.
2. **Interface**:
   - Displays main menu with options:
     1. Self-Report
     2. Report (incomplete)
     3. View Program Description
     4. Exit
3. **Input**:
   - Select 1–4 for menu options.
   - For Self-Report (1):
     - Choose self-report (1) or report (2).
     - Answer 36 yes/no questions for sensory systems (y/n).
     - Select a future scenario (1–3) to weight sensory scores.
     - Answer six metaprogram questions (1/2).
     - Invalid inputs (non-y/n, non-1/2) trigger error messages.
   - Report (2) exits with a placeholder message.
4. **Output**:
   - Self-Report: Shows sensory system scores (e.g., "Visual: 8, Auditory: 2, Kinesthetic: 4") and dominant system (e.g., "Your preferred representation system is the VISUAL system").
   - Lists metaprograms (e.g., "Metaprogram 1: Internal Authority").
   - Displays tailored product descriptions based on sensory and metaprogram preferences.
   - Errors logged via `Utils::logMessage`.
5. **Actions**:
   - Press a key to return to menu after each operation.
   - Select 4 to exit.

## File Structure
- `decision_analysis.cpp`: Main C++ source file with program logic.
- `config.h`: Header for configuration (e.g., color constants, assumed).
- `utils.h`: Header for utility functions (e.g., display, logging, assumed).
- Log file: Created by `Utils::logMessage` (name not specified in code).
- `README.md`: This file, providing project documentation.

## Notes
- Windows-specific due to `<windows.h>` and `_getch`; adapt for cross-platform (e.g., ANSI colors, `system("clear")`).
- Requires `config.h` and `utils.h` with functions like `Utils::displayHeader`, `Config::Colors`.
- Report mode is incomplete; expand with similar question logic.
- Self-report summary could be enhanced with detailed analysis or file output.
- Input validation ensures robust yes/no and numeric inputs.
- Extend by completing report mode, adding data storage, or creating a GUI.
- Ensure write permissions for log file.
- No external dependencies beyond standard C++ libraries.

## Contributing
Contributions are welcome! To contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make changes and commit (`git commit -m "Add feature"`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact
For questions or feedback, open an issue on GitHub or contact the repository owner.