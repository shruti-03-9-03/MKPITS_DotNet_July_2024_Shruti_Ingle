using System;

class Program
{
    static void Main()
    {
        Console.Write("Input an integer: ");
        int number = Convert.ToInt32(Console.ReadLine());
        int originalNumber = number;
        int sum = 0;
        int digits = 0;

        // Calculate the number of digits
        while (originalNumber > 0)
        {
            originalNumber /= 10;
            digits++;
        }

        originalNumber = number;

        // Calculate the sum of the powers of its digits
        while (originalNumber > 0)
        {
            int digit = originalNumber % 10;
            sum += (int)Math.Pow(digit, digits);
            originalNumber /= 10;
        }

        // Check if the number is an Armstrong number
        if (sum == number)
        {
            Console.WriteLine($"{number} is an Armstrong number.");
        }
        else
        {
            Console.WriteLine($"{number} is not an Armstrong number.");
        }
    }
}
