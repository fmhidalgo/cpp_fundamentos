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
    std::string word;
    std::cin >> word;
    char again;

    do 
    {
        int attempts = 6;
        bool finish = false;
        std::string result{};
        again = 'n';

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

            if (attempts == 0 || checkWin(word, result))
            {
                finish = true;
            }
        }
        draw(word, result, attempts);

        if (!attempts)
            printHangman();
        else
            std::cout << std::endl << "YOU WIN!!!!!!" << std::endl;

        if (!checkWin(word, result))
        {
            std::cout << "write y to try again" << std::endl;
            std::cin >> again;
        }

    } while (again == 'y');

    system("pause");
}