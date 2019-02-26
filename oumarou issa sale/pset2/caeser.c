 //oumarou issa sale
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
   int main(int argc, string argv[])

{
    if (argc != 2)

    {
       printf("sorry,try again: \n");

       return 1;
    }

       int w= atoi(argv[1]);

       string s = get_string("plaintext: ");

       printf("cyphertext: ");

       for (int i = 0, n = strlen(s) ; i < n; i++)

    {
       if (s[i] >= 'a' && s[i] <= 'z')

       {
            // affichage(lowercase) avec le key
            printf("%c", (((s[i] - 'a') + w) % 26) + 'a');
        }
           // si uppercase A and C

        else if (s[i] >= 'A' && s[i] <= 'Z')

        {
            // affichage(uppercase) avec le key
            printf("%c", (((s[i] - 'A') + w) % 26) + 'A');

        }

        else
    {
            printf("%c", s[i]);

   }

    }

    printf("\n");

    return 0;

}