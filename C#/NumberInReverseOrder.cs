using System;

using System;

class Program
{
    static void Main()
    {
        int number, reverse = 0;

        // Input a number
        Console.Write("Input a number: ");
        number = int.Parse(Console.ReadLine());

        // Process to reverse the number
        while (number != 0)
        {
            int digit = number % 10;         // Get the last digit
            reverse = reverse * 10 + digit;  // Build the reversed number
            number /= 10;                    // Remove the last digit
        }

        // Output the reversed number
        Console.WriteLine("The number in reverse order is: " + reverse);
    }
}
