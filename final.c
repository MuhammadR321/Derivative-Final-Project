#include <stdio.h>

int main (void) {

  int fxntype; 
  //**Stores the value for which type of function the user wishes to differentiate.**// -Tausif
  printf("Enter the type of function you wish to differentiate. \n  KEY: 1 for 'Linear', 2 for 'Binomial', 3 for 'Trinomial'\n"); 
  //**Gives the user a key for choosing different function types they wish to differentiate. **// -Tausif
  scanf("%i", &fxntype);
  //**Takes user input at stores it in fxntype.**// -Tausif

  char fxnvar; 
  //**Storage of the variable the user is going to use in their functions.**// -Tausif

  switch (fxntype) { 
    //**Switches are easy and conventient since they take numerical input and are clean dividers between parts of the program.**// - Tausif

    case 1:
    printf("\nYour function type is Linear, or y = mx+b.\n"); 
    //**This gives the user the format for which the function is listed as. **// -Tausif
    
    int i, linearvals[2];
    const char *placeholders[2];
    placeholders[0] = "m";
    placeholders[1] = "b";
    //**Creates the variables that needs to be replaced inside the array that holds all the coefficients.**// -Tausif

    for(int i=0; i<2; i++) {
      printf("Enter a value to replace %s:\t", placeholders[i]);
      scanf("%d",&linearvals[i]); 
      //**Makes the user input a value to replace the variables in placeholders[~] **// -Tausif
    }

    for(int i=0;i<2;i++){ //**Output test to make sure loop is working.**// -Tausif
      printf("Value of array is %d \n",linearvals[i]);
    }

    //printf("What variable would you like to use? Options are from a to z.\n\n");
    //scanf("%c", &fxnvar);
    break;

    case 2:
    printf("\nYour function type is Bionomial, or y = ax^e1 + bx + c.\n"); 
    //**This gives the user the format for which the function is listed as. **// -Tausif
    
    int j, linearvals2[4];
    const char *placeholders2[4];
    placeholders2[0] = "a";
    placeholders2[1] = "e1";
    placeholders2[2] = "b";
    placeholders2[3] = "c";
    //**Creates the variables that needs to be replaced inside the array that holds all the coefficients.**// -Tausif

    for(int j=0; j<4; j++) {
      printf("Enter array value to replace %s:\t", placeholders2[j]);
      scanf("%d",&linearvals2[j]); 
      //**Makes the user input a value to replace the variables in placeholders[~] **// -Tausif
    }

    for(int j=0;j<4;j++){//output array value
      printf("Value of array is %d \n",linearvals2[j]);
    }

    //printf("What variable would you like to use? Options are from a to z.\n\n");
    //scanf("%c", &fxnvar);
    break;

    case 3:
    printf("1 + 3 = 4");
    break;

  }

}
