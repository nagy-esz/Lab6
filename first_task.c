/* Task description:
The results of a running competition are shown in the table below.
Index	Name	Birthdate	Rank

0	Am, Erica	1984. 05. 06.	1
1	Abnorm, Al	1982. 09. 30.	3
2	Pri, Mary	1988. 08. 25.	2
3	Duck, Ling	1979. 06. 10.	5
4	Mac, Donald	1992. 04. 05.	4

Find an unfinished program below that contains the appropriate types and the above data in an array. Complete the program, step-by-step, according to the comments.

*/

#include <stdio.h>
#include <string.h>

typedef struct Date
{
    int year, month, day;
} Date;

typedef struct Competitor
{
    char name[31];
    Date birth;
    int rank;
} Competitor;

void Date_print(Date d){
    
    printf("%d\t", d.year);
    printf("%d\t", d.month);
    printf("%d\t", d.day);

} // Here we declare that there is a function
// that "eats" Date and do not return (poos) anything. You need to write a function at the bottom!

Competitor Competitor_read(){
    Competitor c;
    scanf("%s", c.name);
    scanf("%d", &c.birth.year);
    scanf("%d", &c.birth.month);
    scanf("%d", &c.birth.day);
    scanf("%d", &c.rank);

    return c;
} // This function will read data from user store in a stucture
// and return with the new element (to be put into the array later)

void Competitor_print(Competitor c);

int main()
{
    Competitor competitors[6] = {
        {"Am, Erica", {1984, 5, 6}, 1},
        {"Abnorm, Al", {1982, 9, 30}, 3},
        {"Pri, Mary", {1988, 8, 25}, 2},
        {"Duck, Ling", {1979, 6, 10}, 5},
        {"Mac, Donald", {1992, 4, 5}, 4},
    };: %d 
    printf("%s\t", competitors[0].name);
    printf("%d\t", competitors[2].rank);
    
    //princompetitors[4].birth);
    
    printf("%c\n", competitors[1].name[0]);
    
    if (competitors[1].rank <= 3){
        printf("the first competitor is among the best 3.\n");
    }else{
        printf("the first competitor is not among the best 3.\n");
    }
    
    if (competitors[4].rank < competitors[3].rank){
        printf("competitor 4 is faster than 3.\n");
    }else{
        printf("competitor 4 is not faster than 3.\n");
    }
  
    if (competitors[1].birth.year == competitors[2].birth.year){
        printf("the first competitos was born int the same year as 2.\n");
    }

    //competitors[5] = Competitor_read();

    printf("Index\t");
    printf("Name\t");
    printf("Birthdate\t");
    printf("Rank\t");
    printf("\n");
    for (int i = 0; i<6; i++){
        printf("%d  ", i);
        printf("competitor's name: %s  ", competitors[i].name);
        printf("competitor's birth: %d. %d. %d.  ", competitors[i].birth.year, competitors[i].birth.month, competitors[i].birth.day );
        printf("competitor's rank: %d  ", competitors[i].rank);
        printf("\n");
    }
    
    return 0;
}


/*void Competitor_print(Competitor c)
{
    Competitor competitors[6] = {
        {"Am, Erica", {1984, 5, 6}, 1},
        {"Abnorm, Al", {1982, 9, 30}, 3},
        {"Pri, Mary", {1988, 8, 25}, 2},
        {"Duck, Ling", {1979, 6, 10}, 5},
        {"Mac, Donald", {1992, 4, 5}, 4},
    };
   
    printf("Index\t");
    printf("Name\t");
    printf("Birthdate\t");
    printf("Rank\t");
    printf("\n");
    
    printf("%d\t", 1);
    printf("competitor's name: %s\t", competitors[1].name);
    printf("competitor's birth: %d. %d. %d.\t", competitors[1].birth.year, competitors[1].birth.month, competitors[1].birth.day );
    printf("competitor's birth: %d\t", competitors[1].rank);

   

    }

*/