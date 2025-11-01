#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
    clsString String1, String2("Fekry");

    String1.Value = "Mohamed Ibrahim";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    // ---- Count & Analysis -----
    cout << "Number of words: " << String1.CountWords() << endl;
    cout << "Number of words: " << String1.CountWords("Mohamed") << endl;
    cout << "Number of words: " << String1.CountWords("Mohamed Ibrahim") << endl;
    cout << "Number of words: " << clsString::CountWords("Mohamed Ibrahim Mohamed") << endl;
    cout << "Number of words: " << clsString::CountWords("Mohamed Ibrahim Mohamed Fekry") << endl;

    clsString String3("Hi, how are you?");
    cout << "\nString3 = " << String3.Value << endl;
    cout << "String Length = " << String3.Length() << endl;

    cout << "\nCapital Letters count : " << clsString::CountLetters("Mohamed Ibrahim Mohamed", clsString::CapitalLetters) << endl;

    String3.Value = "Welcome to Egypt";
    cout << "\nString3 = " << String3.Value << endl;
    cout << "Capital Letters count : " << String3.CountCapitalLetters() << endl;
    cout << "Small Letters count : " << String3.CountSmallLetters() << endl;
    cout << "Vowels count : " << String3.CountVowels() << endl;
    cout << "Letter E count : " << String3.CountSpecificLetter('E', false) << endl;
    cout << "Is letter (u) vowel? " << clsString::IsVowel('u') << endl;

    // ---- Case & Formatting ----
    String3.Value = "hi how are you?";

    String3.UpperFirstLetterOfEachWord();
    cout << "\nUpperFirstLetterOfEachWord: " << String3.Value << endl;

    String3.LowerFirstLetterOfEachWord();
    cout << "LowerFirstLetterOfEachWord: " << String3.Value << endl;

    String3.UpperAllString();
    cout << "UpperAllString: " << String3.Value << endl;

    String3.LowerAllString();
    cout << "LowerAllString: " << String3.Value << endl;

    cout << "After inverting (a): " << clsString::InvertLetterCase('a') << endl;

    String3.Value = "AbCdEfg";
    String3.InvertAllLettersCase();
    cout << "InvertAllLettersCase: " << String3.Value << endl;

    String3.InvertAllLettersCase();
    cout << "InvertAllLettersCase again: " << String3.Value << endl;

    // ---- Trimming ----
    String3.Value = "    Fekry     ";
    cout << "\nOriginal String: [" << String3.Value << "]" << endl;

    String3.Value = "    Fekry     ";
    String3.TrimLeft();
    cout << "TrimLeft: [" << String3.Value << "]" << endl;

    String3.Value = "    Fekry     ";
    String3.TrimRight();
    cout << "TrimRight: [" << String3.Value << "]" << endl;

    String3.Value = "    Fekry     ";
    String3.Trim();
    cout << "Trim: [" << String3.Value << "]" << endl;

    // ---- Split & Join ----
    String3.Value = "Welcome to Egypt";

    vector<string> vString = String3.Split(" ");

    cout << "\nSplit Tokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }

    vector<string> vString1 = { "Mohammed", "Ibrahim", "Mohamed", "Fekry" };
    cout << "\nJoinString (vector): " << clsString::JoinString(vString1, " ") << endl;

    string arrString[] = { "Mohammed", "Ibrahim", "Mohamed", "Fekry" };
    cout << "JoinString (array): " << clsString::JoinString(arrString, 4, " ") << endl;

    // ---- Reverse / Replace / Punctuation ----
    String3.Value = "Mohamed Ibrahim Mohamed";
    String3.ReverseWordsInString();
    cout << "\nReverseWordsInString: " << String3.Value << endl;

    String3.Value = "Mohamed Ibrahim Mohamed";
    String3.ReplaceWord("Mohamed", "Fekry");
    cout << "ReplaceWord: " << String3.Value << endl;

    String3.Value = "This is: a sample text, with punctuations.";
    cout << "\nOriginal: " << String3.Value << endl;

    String3.RemovePunctuations();
    cout << "RemovePunctuations: " << String3.Value << endl;

    system("pause>0");

    return 0;
}
