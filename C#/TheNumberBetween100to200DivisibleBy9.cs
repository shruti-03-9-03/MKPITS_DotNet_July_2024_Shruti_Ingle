using System;

class Program
{
    static void Main()
    {
        int iCount, sum = 0;

        Console.WriteLine("Numbers between 100 and 200, divisible by 9:");

        // Loop through numbers between 100 and 200
        for (iCount = 100; iCount <= 200; iCount++)
        {
            if (iCount % 9 == 0)
            {
                Console.Write(iCount + " ");
                sum += iCount;  // Add the number to the sum
            }
        }

        // Print the sum
        Console.WriteLine("\nThe sum: " + sum);
    }
}