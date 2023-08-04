#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #define CLEAR_SCREEN "cls"    // Define the command to clear the console for Windows
#else
    #define CLEAR_SCREEN "clear"  // Define the command to clear the console for other platforms (e.g., Linux, macOS)
#endif

typedef enum { FAST = 1, NORMAL = 2, ADVANCED = 3 } Mood;  // Define an enum to represent different modes

void clearConsole(void);
void welcome(void);
void createFoldersFast(void);
void createFoldersNormal(void);
void createFoldersAdvanced(void);

int main(int argc, char* argv[]) {
    Mood mode;

    clearConsole();  // Clear the console before starting
    welcome();       // Display the welcome message and mode selection options

    if (scanf("%d", (int*)&mode) != 1) {  // Read the mode choice from the user
        puts("Invalid choice.");
        return 1;
    }

    while (mode != FAST && mode != NORMAL && mode != ADVANCED) {  // Validate the chosen mode
        printf("Invalid mode.\n");
        printf("Enter mode number: ");
        if (scanf("%d", (int*)&mode) != 1) {
            puts("Invalid choice.");
            return 1;
        }
    }

    clearConsole();  // Clear the console again before proceeding with the selected mode

    // Based on the chosen mode, call the corresponding function
    if (mode == FAST)
        createFoldersFast();
    else if (mode == NORMAL)
        createFoldersNormal();
    else if (mode == ADVANCED)
        createFoldersAdvanced();
    else
        puts("Invalid choice.");

    return 0;
}

void clearConsole(void) {
    system(CLEAR_SCREEN);  // Use the defined command to clear the console
}

void welcome(void) {
    // Display the welcome message and mode selection options
    printf("\n\a"
       "\t\t*************************************************\n"
       "\t\t*                                               *\n"
       "\t\t*                 Welcome To                    *\n"
       "\t\t*       cs50 Folder Creation Utility.           *\n"
       "\t\t*                                               *\n"
       "\t\t*************************************************\n\n\n");
    printf("Please choose the mode:\n");
    printf("(1) Fast mode\n"
           "(2) Normal mode\n"
           "(3) Advanced mode\n");
    printf("Enter your choice number: ");
}

void createFoldersFast(void) {
    int count;
    printf("Enter the number of folders you want to create: ");
    if (scanf("%d", &count) != 1) {  // Read the number of folders to create from the user
        puts("Invalid input.");
        return;
    }

    while ((getchar()) != '\n');  // Clear the input buffer

    if(count <= 0)
    {
        printf("Folder creation process has been canceled.\n");
        getchar();  // Wait for user to press Enter
        return;
    }

    // Loop to create the specified number of folders
    for (int i = 1; i <= count; i++) {
        char command[30];
        sprintf(command, "mkdir \"%d\"", i);  // Create a command to create a folder with a numeric name
        if (system(command) != 0) {
            printf("Failed to create folder: %d\n", i);
        }
        printf("%d\r", i);  // Display the progress of folder creation
    }
    puts("\nDone. All folders are created.");

    getchar();  // Wait for user to press Enter
}

void createFoldersNormal(void) {
    int count;
    printf("How many folders do you want to create?: ");
    if (scanf("%d", &count) != 1) {  // Read the number of folders to create from the user
        puts("Invalid input.");
        return;
    }

    while ((getchar()) != '\n');  // Clear the input buffer

    if(count <= 0)
    {
        printf("Folder creation process has been canceled.\n");
        getchar();  // Wait for user to press Ente
        return;
    }

    system("mkdir \"new folder\"");  // Create the primary folder named "new folder"
    count -= 1;  // Decrement the count by 1 as the primary folder is already created

    // Loop to create the remaining folders with incremented numbers in the name
    for (int i = 1; i <= count; i++) {
        char command[30];
        sprintf(command, "mkdir \"new folder(%d)\"", i + 1);  // Create a command to create a folder with an incremented name
        system(command);
        printf("%d\r", i + 1);  // Display the progress of folder creation
    }
    puts("\nDone. All folders are created.");

    getchar();  // Wait for user to press Enter
}

void createFoldersAdvanced(void) {
    int count;
    printf("How many folders do you want to create?: ");
    if (scanf("%d", &count) != 1) {  // Read the number of folders to create from the user
        puts("Invalid input.");
        return;
    }
    while ((getchar()) != '\n');  // Clear the input buffer

    if(count <= 0)
    {
        printf("Folder creation process has been canceled.\n");
        getchar();  // Wait for user to press Ente
        return;
    }
    // Loop to create the specified number of folders with custom names
    for (int i = 1; i <= count; i++) {
        printf("Enter folder name: ");
        char folderName[100];
        if (fgets(folderName, sizeof(folderName), stdin) == NULL) {  // Read the folder name from the user
            puts("Failed to read input.");
            return;
        }

        // Remove the trailing newline character from the folder name
        folderName[strcspn(folderName, "\n")] = '\0';

        char command[110];
        sprintf(command, "mkdir \"%s\"", folderName);  // Create a command to create a folder with the custom name
        if (system(command) != 0) {
            printf("Failed to create folder: %s\n", folderName);
        }
    }
    puts("\nDone. All folders are created.");

    getchar();  // Wait for user to press Enter
}
