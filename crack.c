  // oumarou issa sale //
  #define _XOPEN_SOURCE
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <unistd.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }


       const int letters_count = 53;


       string theletters = "\0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
      string hash = argv[1];

    char salt[3];
    memcpy(salt, hash, 2);
    salt[2] = '\0';

      char key_argument[6] = "\0\0\0\0\0\0";
    for (int cinquieme = 0; cinquieme< letters_count; cinquieme++)
    {
        for (int quatrieme = 0; quatrieme < letters_count; quatrieme++)
        {
            for (int troisieme = 0; troisieme < letters_count; troisieme++)
            {
                for (int deuxieme= 0; deuxieme < letters_count; deuxieme++)
                {
                    for (int premier = 1; premier < letters_count; premier++)
                    {
                        key_argument[0] = theletters[premier];
                        key_argument[1] = theletters[deuxieme];
                        key_argument[2] = theletters[troisieme];
                        key_argument[3] = theletters[quatrieme];
                        key_argument[4] = theletters[cinquieme];


                        if (strcmp(crypt(key_argument, salt), hash) == 0)
                        {
                            printf("%s\n", key_argument);
                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("the Password is not possible to be cracked:");


    return 2;
}