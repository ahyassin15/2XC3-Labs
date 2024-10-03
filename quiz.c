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
    char *answer1 = "In C, what does the 'printf' function do?";
    
    char *question2 = "cd";
    char *answer2 = "Prints output";
    
    char *question3 = "What is the command to initialize a new Git repository?";
    char *answer3 = "git init";

}