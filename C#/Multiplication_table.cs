using System;

class Program
{
    static void Main()
    {
        // Prompt the user for the number and range
        Console.Write("Enter the number to print the multiplication table for: ");
        int number = int.Parse(Console.ReadLine());

        Console.Write("Enter the range (up to which multiple): ");
        int range = int.Parse(Console.ReadLine());

        Console.WriteLine($"\nMultiplication Table for {number} up to {range}:\n");

        // Generate and print the multiplication table
        for (int i = 1; i <= range; i++)
        {
            int result = number * i;
            Console.WriteLine($"{number} x {i} = {result}");
        }
    }
}
