#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main()
{
const char *consonants = "ÉÖÓÊÅÍÃØÙÇÕÚÔÛÂÀÏĞÎËÄÆİß×ÑÌÈÒÜÁŞ¨éöóêåíãøùçõúôûâàïğîëäæıÿ÷ñìèòüáş¸";
char string[] = "ß İòî ñäåëàë ÓÕÀÕÕÀÕÀÕÀÕÀÕÕÀ.";
int count;

const char *first1, *last1, *first2, *last2;

first1 = string;
last1 = string + strlen( string );
first2 = consonants;
last2 = consonants + strlen( consonants );

count = 0;
for (; first1 != last1; ++first1 )
{
const char *next2 = first2;
for (; next2 != last2; ++next2 )
{
if ( toupper( *first1 ) == *next2 ) break;
}
if ( next2 != last2 ) ++count;
}

printf( "count = %d\n", count );

return 0;
}
