#include <stdio.h>
#include <stdlib.h>


//needs moved to another file
void GetAnimalInfo(){
// function needs to return a true or false so program can continue or retry
    
    char animalOwner[20];
    char userInput[5];
    int numButcher;
    char checkBool[1];


    // ask Y or N
    // end of loop if correct.

    printf("Enter a name for who the animal belongs too.");
    scanf("%s", animalOwner);
    printf("Please enter the type of animal: Pig or Bovine\n");
    scanf("%s", userInput);
    printf("Please enter the number of animals to be slaughtered?\n");
    scanf("%d", &numButcher); 
    printf("You dropped of %d %s to be slaughtered?\n", numButcher, userInput);
    printf("Is that correct?\n");
    scanf("%s", checkBool);
}


int main(){

    printf("Welcome to Woodward Meats Slaughter Tracker.\n");

     

    // ask for their name, animal type, and number of animals.
    // confirm inputs, if incorrect go back through the loop and reask the questions.

    // Enter the weights of the slaughtered animals and owners names
    // 

    // All info gathered needs to be put into an array
    // The array will be used to list out all the info into different lists
    // ie.. Heaviest, Type of animal, By owner, etc etc
    

};





