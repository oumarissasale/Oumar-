 // oumarou issa sale
#include <stdio.h>
#include <cs50.h>
 int main(void)
   {
      long long i, wa, wb;
      int wc, wd, sum;
      do

       {
         i=get_long_long("please,enter the number of your credit card: ");
       }
       while (i<0);
       for (wa=i, wc=0; wa>0; wa/=100)
        wc+= wa%10;
       for(wb=i/10, wd=0; wb>0; wb/=100)
       {
         if (2* (wb%10)>9)
         {
             wd+=(2*(wb%10))/10;
             wd+=(2*(wb%10))%10;
         }
  else
   wd+=2 *(wb%10);
       }
    sum=wc+wd;
 if (sum%10==0)
 {
 if ((i >=340000000000000 && i<350000000000000) || (i>=370000000000000 && i<380000000000000))
  printf("card of American Express\n");
  else if (i>=510000000000000 && i<560000000000000)
printf(" card of Mastercard\n");
 else if ((i>=4000000000000 && i<5000000000000) || (i>=4000000000000000 && i<5000000000000000))
 printf (" card of Visa\n");
 else
 printf(" the card is invalid \n");
 }

}