#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>
#include<string.h>
// private types -----------------
// NodeObj
typedef struct bibleBook{
   char* name;
   int chapters;
   struct bibleBook* next;
} bibleBook;

// Node //Book
// Defines The 'nodeObj' or bibleBook
// to be Book so we dont have to type
// struct bibleBook all the time
typedef bibleBook* Book;

// newNode()
// constructor of the Node type
Book newBook(char* name, int chapters) {
   Book N = malloc(sizeof(bibleBook));
   assert(N!=NULL);
   N->name = name;
   N->chapters = chapters;
   N->next = NULL;
   return(N);
}
typedef struct BibleObj{
  Book head;
  int numItems;
}BibleObj;

//Bible
// defines BibleObj to be BibleObj
// So that we dont have to type
// struct all the time
typedef struct BibleObj* Bible;

Bible newBible(void){
  Bible B = malloc(sizeof(BibleObj));
  assert(B != NULL);
  B->head = NULL;
  B->numItems = 0;
  return B;


}

// n for name
// c for chapter
void insert(Bible B, char* n,int c){
  if(B->numItems == 0){
    Book Bib = newBook(n,c);
    Bib->next = B->head;
    B->head = Bib;
  }else{
    Book Bib = newBook(n,c);
    Book position = B->head;
    while(position->next != NULL){
      position = position -> next;
    }
    position->next = Bib;
  }
  B->numItems++;
}

void printBible(Bible B){
  Book Bib = B->head;
  while(Bib != NULL){
    printf("Book %s has %d Chapters\n",Bib->name,Bib->chapters);
    Bib = Bib->next;
  }
}
/*
void threeChaptersADay(Bible B){
  Book Bib = B->head;
  if(Bib->next == NULL){
    return;
  }
  if(Bib->chapters == 0){
    Bib = Bib->next;
  }


}
*/

int main(){

  int versesInBible = 31102;
  int versesPerDay = versesInBible/365;
  int versesPerChapter = 26;
  int chaptersPerDay = versesPerDay/versesPerChapter;
  int temp = 0;


  char * books[] = {"Genesis","Exodus","Leviticus","Numbers","Deuteronomy","Joshua",
                    "Judges", "Ruth","1 Samuel","2 Samuel","1 Kings","2 Kings","1 Chronicles",
                    "2 Chronicles","Ezra","Nehemiah","Esther","Job","Psalm","Proverbs",
                    "Ecclesiates","Song of Solomon","Isaiah","Jeremiah","Lamentations",
                    "Ezekiel","Daniel","Hosea","Joel","Amos","Obadiah","Jonah","Micah",
                    "Nahum","Habakkuk","Zephaniah","Haggai","Zechariah","Malachi","Matthew",
                    "Mark", "Luke","John","Acts","Romans","1 Corinthians","2 Corinthians",
                    "Galatians","Ephesians","Philipians","Colossians","1 Thessalonians",
                    "2 Thessalonians","1 Timothy","2 Timothy","Titus","Philemon","Hebrews",
                    "James","1 Peter","2 Peter","1 John","2 John","3 John","Jude","Revelation"


                  };
  int chaptersPerBook [] = {50,40,27,36,34,24,21,4,31,24,22,25,29,36,10,13,10,42,150,
                             31,12,8,66,52,5,48,12,14,3,9,1,4,7,3,3,3,2,14,4,28,16,24,
                            21,28,16,16,13,6,6,4,4,5,3,6,4,3,1,13,5,5,3,5,1,1,1,22};

//n1 = createNewBook("Genesis",50);


Book test = newBook("John",28);
Book test2 = newBook("Acts",3232);
test->next=test2;
printf("%d\n",test->next->chapters);
printf("hello world\n");

Bible ESV = newBible();
char* n;
int c;

for(int i = 0; i < 66; i ++){
  insert(ESV,books[i],chaptersPerBook[i]);
}

printBible(ESV);


// Checking to see I entered the correct books and chapters before i add them to my
// linked list
/*
  /
  int s = sizeof(books)/sizeof(books[0]);
  int s1 = sizeof(chaptersPerBook)/sizeof(chaptersPerBook[0]);

  printf("%d\n",s1);
  printf("%d\n",s);

  for(int i = 0; i < s; i++){
    temp = i+1;
    printf("Book number:%d - %s has %d chapters\n",temp,books[i],chaptersPerBook[i]);
  }
*/

// Bible Linked list

/*
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
*/


      return EXIT_SUCCESS;
  }
