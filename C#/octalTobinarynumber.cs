using System;

class Program
{
    static void Main()
    {
        Console.Write("Input an octal number (using digit 0 - 7): ");
        string octalInput = Console.ReadLine();

        // Convert octal to decimal
        int decimalNumber = Convert.ToInt32(octalInput, 8);
        
        // Convert decimal to binary
        string binaryNumber = Convert.ToString(decimalNumber, 2);

        // Output the results
        Console.WriteLine($"The Octal Number: {octalInput}");
        Console.WriteLine($"The equivalent Binary Number: {binaryNumber}");
    }
}
using System;

class Program
{
    static void Main()
    {
        Console.Write("Input an octal number (using digit 0 - 7): ");
        string octalInput = Console.ReadLine();

        // Convert octal to decimal
        int decimalNumber = Convert.ToInt32(octalInput, 8);
        
        // Convert decimal to binary
        string binaryNumber = Convert.ToString(decimalNumber, 2);

        // Output the results
        Console.WriteLine($"The Octal Number: {octalInput}");
        Console.WriteLine($"The equivalent Binary Number: {binaryNumber}");
    }
}
