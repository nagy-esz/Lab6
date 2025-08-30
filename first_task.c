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

typedef struct Date {//Create a stuct definition, not an instance, it is a type. With typedef we give it a new name (struct Date-->Date 
    int year, month, day;
} Date;

typedef struct Competitor {
    char name[31];
    Date birth;  //Here we use our fresh type Date! 
    int rank;
} Competitor;

void Date_print(Date d); //Here we declare that there is a function that "eats" Date and do not return (poos) anything. You need to write a function later

void Competitor_print(Competitor c);

int main() {
    Competitor competitors[5] = {  //It is an array of Competitor, like array of int! Please note that the individual competitors are not variables, there are no variable name for them, these exists only in the array!
        { "Am, Erica", {1984, 5, 6}, 1 },
        { "Abnorm, Al", {1982, 9, 30}, 3 },
        { "Pri, Mary", {1988, 8, 25}, 2 },
        { "Duck, Ling", {1979, 6, 10}, 5 },
        { "Mac, Donald", {1992, 4, 5}, 4 },
    };
    /* name of competitor 0 - printf %s */
    /* rank of competitor 2 */
    /* birth date of competitor 4, use the given function */
    /* the first letter of the name of competitor 1 (a string is an array of characters) */
    /* is competitor 1 among the best three? yes/no, may use ?: operator */
    /* is competitor 4 faster than competitor 3? */
    /* was competitor 1 born in the same year as competitor 2? */
    /* complete the Competitor_print() function,
     * then print all data of competitor 1 */
    /* at last print all data of all competitors. */

    return 0;
}
