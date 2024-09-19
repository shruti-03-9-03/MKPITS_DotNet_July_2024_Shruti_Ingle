using System;

class Program
{
    // Method to display the Fibonacci series up to n terms
    static void DisplayFibonacci(int number)
    {
        int first = 0, second = 1, next;

        // Print the first two terms
        if (number >= 1)
        {
            Console.Write(first + " ");
        }
        if (number >= 2)
        {
            Console.Write(second + " ");
        }

        // Generate and print the remaining terms
        for (int iCout = 3; iCout <= number; iCout++)
        {
            next = first + second;
            Console.Write(next + " ");
            first = second;
            second = next;
        }
        Console.WriteLine();
    }

    static void Main()
    {
        int numberOfTerms;

        // Input the number of terms to display
        Console.Write("Input number of terms to display: ");
        numberOfTerms = int.Parse(Console.ReadLine());

        // Display the Fibonacci series
        Console.WriteLine($"Here is the Fibonacci series up to {numberOfTerms} terms:");
        DisplayFibonacci(numberOfTerms);
    }
}
