# Distance, Speed, and Time Calculator

## Overview
This is a simple console-based C++ program that allows users to calculate distance, speed, or time based on user inputs. The program provides an interactive menu for users to select the desired calculation.




Develop By Sankar Das
## Features
- Calculate Distance using speed and time.
- Calculate Speed using distance and time.
- Calculate Time using distance and speed.
- Input validation to prevent division by zero.

## Requirements
- C++ compiler (e.g., g++, clang++)
- Basic knowledge of how to compile and run C++ programs

## How to Compile and Run
1. **Clone the Repository** (if applicable) or create a new file named `calculator.cpp` and copy the code into it.

2. **Open a Terminal** (or Command Prompt).

3. **Navigate to the Directory** where the file is saved.

4. **Compile the Program** using the following command:
   ```bash
   g++ -o calculator calculator.cpp
   ```

5. **Run the Program** using the command:
   ```bash
   ./calculator
   ```

## Usage Instructions
1. When the program runs, a menu will be displayed with options:
   - `1`: Calculate Distance
   - `2`: Calculate Speed
   - `3`: Calculate Time
   - `0`: Exit

2. Enter the corresponding number to make your selection.

3. Follow the prompts to enter the required values based on your selection.

4. The program will display the result for the calculation.

5. You can repeat the process or exit the program by entering `0`.

## Example
- To calculate distance:
  - Select `1` and enter speed and time.
  - The program will output the calculated distance.

- To calculate speed:
  - Select `2` and enter distance and time.
  - The program will output the calculated speed.

- To calculate time:
  - Select `3` and enter distance and speed.
  - The program will output the calculated time.

## Note
- Ensure that the inputs for speed and time are not zero to avoid division errors.
- The program will prompt the user for re-entry of values in case of invalid input.

## License
This project is open-source and free to use. Feel free to modify and distribute as per your needs!
