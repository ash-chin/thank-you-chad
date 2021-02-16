#include<stdio.h>
#include"students.h"

#define movenext printf("Next? (Press Enter)"); scanf("%c", &buf);

int main(int argc, char** argv) {

    char buf;
    printf("\n");
    printf("To Chad Wood, from your CIS 330 class:\n\n");

    /*	ADD THE CALL TO YOUR SPECIAL PRINT FUNCTION HERE
	IT SHOULD FOLLOW THIS CONVENTION:

	<FIRSTNAME_LASTNAME>();

	To set up this function, add the function name
	(following the above convention) to the students.h
	file, and then create that same function in the
	students.c file (where you will do your printing
	for your thank you note). Finally, just call
	the function by adding it here to main.c!

	After you call your function, make sure to type
	'movenext' so that chad is prompted to press enter
	before moving on to the next message.
    */

    troy_clendenen();
    movenext
      
    raul_patel();
    movenext

    justin_spidell();
    movenext

    return 0;
}
