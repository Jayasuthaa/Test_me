#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include "random.c"


#include<unistd.h>
#include "timer.c"
#include "problemquestions.c"
//int s;
int main() {
   
    printf("Hello Testing World\n");
    // timer();

    //int min = 1, max = 60, count = 10;
    int ch;
    printf("What kind of test you want : \n");
    printf("If you want oral test enter '0' \n or problem test enter '1' : ");
    scanf("%d",&ch);
    // printf("Enter the range : ");
    // scanf("%d",&n);
    if (ch == 0)
    randomfororal();
    else if(ch == 1){
        randomforbroblem();
    }
    
    // else
    // printf("Enter correct option");

    
    // if(n<=30 && n>=1)
    // printRandomsoral();
    // else if(n>=31 && n<=60)
    // printRandomsproblems();
    // else
    // printf("Enter between 1 to 60");
    return 0;
}