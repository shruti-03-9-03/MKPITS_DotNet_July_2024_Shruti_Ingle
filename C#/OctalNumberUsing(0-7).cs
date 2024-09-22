using System;

class Program
{
    static void Main()
    {
        Console.Write("Input an octal number (using digits 0 - 7): ");
        string octalInput = Console.ReadLine();
        int decimalNumber = 0;
        int place = 1;
        
        // Convert octal to decimal
        for (int i = octalInput.Length - 1; i >= 0; i--)
        {
            // Convert character to integer
            int digit = octalInput[i] - '0';

            // Check for valid octal digit
            if (digit < 0 || digit > 7)
            {
                Console.WriteLine("Invalid octal number.");
                return;
            }

            decimalNumber += digit * place; // Add to decimal number
            place *= 8;                      // Increase the place value
        }

        // Output the result
        Console.WriteLine($"The Octal Number: {octalInput}");
        Console.WriteLine($"The equivalent Decimal Number: {decimalNumber}");
    }
}
using System;

class Program
{
    static void Main()
    {
        Console.Write("Input an octal number (using digits 0 - 7): ");
        string octalInput = Console.ReadLine();
        int decimalNumber = 0;
        int place = 1;
        
        // Convert octal to decimal
        for (int i = octalInput.Length - 1; i >= 0; i--)
        {
            // Convert character to integer
            int digit = octalInput[i] - '0';

            // Check for valid octal digit
            if (digit < 0 || digit > 7)
            {
                Console.WriteLine("Invalid octal number.");
                return;
            }

            decimalNumber += digit * place; // Add to decimal number
            place *= 8;                      // Increase the place value
        }

        // Output the result
        Console.WriteLine($"The Octal Number: {octalInput}");
        Console.WriteLine($"The equivalent Decimal Number: {decimalNumber}");
    }
}

