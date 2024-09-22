using System;

class Program
{
    static void Main()
    {
        Console.Write("Input a number to check whether it is a Strong number: ");
        int num = Convert.ToInt32(Console.ReadLine());
        int sum = 0;
        int temp = num;

        // Calculate the sum of the factorials of the digits
        while (temp > 0)
        {
            int remainder = temp % 10; // Get the last digit
            sum += Factorial(remainder); // Add the factorial of the digit
            temp /= 10; // Remove the last digit
        }

        // Check if the sum of the factorials is equal to the original number
        if (sum == num)
        {
            Console.WriteLine($"{num} is a Strong number.");
        }
        else
        {
            Console.WriteLine($"{num} is not a Strong number.");
        }
    }

    // Function to calculate factorial
    static int Factorial(int n)
    {
        if (n == 0 || n == 1)
            return 1;
        return n * Factorial(n - 1);
    }
}
