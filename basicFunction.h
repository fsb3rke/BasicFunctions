#pragma once

#include "stdafx.h"

class basics
{
private:
    std::string smilEemojiType1 = ":D";
    std::string smilEemojiType2 = ":)";
    std::string normalGetchMessage = "Press any key to close the program...";
public:
    void EndLine(int lineNumber);
    void SpaceLine(std::string spaceWidht);
    void EmojiSmile(int emojiType, bool isCreatingNewLine);
    void CreateAnim(std::string Animpart1, std::string Animpart2, int DurationTime);
    void getchString(std::string message, bool isUsingNormalMessage, bool isUsingEndLine, int EndLineNumber1);
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

void basics::CreateAnim(std::string Animpart1, std::string Animpart2, int DurationTime) // Tum harfleri tek tek yazılacak hale gelecektir.
{
    std::cout << Animpart1;
    Sleep(DurationTime * 1000);
    std::cout << Animpart2;
    Sleep(DurationTime / 1000);
}

void basics::getchString(std::string message, bool isUsingNormalMessage, bool isUsingEndLine, int EndLineNumber1)
{
    if (isUsingNormalMessage)
    {
        if (isUsingEndLine)
        {
            std::cout << normalGetchMessage;
            EndLine(EndLineNumber1);
            getch();
        }
        else if (!isUsingEndLine)
        {
            std::cout << message;
            getch();
        }
    }
    else if (!isUsingNormalMessage) 
    {
        if (isUsingEndLine)
        {
            std::cout << message;
            EndLine(EndLineNumber1);
            getch();
        }
        else if (!isUsingEndLine)
        {
            std::cout << message;
            getch();
        }
    }
}