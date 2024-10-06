using System;

class Program
{
    static void Main()
    {
        // Prompt the user to enter a positive number
        Console.Write("Enter a positive number: ");
        double number = double.Parse(Console.ReadLine());

        // Convert the number to negative if it's positive
        double negativeNumber = -Math.Abs(number);

        // Display the result
        Console.WriteLine($"The negative of {number} is: {negativeNumber}");
    }
}
