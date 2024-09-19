using System;

class Program
{
    // Function to check if a number is prime
    static bool IsPrime(int num)
    {
        if (num <= 1)
        {
            return false; // Numbers less than or equal to 1 are not prime
        }
        if (num <= 3)
        {
            return true; // 2 and 3 are prime numbers
        }
        if (num % 2 == 0 || num % 3 == 0)
        {
            return false; // Numbers divisible by 2 or 3 are not prime
        }
        for (int iCout = 5; iCout * iCout <= num; iCout += 6)
        {
            if (num % iCout == 0 || num % (iCout + 2) == 0)
            {
                return false; // Check divisibility by numbers of the form 6k ± 1
            }
        }
        return true;
    }

    static void Main()
    {
        int number;

        // Input a number
        Console.Write("Input a number: ");
        number = int.Parse(Console.ReadLine());

        // Check if the number is prime
        if (IsPrime(number))
        {
            Console.WriteLine($"{number} is a prime number.");
        }
        else
        {
            Console.WriteLine($"{number} is not a prime number.");
        }
    }
}
