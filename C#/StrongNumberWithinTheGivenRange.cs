using System;

class Program
{
    static void Main()
    {
        Console.Write("Input starting range of number: ");
        int startRange = Convert.ToInt32(Console.ReadLine());

        Console.Write("Input ending range of number: ");
        int endRange = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("The Strong numbers are:");
        for (int num = startRange; num <= endRange; num++)
        {
            if (IsStrongNumber(num))
            {
                Console.Write(num + " ");
            }
        }
        Console.WriteLine();
    }

    // Function to check if a number is a Strong Number
    static bool IsStrongNumber(int number)
    {
        int sum = 0;
        int temp = number;

        // Calculate the sum of the factorials of the digits
        while (temp > 0)
        {
            int remainder = temp % 10; // Get the last digit
            sum += Factorial(remainder); // Add the factorial of the digit
            temp /= 10; // Remove the last digit
        }

        // Check if the sum of the factorials is equal to the original number
        return sum == number;
    }

    // Function to calculate factorial
    static int Factorial(int n)
    {
        if (n == 0 || n == 1)
            return 1;
        return n * Factorial(n - 1);
    }
}
