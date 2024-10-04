/*
* Ahmed Yassin, 400536694
* The quiz program is designed to test users' knowledge on Linux, C, and Git
*/

//Include necessary libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function to display usage instructions for the quiz program to the user
void display_usage() {
    puts("Usage: quiz [-#] [<answer>]");
    puts("Try 'quiz --help' for more information.\n");
}

//Function to display help information to the user, explaining how to use the utility
void display_help() {
    puts("This quiz program will test your knowledge on Linux, C, and Git");
    puts("Usage:");
    puts("  -1            Display question 1 (Linux)");
    puts("  -2            Display question 2 (C)");
    puts("  -3            Display question 3 (Git)");
    puts("  -# <answer>   Provide your answer for question #");
    puts("  --help        Show help message\n");
}

//Main function for program execution
int main(int argc, char*argv[]) {
    
    //Declare and initialize strings for each question and their corresponding answer accordingly
    char *question1 = "What is the command to move into a directory in Linux?";
    char *answer1 = "cd";
    
    char *question2 = "In C, what does the 'printf' function do?";
    char *answer2 = "Prints output";
    
    char *question3 = "What is the command to initialize a new Git repository?";
    char *answer3 = "git init";

    //If there are no flag arguments provided or too many arguments provided
    if (argc < 2 || argc > 3) {
        //Call the display_usage() function to give the user usage instructions
        display_usage();
        return EXIT_FAILURE;
    }
 
    //If the first command-;ine argument matches the --help flag
    if (strcmp(argv[1], "--help") == 0) {
        //Call the display_help() function to give the user help information
        display_help();
        return EXIT_SUCCESS;
    }

    //If the first command-line argument passed matches the -1 flag
    if (strcmp(argv[1], "-1") == 0) {
        //If the user does not provide a second argument, question 1 is displayed
        if (argc == 2) {
            //Display question 1 to the user
            printf("%s\n", question1);
        } else {
            //If the user provides a second argument, check if the provided answer is correct for question 1
            if (strcmp(argv[2], answer1) == 0) {
                printf("Correct answer!\n");
            } else {
                printf("Incorrect. The answer is '%s'.\n", answer1);
            }
        }
        return EXIT_SUCCESS;
    } 

    //If the first command-line argument passed matches the -2 flag
    else if (strcmp(argv[1], "-2") == 0) {
        if (argc == 2) {
            //If the user does not provide a second argument, question 2 is displayed
            printf("%s\n", question2);
        } else {
            //If the user provides a second argument, check if the provided answer is correct for question 2
            if (strcmp(argv[2], answer2) == 0) {
                printf("Correct answer!\n");
            } else {
                printf("Incorrect. The answer is '%s'.\n", answer2);
            }
        }
        return EXIT_SUCCESS;
    } 

    //If the first command-line argument passed matches the -3 flag
    else if (strcmp(argv[1], "-3") == 0) {
        if (argc == 2) {
            //If the user does not provide a second argument, question 3 is displayed
            printf("%s\n", question3);
        } else {
            //If the user provides a second argument, check if the provided answer is correct for question 3
            if (strcmp(argv[2], answer3) == 0) {
                printf("Correct answer!\n");
            } else {
                printf("Incorrect. The answer is '%s'.\n", answer3);
            }
        }
        return EXIT_SUCCESS;
    }

    //If given an unexpected flag or wrong input by the user, display usage instructions
    display_usage();
    return EXIT_FAILURE;

}