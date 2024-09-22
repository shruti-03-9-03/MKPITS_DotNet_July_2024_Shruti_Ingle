using System;

class Program
{
    static void Main()
    {
        Console.Write("Input the binary number: ");
        string binary = Console.ReadLine();
        int decimalValue = 0;
        
        // Calculate the length of the binary number
        int length = binary.Length;

        // Convert binary to decimal
        for (int i = 0; i < length; i++)
        {
            // Check if the character is '1'
            if (binary[length - 1 - i] == '1')
            {
                decimalValue += (int)Math.Pow(2, i);
            }
        }

        // Output the results
        Console.WriteLine($"The Binary Number: {binary}");
        Console.WriteLine($"The equivalent Decimal Number is: {decimalValue}");
    }
}
