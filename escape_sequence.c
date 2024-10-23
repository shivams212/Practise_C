#include<stdio.h>

/*
\\	Backslash (\)	printf("This is a backslash: \\\n");
\'	Single quote (')	printf("This is a single quote: \'\n");
\"	Double quote (")	printf("This is a double quote: \"\n");
\n	New line (line break)	printf("Hello,\nWorld!\n");
\t	Horizontal tab	printf("Column1\tColumn2\n");
\r	Carriage return (returns to the beginning of the line)	printf("Hello\rWorld\n");
\b	Backspace (moves cursor one position back)	printf("Hello\bWorld\n");
\f	Form feed (page break)	printf("Hello\fWorld\n");
\a	Alert (bell sound)	printf("Hello\aWorld\n");
\v	Vertical tab	printf("Hello\vWorld\n");
\0	Null character (used to terminate strings)	char str[] = "Hello\0World"; printf("%s\n", str); // Prints "Hello"
\xxx	Character with octal value xxx (e.g., \101 for 'A')	printf("Character: \101\n"); // Prints "A"
\xhh	Character with hexadecimal value hh (e.g., \x41 for 'A')	printf("Character: \x41\n"); // Prints "A"
*/


int main()
{
    // \r->Moves the cursor back to the beginning of the line.
    printf("Hello\rWorld\n");//output-World

    // \b->Moves the cursor one position back, deleting the last character when printed
    printf("Hello\bWorld\n");//output-HellWorld

    // \f->break line
    printf("Hello\fWorld\n"); 
    //output -Hello
    // World


    printf("Hello\aWorld\n");
    
    printf("Hello\vWorld\n");

    printf("Hello\vWorld\n");

    char str[] = "Hello\0World"; 
    printf("%s\n", str); // Prints "Hello"


    return 0;
}