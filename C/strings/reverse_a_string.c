#include <stdio.h>
#include <string.h>

#define MAX_LEN 101   // 100 characters + null terminator

/**
 * Reverses a null-terminated string in-place.
 * @param str The string to reverse.
 */
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char buffer[MAX_LEN];

    // Read a line from stdin, including possible newline
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return 1;   // no input or error
    }

    // Remove the trailing newline character if present
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
    }

    // Reverse the string in-place
    reverseString(buffer);

	// Print the reversed string
	printf("%s", buffer);	
	// Only add newline if the string is non‑empty
	if (strlen(buffer) > 0) {
    	printf("\n");
	}
    return 0;
}
