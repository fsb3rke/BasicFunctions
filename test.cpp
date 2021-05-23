#include "basicFunction.h"

basics basic;

int main()
{
    basic.EndLine(2);
    basic.EmojiSmile(1, false);
    basic.SpaceLine("     ");
    basic.EmojiSmile(2, false);
    basic.EndLine(2);
    basic.EmojiSmile(1, true);
    basic.EmojiSmile(2, true);
    basic.EndLine(2);
    basic.CreateAnim("||||\n||||", "----\n----", 2);
    basic.EndLine(2);
    basic.getchString("", true, true, 2);

    return 0;
}