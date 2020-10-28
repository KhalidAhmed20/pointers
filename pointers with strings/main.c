#include <stdio.h>
#include <stdlib.h>

void Display_String(char * str); // prototype of the function

int main()
{
    char *p_str = "C Programming";
    printf("string is: %s\n" , p_str); //display string value
    p_str = "Embedded software";
    printf("string is: %s\n" , p_str); //display the new string value
    Display_String(p_str);
    return 0;
}

/* Function to print string with pointers */
void Display_String(char * str)
{
    printf("string is: ");
	while(*str != '\0')
	{
		printf("%c",*str);
		str++;
	}
	printf("\n");
}
