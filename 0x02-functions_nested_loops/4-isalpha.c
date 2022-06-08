#include "main.h"

/**
* _isalpha - chekcs for alphabetical letters
* @c: a character argument
* return: returns 0 and 1 depending on condition
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
