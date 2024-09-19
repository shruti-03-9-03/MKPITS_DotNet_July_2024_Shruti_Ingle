using System;

class Program
{
    static void Main()
    {
        int num, originalNum, remainder, result = 0, n = 0;

        // Input a number
        Console.Write("Input a number: ");
        num = int.Parse(Console.ReadLine());

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

        // Check if the number is an Armstrong number
        if (result == num)
            Console.WriteLine($"{num} is an Armstrong number.");
        else
            Console.WriteLine($"{num} is not an Armstrong number.");
    }
}
