/* 
* This example is copied from
* https://www.thegeekstuff.com/2013/06/buffer-overflow/
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char buff[15];
    int pass = 0;

    printf("\nI understand I will never write a program like this\n");
    
    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "thesecretpassword"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return(0);
}
