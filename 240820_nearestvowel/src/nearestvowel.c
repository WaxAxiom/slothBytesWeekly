#include "../include/nearestvowel.h"
#include <stdlib.h>

char nearest_vowel(char letter)
{
    char nearestVowel = 'a';
    int minDistance = 27; // any number bigger than the english alphabet works
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    for (int i = 0; i < sizeof(vowels) / sizeof(char); i++)
    {
        if (abs(letter - vowels[i]) < minDistance)
        {
            minDistance = abs(letter - vowels[i]);
            nearestVowel = vowels[i];
        }
    }

    return nearestVowel;
}