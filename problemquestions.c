
void randomforbroblem();
//void randomfororal();
void prob_questions(int);
void randomfororal(){
    printf("Lets wait!!!");
}
void randomforbroblem()
{
int min=1,max=30;
int rd_num;
//void prob_questions();
for (int i = 1; i < 2; i++) {
        srand(time(NULL));
        rd_num = rand() % (max - min + 1) + min; // Generate random number in range
        printf("random value : %d \n ", rd_num);
        
        prob_questions(rd_num);
        printf("\n");
        timer();
        //break;
    }
}
void prob_questions(int rand){
//extern int rd_num;
//printf("THe random value is %d \n",rd_num);

//int rd_num=6;
switch (rand) 
{
case 1:
    printf("Write a code to reverse a number");
    break;
case 2:
    printf("Write the code to find the Fibonacci series upto the nth term");
    break;
case 3:
    printf("Write code of Greatest Common Divisor ");
    break;
case 4:
    printf("Write code of  Perfect number");
    break;
case 5:
    printf("Write code to Check if two strings are Anagram or not");
    break;
case 6:
    printf(" Write code Check if the given string is Palindrome or not");
    break;
case 7:
    printf("Write code to Calculate frequency of characters in a string");
    break;
case 8:
    printf("Write code to check if two strings match where one string contains wildcard characters");
    break;
case 9:
    printf("Write a code for bubble sort");
    break;
case 10:
    printf("How is the merge sort algorithm implemented?");
    break;
case 11:
    printf("Write to code to check whether a given year is leap year or not.");
    break;
case 12:
    printf("Find non-repeating characters in a string");
    break;
case 13:
    printf("Write a code to replace a substring in a string.");
    break;
case 14:
    printf("Write a code for Heap sort.");
    break;
case 15:
    printf("Write a code to replace each element in an array by its rank in the array");
    break;
case 16:
    printf("Write a code to find circular rotation of an array by K positions.");
    break;
case 17:
    printf("Write a code to find non-repeating elements in an array.");
    break;
case 18:
    printf("Write a code to check for the longest palindrome in an array.");
    break;
case 19:
    printf("Write a code to find the factorial of a number.");
    break;
case 20:
    printf("Write the code to for Armstrong number");
    break;
case 21:
    printf("Write a program to find the sum of Natural Numbers using Recursion.");
    break;
case 22:
    printf("Write a program to add Two Matrices using Multi-dimensional Array.");
    break;
case 23:
    printf("Write a Program to Find the Sum of Natural Numbers using Recursion.");
    break;
case 24:
    printf("Write code to check a String is palindrome or not?");
    break;
case 25:
    printf("Write a program for Binary to Decimal to conversion");
    break;
case 26:
    printf("Write a program to check whether a character is a vowel or consonant");
    break;
case 27:
    printf("Write a code to find an Automorphic number");
    break;
case 28:
    printf("Write a code to find Find the ASCII value of a character");
    break;
case 29:
    printf("Write a code to Remove all characters from string except alphabets");
    break;
case 30:
    printf("Write a code to Print the smallest element of the array");
    break;


default:
    printf("Range is exist from our range");
    break;
}


}