using System;

class Program
{
    static void Main()
    {
        Console.Write("Input a positive integer: ");
        int number = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine($"The pairs of prime numbers that sum up to {number} are:");

        for (int i = 2; i <= number / 2; i++)
        {
            if (IsPrime(i) && IsPrime(number - i))
            {
                Console.WriteLine($"{number} = {i} + {number - i}");
            }
        }
    }

    static bool IsPrime(int num)
    {
        if (num <= 1) return false;
        for (int i = 2; i <= Math.Sqrt(num); i++)
        {
            if (num % i == 0) return false;
        }
        return true;
    }
}
