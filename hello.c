#include<stdio.h>
int main()
{
   // variables
   int score;
   char grade;

   // take score
   printf("Enter score(0-100): ");
   scanf("%d",&score);

   // check score is valid or not
   // score is valid if it belongs to 0-100
   if(score<0 || score>100) {
     printf("Invalid Score");
     // stop execution
     return 0;
   }
   if(score>=85 && score<=100)
     grade = 'A';

   // for score>=70and <84
   else if(score>=70)
     grade = 'B';

   // for score>=55 and <69
   else if(score>=55)
     grade = 'C';

   // for score>=40 and <54
   else if(score>=40)
     grade = 'D';

   // for score<40
   else
     grade = 'E';

   // display grade
   printf("Grade: %c\n", grade);

   return 0;
}
