using System;
using System.Linq;

class Program
{
    static void Main()
    {
        // Define an array with duplicate elements
        int[] numbers = { 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9 };

        Console.WriteLine("Original array:");
        PrintArray(numbers);

        // Remove duplicates using LINQ's Distinct method
        int[] uniqueNumbers = numbers.Distinct().ToArray();

        Console.WriteLine("\nArray after removing duplicates:");
        PrintArray(uniqueNumbers);
    }

    static void PrintArray(int[] arr)
    {
        foreach (int num in arr)
        {
            Console.Write(num + " ");
        }
        Console.WriteLine();
    }
}
