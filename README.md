# String Comparison Program

## Overview

This program reads three strings from the user and compares them lexicographically. Based on the comparison results, it prints the strings in a sorted order.

## How It Works

1. **Input**: 
   - The user is prompted to input three strings (`x`, `y`, and `z`).

2. **Comparison**: 
   - The program uses the `strcmp()` function from the C Standard Library to compare the strings lexicographically.
   - The comparisons are based on the following rules:
     - If two strings are equal, they are placed next to each other in the output.
     - The strings are printed in ascending order (i.e., from smallest to largest lexicographically).

3. **Output**: 
   - The sorted strings are printed in a single line, separated by spaces.

## Lexicographical Order

In C, strings are compared lexicographically. The comparison returns:
- `0` if the strings are equal.
- A negative value if the first string is lexicographically smaller than the second.
- A positive value if the first string is lexicographically larger than the second.

### Example:

- Input:
  ```
  abc
  xyz
  def
  ```

- Output:
  ```
  abc def xyz
  ```

## Usage Instructions

1. Compile the program using GCC:
   ```bash
   gcc string_comparison.c -o string_comparison
   ```

2. Run the program:
   ```bash
   ./string_comparison
   ```

3. Follow the prompts to enter three strings, and the program will display the sorted result.

## Code Snippet

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char x[200];
    char y[200];
    char z[200];
    printf("[+] String Reader: \n");
    printf("[+] Enter the first string: \n");
    scanf("%s", x);
    printf("[+] Enter the second string: \n");
    scanf("%s", y); 
    printf("[+] Enter the third string: \n");
    scanf("%s", z);

    int comparison = strcmp(x, y);
    if(comparison == 0){
        int comparison2 = strcmp(x, z);
        if(comparison2 == 0 || comparison2 == -1){
            printf("%s %s %s", x,y,z);
        } else {
            printf("%s %s %s", z,x,y);
        }
    } else if(comparison == -1){
        int comparison2 = strcmp(y, z);
        if(comparison2 == 0 || comparison2 == -1){
            printf("%s %s %s", x,y,z);
        } else {
            int comparison3 = strcmp(x, z);
            if(comparison3 == 0 || comparison3 == -1){
                printf("%s %s %s", x,z,y);
            } else {
                printf("%s %s %s", z,x,y);
            }
        }
    } else {
        int comparison4 = strcmp(x, z);
        if(comparison4 == 0 || comparison4 == -1){
            printf("%s %s %s",y, x,z);
        } else {
            int comparison5 = strcmp(y, z);
            if(comparison5 == 0 || comparison5 == -1){
                printf("%s %s %s", y,z,x);
            } else {
                printf("%s %s %s", z,y, x);
            }
        }
    }
}
```

## Dependencies

- `stdio.h` for standard input/output.
- `stdlib.h` for standard utilities.
- `string.h` for string handling functions (`strcmp`).

## Notes

- The input buffer for each string is set to 200 characters. You can modify this size based on your requirements.
- The program assumes the user enters valid strings. Special characters and edge cases (e.g., empty strings) are not handled explicitly in this version.

## Future Improvements

- Add error handling for invalid inputs.
- Handle edge cases such as empty strings or very large inputs.
- Provide a better user experience by allowing the user to input strings with spaces.

## License

This project is open-source and free to use under the MIT License.

--- 
