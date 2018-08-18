#pragma once

#include <windows.h>
#include <string>

#define WIDTH 30

void gameLegend(const int attempts);
void draw (const std::string& word, const std::string& solution, const int& attempts);
void clearScreen();