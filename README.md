# RandomNumberGeneratorGame

Create a random number generator in C++ with input error handling involves several key components: generating random numbers,   obtaining valid user input for the range, and handling potential input errors.

1. Random Number Generation:
   - The C++ <random> library offers robust tools for generating random numbers. A common approach involves:
     
      Seeding:-
       - Using std::random_device to obtain a non-deterministic seed, which is then used to initialize a pseudo-random number             generator engine like std::mt19937.
         
       Distribution:-
        - Employing a distribution, such as std::uniform_int_distribution, to map the engine's output to a desired range (e.g.,            between a minimum and maximum value).

  2. Input Error Handling:
    - To ensure the user provides valid input for the range (minimum and maximum values):
     
     1. Input Validation Loop:
       - Implement a loop that repeatedly prompts the user for input until a valid value is entered.
       - std::cin State Check:
       - After attempting to read input with std::cin, check the stream's state using std::cin.fail().
       - If true, it indicates an invalid input type (e.g., non-numeric input when an integer is expected).
         
     2. Error Message:
        - Provide clear error messages to the user, explaining the expected input format.
          
     3. Clear and Ignore:
          If an error occurs, clear the error flags using std::cin.clear() and discard the invalid input from the buffer                 using std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'). This prevents infinite loops caused by               the invalid input remaining in the buffer.
           
     4. Range Validation:
          After successfully reading numeric input, validate that the minimum value is less than or equal to the maximum value.
          If not, prompt the user to re-enter the values.


Algorithms:-
step 1: Start.

step 2. Entered any random number.

step 3. Entered number seven times.

step 4. Every time you entered check your guess number is matched or not.

step 5. If guess number is matched player won.

step 6. If guess number is not matched than player lose

step 7. End.
