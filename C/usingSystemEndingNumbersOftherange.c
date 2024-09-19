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
        for (int iCout = 5; iCout* iCout <= num; iCout+= 6)
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
        int start, end;

        // Input starting and ending numbers of the range
        Console.Write("Input starting number of range: ");
        start = int.Parse(Console.ReadLine());

        Console.Write("Input ending number of range: ");
        end = int.Parse(Console.ReadLine());

        Console.WriteLine($"The prime numbers between {start} and {end} are:");

        // Find and display prime numbers in the given range
        for (int iCout = start; iCout <= end; iCout++)
        {
            if (IsPrime(iCout))
            {
                Console.Write(iCout + " ");
            }
        }

        Console.WriteLine();
    }
}
