#include <stdio.h>  
int main(void)  
{   
    char *ptr;// = "mishra";
  
char s[]="sai";
ptr = s;
	  printf ("%p\n",ptr);
	    
printf ("%p\n",&ptr);
    printf ("%c\n",*ptr );
    printf ("%p\n",&ptr[0]);
    return 0;
}
