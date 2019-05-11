// Oumarou Issa Sale

//  the  Helper functions for the music 
     #include "helpers.h"
     #include <cs50.h>
     #include <string.h>
     #include <math.h>


 // here is the Convertion of a fraction formatted as X/Y to eighths
 int duration(string fraction)
 {
      int numerator = fraction[0] - '0';
     int denominator = fraction[2] - '0';

       return numerator * (8 / denominator);
 }

   // Calculate the frequency (in Hz) of a note
  int frequency(string note)
 {
      int octave = note[strlen(note) - 1] - '0';

     // the Base frequency of A4 is 440hz
    double freq = 440.0;

     // Adjusting  for letter
    switch (note[0])
    {
           case 'C':
            freq /= pow(2.0, 9.0 / 12.0);
            break;

          case 'D':
            freq /= pow(2.0, 7.0 / 12.0);
            break;

           case 'E':
            freq /= pow(2.0, 5.0 / 12.0);
            break;

         case 'F':
            freq /= pow(2.0, 4.0 / 12.0);
            break;

          case 'G':
            freq /= pow(2.0, 2.0 / 12.0);
            break;

        case 'A':
            break;
        case 'B':
            freq *= pow(2.0, 2.0 / 12.0);
            break;
    }

     // Adjusting for octave
       if (octave > 4)
    {
        freq *= pow(2.0, octave - 4);
    }
      else if (octave < 4)
      {
        freq /= pow(2.0, 4 - octave);
    }

    // Adjusting for accidental
      if (note[1] == 'b')
    {
        freq /= pow(2.0, 1.0 / 12.0);
    }
    else if (note[1] == '#')
    {
        freq *= pow(2.0, 1.0 / 12.0);
    }

    return round(freq);
}

// this part is to  Determine if a string represents a rest
bool is_rest(string s)
{
    return strlen(s) == 0;
}