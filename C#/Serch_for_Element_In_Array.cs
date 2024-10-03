using System;

class Program
{
    static void Main()
    {
        // Define the array
        int[] numbers = { 10, 20, 30, 40, 50, 60, 70 };

        // Ask the user for the element to search
        Console.Write("Enter the number to search: ");
        int target = Convert.ToInt32(Console.ReadLine());

        // Search for the element
        int position = Array.IndexOf(numbers, target);

        // Check if the element is found
        if (position >= 0)
        {
            Console.WriteLine($"Element {target} found at position: {position}");
        }
        else
        {
            Console.WriteLine("Element not found in the array.");
        }
    }
}
