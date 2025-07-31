#include <iostream>

using namespace std;

int main()
{
    std:cout << "Welcome to the Input Buffer Experiment. This program is meant to give an introduction to how the input buffer works in some unexpected situations. You can use this to better "
    "your understanding of exactly how the input buffer works\n";

    int x;
    std::cout << "First, input the value of x: ";
    std::cin >> x;

    int y;
    std::cout << "Now you can input y: ";
    std::cin >> y;

    std::cout << "You entered " << x << " for x, and " << y << " for y.\n";
    std::cout << "Now we'll do something a little different. Since x and y are integers, when C++ encounters any whitespace in your input, it will cut off the rest of the input and save it "
    "for later (in the input buffer). Let's demonstrate\n";

    std::cout << "Enter different values for both x and y, separated by a space: ";
    std::cin >> x;

    std::cout << "Your previous input was assigned exclusively to the value of x, we did not request an input for y. Here's the result so far: \nx = " << x << "\ny = " << y << " (your first "
    "input for y)\n";

    std::cout << "Now we'll run std::cin for y again.\n";
    std::cin >> y;
    std::cout << "Notice how it didn't request an input from you this time? That's because it already had one saved in the input buffer when you entered two values separated by a space.\n";

    std::cout << "And now for the grand finale... your values for x and y are:\nx = " << x << "\ny = " << y << "\nExactly what you typed previously! (if you followed instructions)\n";
    std::cout << "It's important to note that in many instances, this produces an undesired result. Typically, if a program asks a user to input an integer, the program should only "
    "allow the user to input an integer. This would usually be done by handling error cases of characters being input rather than integers, and trimming anything following whitespace entered.\n";

    return 0;
}
