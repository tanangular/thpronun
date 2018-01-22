// sylcomp.inl - Thai syllable fundamental components
// Author: Theppitak Karoonboonyanan <theppitak@gmail.com>
// Created: 2018-01-15

#include <cctype>

inline bool
IsShortVowel (EVowel v)
{
    return std::islower (static_cast<int> (v));
}

inline bool
IsDeadEndConstClass (EEndConstClass c)
{
    return EEndConstClass::KOK == c ||
           EEndConstClass::KOT == c ||
           EEndConstClass::KOP == c;
}

