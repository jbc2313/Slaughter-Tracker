#include <stdio.h>
#include <stdlib.h>


//needs moved to another file?

// this function needs to return an array of the info gathered.
void GetAnimalInfo(char *uInput, int nButcher, char *cBool){
    // function needs to return a true or false so program can continue or retry

    // ask Y or N
    // end of loop if correct.

    printf("Please enter the type of animal: Pig or Bovine\n");
    scanf("%s", uInput);
    printf("Please enter the number of animals to be slaughtered?\n");
    scanf("%d", &nButcher); 
    printf("You dropped of %d %s to be slaughtered?\n", nButcher, uInput);
    printf("Is that correct?\n");
    scanf("%s", cBool);

}

int main(){
    char userInput[5];
    int numButcher;
    char checkBool[1];

    char animalOwner[20];

    printf("Welcome to Woodward Meats Slaughter Tracker.\n");

    printf("Enter a name for who the animal belongs too.\n");
    scanf("%s", animalOwner);

    GetAnimalInfo(userInput, numButcher, checkBool);

    // ask for their name, animal type, and number of animals.
    // confirm inputs, if incorrect go back through the loop and reask the questions.

    // Enter the weights of the slaughtered animals and owners names
    // 

    // All info gathered needs to be put into an array
    // The array will be used to list out all the info into different lists
    // ie.. Heaviest, Type of animal, By owner, etc etc
    

};





