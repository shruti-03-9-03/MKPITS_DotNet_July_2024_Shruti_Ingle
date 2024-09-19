using System;

class Program
{
    // Function to check if a number is an Armstrong number
    static bool IsArmstrong(int num)
    {
        int originalNum, remainder, result = 0, n = 0;

        originalNum = num;

        // Find the number of digits
        while (originalNum != 0)
        {
            originalNum /= 10;
            n++;
        }

        originalNum = num;

        // Calculate the sum of the powers of its digits
        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            result += (int)Math.Pow(remainder, n);
            originalNum /= 10;
        }

        // Return true if the number is an Armstrong number
        return result == num;
    }

    static void Main()
    {
        int start, end;

        // Input the range
        Console.Write("Input starting number of range: ");
        start = int.Parse(Console.ReadLine());

        Console.Write("Input ending number of range: ");
        end = int.Parse(Console.ReadLine());

        Console.Write("Armstrong numbers in given range are: ");

        // Loop through the range and check for Armstrong numbers
        for (int i = start; i <= end; i++)
        {
            if (IsArmstrong(i))
            {
                Console.Write(i + " ");
            }
        }

        Console.WriteLine();
    }
}
