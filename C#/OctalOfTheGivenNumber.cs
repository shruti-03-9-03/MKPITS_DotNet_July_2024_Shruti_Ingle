using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter a number to convert: ");
        int decimalNumber = Convert.ToInt32(Console.ReadLine());
        int octalNumber = 0;
        int place = 1;

        // Convert decimal to octal
        while (decimalNumber > 0)
        {
            int remainder = decimalNumber % 8; // Get the remainder
            octalNumber += remainder * place;   // Add to octal
            decimalNumber /= 8;                  // Divide decimal by 8
            place *= 10;                         // Increase the place value
        }

        // Output the result
        Console.WriteLine($"The Octal of {decimalNumber} is {octalNumber}.");
    }
}
