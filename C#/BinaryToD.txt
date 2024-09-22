using System;

class Program
{
    static void Main()
    {
        Console.Write("Input a binary number: ");
        string binaryInput = Console.ReadLine();

        // Convert binary to decimal
        int decimalNumber = Convert.ToInt32(binaryInput, 2);
        
        // Convert decimal to octal
        string octalNumber = Convert.ToString(decimalNumber, 8);

        // Output the results
        Console.WriteLine($"The Binary Number: {binaryInput}");
        Console.WriteLine($"The equivalent Octal Number: {octalNumber}");
    }
}
