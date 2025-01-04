#include <stdio.h>
#include <string.h>

char userInput[10];
FILE *fptr;

int createFile() {
  // opens a new file with the name "passKey.ky", the file has no contents
  fptr = fopen("passKey.ky", "w");
  fclose(fptr);
}

int mainLoop() {
  // checks if the file "passKey.ky" is present, if not: creates the file
  fptr = fopen("passKey.ky", "r")
  if (fptr == NULL) {
    printf("cannot open file.\ncreating new file...");
    fptr = fopen("passKey.ky", "w");
    fclose(fptr);
    printf("new file created.\n", );
  }

  // command loop, prompts input and writes it to the variable userInput for further processing
  printf("> ");
  scanf("%s", userInput);
  commandHandler();
  return 0;
}

int commandHandler() {
  fptr = fopen("passKey.ky", "r")
  if (fptr != NULL) {
    switch (userInput) {
      case "list":
        while(fgets(myString, 100, fptr)) {
          printf("%s", myString);
        }
    }
  } else {
    printf("cannot open file.\ncreating new file...");
    fptr = fopen("passKey.ky", "w");
    fclose(fptr);
    printf("new file created.\n", );
  }
}

int main(int argc, char const *argv[]) {
  while (true) {
    mainLoop();

  }
  return 0;
}
