using System;

class Program
{
    static void Main()
    {
        // Input the decimal number
        Console.Write("Input a decimal number: ");
        int num = int.Parse(Console.ReadLine());

        // Convert to binary and display with leading zeros
        Console.Write("Binary number equivalent to said decimal number is: ");
        ConvertToBinary(num);
    }

    static void ConvertToBinary(int num)
    {
        // Create a mask to check each bit starting from the highest (31st bit for a 32-bit integer)
        int mask = 1 << 31;  // Highest bit is the 31st for a 32-bit integer

        // Iterate through each bit of the integer
        for (int i = 0; i < 32; i++)
        {
            // Check if the bit at the current position is 1 or 0
            if ((num & mask) != 0)
                Console.Write("1");
            else
                Console.Write("0");

            // Shift the mask one position to the right
            mask >>= 1;

            // Insert space after every 4 bits for readability
            if ((i + 1) % 4 == 0)
                Console.Write(" ");
        }

        Console.WriteLine();
    }
}
