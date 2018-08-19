#include "gfx.hpp"
#include <iostream>
#include <windows.h>


void gameLegend(const int attempts)
{
    std::cout << "\t\tGame legend" << std::endl;
    std::cout << "\t\tInsert any letter to guess the word" << std::endl;
    std::cout << "\t\tYou have " << attempts << " to guess the word" << std::endl;
}

void draw(const std::string& word, const std::string& solution, const int& attempts)
{
    clearScreen();
    gameLegend(attempts);

    std::cout << std::endl << "\t\t";
    for (unsigned i = 0; i < word.size(); ++i)
    {
        if (solution.find(word[i]) != -1)
            std::cout << word[i];
        else
            std::cout << "_";
    }

    std::cout << std::endl;
}

void clearScreen ()
{
    HANDLE                     hStdOut;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD                      count;
    DWORD                      cellCount;
    COORD                      homeCoords = { 0, 0 };

    hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hStdOut == INVALID_HANDLE_VALUE)
        return;

    // Get the number of cells in the current buffer
    if (!GetConsoleScreenBufferInfo(hStdOut, &csbi))
        return;

    cellCount = csbi.dwSize.X *csbi.dwSize.Y;

    // Fill the entire buffer with spaces
    if (!FillConsoleOutputCharacter(hStdOut, (TCHAR)' ', cellCount, homeCoords, &count))
        return;

    // Fill the entire buffer with the current colors and attributes
    if (!FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, cellCount, homeCoords, &count))
        return;

    // Move the cursor home
    SetConsoleCursorPosition(hStdOut, homeCoords);
}