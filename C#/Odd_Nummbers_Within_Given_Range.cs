using System;

class Program
{
    static void Main()
    {
        // Input range from the user
        Console.Write("Enter the starting number: ");
        int start = int.Parse(Console.ReadLine());

        Console.Write("Enter the ending number: ");
        int end = int.Parse(Console.ReadLine());

        Console.WriteLine("Odd numbers in the given range:");
        
        // Loop through the range and print odd numbers
        for (int i = start; i <= end; i++)
        {
            if (i % 2 != 0) // Check if the number is odd
            {
                Console.Write(i + " ");
            }
        }
    }
}
