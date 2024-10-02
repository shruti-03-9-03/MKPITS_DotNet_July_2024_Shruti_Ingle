using System;

class Program
{
    static void Main()
    {
        // Ask the user for the number of elements in the array
        Console.Write("Enter the number of elements: ");
        int n = int.Parse(Console.ReadLine());

        // Declare an array of size n
        int[] array = new int[n];

        // Input the array elements
        Console.WriteLine("Enter the elements of the array:");
        for (int i = 0; i < n; i++)
        {
            Console.Write("Element " + (i + 1) + ": ");
            array[i] = int.Parse(Console.ReadLine());
        }

        // Ask the user for the element to count
        Console.Write("Enter the element to count: ");
        int elementToCount = int.Parse(Console.ReadLine());

        // Count the occurrences of the given element
        int count = 0;
        foreach (int item in array)
        {
            if (item == elementToCount)
            {
                count++;
            }
        }

        // Print the result
        Console.WriteLine($"The element {elementToCount} occurs {count} time(s) in the array.");
    }
}
