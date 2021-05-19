#pragma once

#include "stdafx.h"

class basics
{
private:
    std::string smilEemojiType1 = ":D";
    std::string smilEemojiType2 = ":)";
public:
    void EndLine(int lineNumber);
    void SpaceLine(std::string spaceWidht);
    void EmojiSmile(int emojiType, bool isCreatingNewLine);
};

void basics::EndLine(int lineNumber)
{
    for (int i = 0; i <= lineNumber; i++)
    {
        std::cout << std::endl;
    }
}

void basics::SpaceLine(std::string spaceWidht)
{
    std::cout << spaceWidht;
}

void basics::EmojiSmile(int emojiType, bool isCreatingNewLine)
{
    if (emojiType == 1)
    {
        if (isCreatingNewLine == true)
        {
            std::cout << smilEemojiType1 << std::endl;
        }
        else if (isCreatingNewLine == false)
        {
            std::cout << smilEemojiType1;
        }
    }
    else if (emojiType == 2)
    {
        if (isCreatingNewLine == true)
        {
            std::cout << smilEemojiType2 << std::endl;
        }
        else if (isCreatingNewLine == false)
        {
            std::cout << smilEemojiType2;
        }
    }
    else // else if (emojiType != 1 || emojiType != 2)
    {
        EndLine(2);
        std::cout << "I cant find" << std::endl;
        EndLine(2);
    }
}