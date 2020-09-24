#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{

int key = atoi(argv[1]);


if (argc != 2)

{
     printf("Usage: ./caesar key\n");
     return 1;
}

string plain = get_string("Plaintext: ");
string cipher = plain;
string toupper_l(string plain);


// If key = 1, the plain text prints the characters of the inputted text in the ascii (32 to 64) -1
printf("Ciphertext: ");
for (int i = 0, n = strlen(plain); i < n; i++)

     if (isalpha(plain[i]))
     {
          if (islower(plain[i]))
          printf("%c", (plain[i] - 'a' + key) % 26 + 'a');
          
          else {
               if (isupper(plain[i]))
               printf("%c", (plain[i] - 'A' + key) % 26 + 'A');
               }
          
     }
     else
     {
          printf("%c", plain[i]);
     
     
          // - (key) in the alphabet
          
     
     
     
     }
     
     printf("\n");



}