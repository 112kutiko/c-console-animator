#ifndef DRAW_H_INCLUDED
#define DRAW_H_INCLUDED
#include<windows.h>
#include <string>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;
class WindowsSettings
{
public:

    WindowsSettings() {}
    ~WindowsSettings() {}
    void cursorHider(){
       // ShowConsoleCursor(false);
    }
    void setConsoleTitle(std::string title){

        SetConsoleTitle(title.c_str());
    }
    void cleaner(){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);}
};

struct juosta{
 char maps[32][32];
};
class painter{
public:
    std::vector<juosta> film;
void readFromFile(std::string filePath)
{
    std::cout << "start read data" << std::endl;
    std::ifstream file(filePath);
    if (!file.is_open())
    {
        std::cout << "Error opening file!" << std::endl;
        return;
    }
    char ch;
    int i = 0;
    int j = 0;
    juosta currentArray;
    while (file.get(ch))
    {
        if (i == 32)
        {
            film.push_back(currentArray);
            i = 0;
            j = 0;
            juosta currentArray;
        }

        if (ch == '\n')
        {
            i++;
            j = 0;
        }
        else
        {
                currentArray.maps[i][j] = ch;

            j++;
        }
    } }

void print()
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    const int bufferWidth = 32;
    const int bufferHeight = 32;
    CHAR_INFO buffer[bufferWidth][bufferHeight] = {};
    SMALL_RECT windowRect = {0, 0, bufferWidth - 1, bufferHeight - 1};
    COORD bufferSize = {bufferWidth, bufferHeight};
    for (const juosta& j : film)
    {
        for (int i = 0; i < 32; i++)
        {
            for (int k = 0; k < 32; k++)
            {
                buffer[i][k].Char.AsciiChar = j.maps[i][k];
                buffer[i][k].Attributes = brush(j.maps[i][k]);
            }
        }
        WriteConsoleOutput(console, (CHAR_INFO*)buffer, bufferSize, {0, 0}, &windowRect);
        Sleep(250);
    }
}
WORD brush(char color)
{
    // Return the console text attribute for the given color
    switch (color)
    {
        case '0':
            return 0;
        case '1':
            return 17;
        case '2':
            return 34;
        case '3':
            return 51;
        case '4':
            return 68;
        case '5':
            return 85;
        case '6':
            return 102;
        case '7':
            return 119;
        case '8':
            return 136;
        case '9':
            return 153;
        case 'a':
            return 170;
        case 'b':
            return 187;
        case 'c':
            return 204;
        case 'd':
            return 221;
        case 'e':
            return 238;
        case 'f':
            return 255;
        default:
            return 7;
    }
}
};
#endif // DRAW_H_INCLUDED
