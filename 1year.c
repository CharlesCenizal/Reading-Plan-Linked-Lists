#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>
#include<string.h>
// private types -----------------
/*
typedef struct bibleBook{
  char * bookName;
  int * chapters;
  struct bibleBook* next;
}bibleBook;

//bible book
typedef bibleBook* Book;

// newBook()
// constructor of the Book type
Book newBook(char*name,int* chaps){
  Book B = malloc(sizeof(bibleBook));
  assert(B != NULL);
  B->bookName = name;
  B->chapters = chaps;
  B->next = NULL;
  return(B);
}

// Bible Object
typedef struct BibleObj{
  Book head;
  int numItems;
} BibleObj;

Bible newBible(void){
  Bible B = malloc(sizeof(BibleObj)){
    assert(B != NULL);
    B->head = NULL;
    B->numItems = 0;
    return B;
  }
}

void insert(Bible B, char *name, int*chapters){
  // Inserting Genesis
  if(B->numItems == 0){
    Book Bib = newBook(name,chapters);
    Bib->next = B->head;
    B->head = Bib;
  }
  else{
    Book Bib = newBook(name,chapters);
    Book position = B->head;
    while(position->next != NULL){
      position = position->next;
    }
    position->next = Bib;
  }
  B->numItems++;
}
*/

// Main Method
int main(int argc, char * argv []){

  int versesInBible = 31102;
  int versesPerDay = versesInBible/365;
  int versesPerChapter = 26;
  int chaptersPerDay = versesPerDay/versesPerChapter;
  int temp = 0;

  char * name;
  char * chapters;

  char * books[] = {"Genesis","Exodus","Leviticus","Numbers","Deuteronomy","Joshua",
                    "Judges, Ruth","1 Samuel","2 Samuel","1 Kings","2 Kings","1 Chronicles",
                    "2 Chronicles","Ezra","Nehemiah","Esther","Job","Psalm","Proverbs",
                    "Ecclesiates","Song of Solomon","Isaiah","Jeremiah","Lamentations",
                    "Ezekiel","Daniel","Hosea","Joel","Amos","Obadiah","Jonah","Micah",
                    "Nahum","Habakkuk","Zephaniah","Haggai","Zechariah","Malachi","Matthew",
                    "Mark", "Luke","John","Acts","Romans","1 Corinthians","2 Corinthians",
                    "Galatians","Ephesians","Philipians","Colossians","1 Thessalonians",
                    "2 Thessalonians","1 Timothy","2 Timothy","Titus","Philemon","Hebrews",
                    "James","1 Peter","2 Peter","1 John","2 John","3 John","Jude","Revelation"

                    }


  printf("You will be reading %d chapters per day<br />\n",chaptersPerDay);
  // Loops through the days of the year
  for(int i = 1; i < 366; i++){
      if(i <= 31)
        printf("January %d<br />\n",i);
      if(i > 31 && i <= 59){
        temp = i;
        temp -= 31;
        printf("February %d<br />\n", temp);
      }
      if(i > 59 && i <= 90){
        temp = i;
        temp -= 59;
        printf("March %d<br />\n", temp);
      }
      if(i > 90 && i <= 120){
        temp = i;
        temp -= 90;
        printf("April %d<br />\n", temp);
      }
      if(i > 121 && i <= 152){
        temp = i;
        temp -= 121;
        printf("May %d<br />\n", temp);
      }
      if(i > 152 && i <= 182){
        temp = i;
        temp -= 152;
        printf("June %d<br />\n",temp);
      }
      if(i > 181 && i <= 212){
        temp = i;
        temp -= 181;
        printf("July %d<br />\n", temp);
      }
      if(i > 212 && i <= 243){
        temp = i;
        temp -= 212;
        printf("August %d<br />\n", temp);
      }
     if(i > 243 && i <= 273){
       temp = i;
       temp -= 243;
       printf("September %d<br />\n",temp);
     }
     if(i > 273 && i <= 304){
       temp = i;
       temp -= 273;
       printf("October %d<br />\n",temp);
     }
     if(i > 304 && i <= 334){
       temp = i;
       temp -= 304;
       printf("November %d<br />\n",temp);
     }
     if(i > 334 && i <= 365){
       temp = i;
       temp -= 334;
       printf("December %d<br />\n",temp);
     }
    }



      return EXIT_SUCCESS;
  }
