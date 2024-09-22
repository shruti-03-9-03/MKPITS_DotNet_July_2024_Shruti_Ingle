using System;

class Program
{
    static void Main()
    {
        Console.Write("Input any Decimal number: ");
        int decimalNumber = Convert.ToInt32(Console.ReadLine());

        // Convert decimal to hexadecimal
        string hexadecimalNumber = Convert.ToString(decimalNumber, 16).ToUpper();

        // Output the result
        Console.WriteLine($"The equivalent Hexadecimal Number: {hexadecimalNumber}");
    }
}
