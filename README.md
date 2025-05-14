
### 🔤 Character Analyzer in C

A straightforward program that checks if an entered character is a **vowel**, **consonant**, or **not a letter**, using simple `if-else` logic and character comparisons.

## Description
This is a simple C program that prompts the user to enter a single character and then checks whether the input is:

- A **vowel**
- A **consonant**
- **Not a letter**

The program uses basic `if-else` logic and character comparisons to determine the type of character entered.

## How It Works
- Vowels checked: `A, E, I, O, U` (both uppercase and lowercase)
- If the input is a letter but not a vowel, it is considered a consonant.
- If the input is not a letter at all (e.g., number, symbol), it displays a message accordingly.

## Example Output

enter a character: a
A vowel

enter a character: T
A consonant

enter a character: 5
Not a letter at all


## How to Compile and Run
1. Make sure you have a C compiler installed (e.g., `gcc`).
2. Compile the code:
   ```bash
gcc vowel_checker.c -o vowel_checker
Run the program:

bash
./vowel_checker
