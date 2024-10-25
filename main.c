#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//needs moved to another file?

// this function needs to return an array of the info gathered.
void GetAnimalInfo(char *uInput, int *nButcher){
    bool cBool;
    char userBooleanInput;
    // ask Y or N
    // end of loop if correct.
    while(cBool == false){
        printf("Please enter the type of animal: Swine or Bovine\n");
        scanf("%s", uInput);
        printf("Please enter the number of animals to be slaughtered?\n");
        scanf("%d", nButcher); 
        printf("You dropped of %d %s to be slaughtered?\n", *nButcher, uInput);
        printf("Is that correct?\n");
        scanf("%s", &userBooleanInput);
        if(userBooleanInput == 'y'){
            cBool = true;
        }
        if(userBooleanInput == 'Y'){
            cBool = true;
        }
        if(userBooleanInput == 'f'){
            cBool = false;
        }
        if(userBooleanInput == 'F'){
            cBool = false;
        }
        if(cBool == true){
            printf("\nAwesome, lets continue.\n");
        }
    
    }
}

int main(){
    char userInput[5];
    int numButcher;

    char animalOwner[20];

    printf("Welcome to Woodward Meats Slaughter Tracker.\n");

    printf("Enter a name for who the animal belongs too.\n");
    scanf("%s", animalOwner);

    GetAnimalInfo(userInput, &numButcher);

    printf("You are having %d %s butchered.", numButcher, userInput);

    // ask for their name, animal type, and number of animals.
    // confirm inputs, if incorrect go back through the loop and reask the questions.

    // Enter the weights of the slaughtered animals and owners names
    // Maybe allow the user to scroll up and down and select the animal owner 

    // All info gathered needs to be put into an array
    // The array will be used to list out all the info into different lists
    // ie.. Heaviest, Type of animal, By owner, etc etc
    

};




