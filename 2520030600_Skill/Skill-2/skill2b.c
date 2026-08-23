#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>

#define BUFFER_SIZE 100

int main() {
    struct termios oldt, newt;
    char buffer[BUFFER_SIZE];
    int index = 0;
    char ch;

    // Get current terminal settings
    tcgetattr(STDIN_FILENO, &oldt);

    // Copy current settings
    newt = oldt;

    // Disable canonical mode and echo
    newt.c_lflag &= ~(ICANON | ECHO);

    // Apply new settings
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    printf("myshell> ");
    fflush(stdout);

    while (1) {
        // Read one character
        read(STDIN_FILENO, &ch, 1);

        // Handle Enter key
        if (ch == '\n' || ch == '\r') {
            buffer[index] = '\0';

            printf("\nYou entered: %s\n", buffer);

            // Exit condition
            if (strcmp(buffer, "exit") == 0) {
                break;
            }

            // Reset buffer
            index = 0;

            printf("myshell> ");
            fflush(stdout);
        }

        // Handle Backspace
        else if (ch == 127 || ch == '\b') {
            if (index > 0) {
                index--;

                // Erase character from screen
                printf("\b \b");
                fflush(stdout);
            }
        }

        // Handle normal characters
        else {
            if (index < BUFFER_SIZE - 1) {
                buffer[index] = ch;
                index++;

                // Display character
                putchar(ch);
                fflush(stdout);
            }
        }
    }

    // Restore terminal settings
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

    printf("\nExiting shell...\n");

    return 0;
}