#include <stdio.h>
 void countCharacters(char* string)
{
int charCount[256] = {0}; // Assuming ASCII characters
 for (int i = 0; string[i] != '\0'; i++)
 {
charCount[(int)string[i]]++;
 }
for (int i = 0; i < 256; i++)
 {
if (charCount[i] > 0)
 {
 printf("%c=%d\n", (char)i, charCount[i]);
 }
}
}
 int main()
{
char inputString[] = "lasya"; countCharacters(inputString);
return 0;
}
