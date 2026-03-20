/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;

    // Seed for random number
    srand(time(0));

    // Generate computer choice (1 to 3)
    computer = rand() % 3 + 1;

    printf("Snake Water Gun Game\n");
    printf("1. Snake\n2. Water\n3. Gun\n");
    printf("Enter your choice: ");
    scanf("%d", &user);

    // Display choices
    printf("You chose: ");
    if(user == 1) printf("Snake\n");
    else if(user == 2) printf("Water\n");
    else if(user == 3) printf("Gun\n");

    printf("Computer chose: ");
    if(computer == 1) printf("Snake\n");
    else if(computer == 2) printf("Water\n");
    else if(computer == 3) printf("Gun\n");

    // Game logic
    if(user == computer) {
        printf("It's a Draw!\n");
    }
    else if(
        (user == 1 && computer == 2) || // Snake drinks Water
        (user == 2 && computer == 3) || // Water douses Gun
        (user == 3 && computer == 1)    // Gun kills Snake
    ) {
        printf("You Win!\n");
    }
    else {
        printf("You Lose!\n");
    }

    return 0;
}*/


/*The Line:
computer = rand() % 3 + 1;

Let’s break it step by step 👇

1️⃣ rand()

rand() is a function from stdlib.h

It generates a random integer

Example values:

18372, 9283, 112, 99999...

👉 Problem: These numbers are too big and unpredictable for our game.

2️⃣ rand() % 3

% is the modulus operator (remainder)

So:

rand() % 3

means → divide by 3 and take remainder

Possible remainders:

0, 1, 2

👉 Now we have only 3 possible values, perfect for 3 choices!

3️⃣ + 1

Now we shift the range:

0 → 1
1 → 2
2 → 3

So final values become:

1, 2, 3
🎯 Final Mapping
Number	Meaning
1	Snake 🐍
2	Water 💧
3	Gun 🔫
🧠 Why not just rand() % 3?

Because that gives:

0, 1, 2

But your game logic uses:

1, 2, 3

So +1 is necessary.

⚠️ One Important Thing (Most students miss this)

Before using rand(), you must write:

srand(time(0));

👉 This ensures different random values every time
Otherwise → same pattern every run (looks fake)

💡 Simple Analogy

Think of it like:

rand() → huge random numbers

% 3 → shrink to 3 options

+1 → shift to match your game choices
*/
