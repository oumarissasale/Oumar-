 // Oumarou issa Sale  
// Printing frequencies of and outputs WAV file with all notes in an octave

  #include <cs50.h>
  #include <stdio.h>
  #include <string.h>
  #include "helpers.h"
  #include "wav.h"

  // a Notes in an octave
  const string NOTES[] = {"C", "C#", "D", "D#", "E", "F",
                        "F#", "G", "G#", "A", "A#", "B"
                       };

   // a Default octave
  #define OCTAVE 4

  int main(int argc, string argv[])
{
    // 
       int octave = OCTAVE;
       if (argc == 2)
    {
        octave = atoi(argv[1]);
        if (octave < 0 || octave > 8)
        {
            fprintf(stderr, " octave is invalid\n");
            return 1;
        }
    }
      else if (argc > 2)
    {
        fprintf(stderr, "Usage: notes [OCTAVE]\n");
        return 1;
    }

    // here is to Open the file for writing
    song s = song_open("notes.wav");

    // Adding each semitone
    for (int i = 0, n = sizeof(NOTES) / sizeof(string); i < n; i++)
    {
        
        char note[4];
        sprintf(note, "%s%i", NOTES[i], octave);

        // Calculating the frequency of note
        int f = frequency(note);

        // Print note to screen
        printf("%3s: %i\n", note, f);

        // Write (eighth) note to file
        note_write(s, f, 1);
    }

    // Close file
    song_close(s);
}