#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>
#include<string.h>


int main(int argc, char * argv []){

  int versesInBible = 31102;
  int versesPerDay = versesInBible/365;
  int versesPerChapter = 26;
  int chaptersPerDay = versesPerDay/versesPerChapter;
  int temp = 0;
  printf("You will be reading %d chapters per day\n",chaptersPerDay);
  // Loops through the days of the year
  for(int i = 1; i < 366; i++){
      if(i <= 31)
        printf("January %d\n",i);
      if(i > 31 && i <= 59){
        temp = i;
        temp -= 31;
        printf("February %d\n", temp);
      }
      if(i > 59 && i <= 90){
        temp = i;
        temp -= 59;
        printf("March %d\n", temp);
      }
      if(i > 90 && i <= 120){
        temp = i;
        temp -= 90;
        printf("April %d\n", temp);
      }
      if(i > 121 && i <= 152){
        temp = i;
        temp -= 121;
        printf("May %d\n", temp);
      }
      if(i > 152 && i <= 182){
        temp = i;
        temp -= 152;
        printf("June %d\n",temp);
      }
      if(i > 181 && i <= 212){
        temp = i;
        temp -= 181;
        printf("July %d\n", temp);
      }
      if(i > 212 && i <= 243){
        temp = i;
        temp -= 212;
        printf("August %d\n", temp);
      }
     if(i > 243 && i <= 273){
       temp = i;
       temp -= 243;
       printf("September %d\n",temp);
     }
     if(i > 273 && i <= 304){
       temp = i;
       temp -= 273;
       printf("October %d\n",temp);
     }
     if(i > 304 && i <= 334){
       temp = i;
       temp -= 304;
       printf("November %d\n",temp);
     }
     if(i > 334 && i <= 365){
       temp = i;
       temp -= 334;
       printf("December %d\n",temp);
     }
    }



      return EXIT_SUCCESS;
  }
