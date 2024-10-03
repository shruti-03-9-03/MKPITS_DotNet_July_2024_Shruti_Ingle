using System;

class Program
{
    static void Main()
    {
        // Define an array
        int[] numbers = { 1, 2, 3, 4, 5 };

        Console.WriteLine("Original array:");
        PrintArray(numbers);

        // Reverse the array
        Array.Reverse(numbers);

        Console.WriteLine("\nReversed array:");
        PrintArray(numbers);
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
