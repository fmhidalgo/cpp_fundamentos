#include "gfx.hpp"
#include "ui.hpp"
#include <iostream>
#include <string>

void printHangman()
{
    std::cout << std::endl << "     _________" << std::endl;
    std::cout << "     |       |" << std::endl;
    std::cout << "     _       |" << std::endl;
    std::cout << "    |_|      |" << std::endl;
    std::cout << "     |       |" << std::endl;
    std::cout << "    ---      |" << std::endl;
    std::cout << "     |       |" << std::endl;
    std::cout << "    / \\      |" << std::endl;
    std::cout << "            /|" << std::endl;
    std::cout << "    _______/_|" << std::endl;
}

bool checkWin(const std::string& word, const std::string& solution)
{
    for (unsigned i = 0; i < word.size(); ++i)
    {
        if (solution.find(word[i]) == std::string::npos)
            return false;
    }

    return true;
}

int main()
{
    std::string word("mistery");
    int attempts = 6;
    bool finish = false;
    std::string result{};

    while (!finish)
    {
        draw(word, result, attempts);
        char key = getKey();

        if (result.find(key) == std::string::npos && word.find(key) != std::string::npos)
        {
            result += key;
        }
        else
        {
            --attempts;
        }

        if (attempts == 0)
        {
            printHangman();
            finish = true;
        }
        else
        {
            finish = checkWin(word, result);
        }
    }
    draw(word, result, attempts);

    std::cout << std::endl << "YOU WIN!!!!!!" << std::endl;

    getchar();
}