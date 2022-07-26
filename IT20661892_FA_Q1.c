#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Declaring Variables
    int a,b,k;
    int not; //No of turns
    int tem,j;
    int ns=1;
    char line[1000] = "";   // Declaring Array to Store Outputs of the Formula.
    char formedline[1000] = "";     //Declaring Array Store List

    printf(" Enter No of Turns to begin : ");
    scanf("%d", &not);  //getting no of turns as a user input

    if(not >= 1){   // CheckingInputed Turn values is not 0.
            for(int x=0; x < not; x++){     //For loop to run the program for n th turns.
                printf("\n ~ Please use a space between numbers when entering ~ \n");
                printf("\n Enter Number set %d : ",ns);
                scanf("%d %d %d",&a, &b, &k);   //getting values for a,b & k(k th value).

                ns++; //increment turn count

                for(int j=0; j<k; j++){
                        tem= a + j*b;   //Storing output of the formula to 'tem' variable
                        line[k] = sprintf(line,"%d",tem); //storing 'tem' value in array
                        strcat(formedline,line);    //Concatenates the string values, 'line' to 'formedline'
                }

                printf(" %dth Digit is      : %c \n \n",k,formedline[k-1]); // Print the k th value

            }
    }

    else
        printf("\nInput Error! Programe Exit\n"); // This will prompt up If user entered invalid turn value

    return 0;
}
