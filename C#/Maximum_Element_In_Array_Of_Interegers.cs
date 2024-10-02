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

        // Initialize the maximum value to the first element of the array
        int max = array[0];

        // Find the maximum element in the array
        for (int i = 1; i < n; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
            }
        }

        // Print the maximum element
        Console.WriteLine("The maximum element in the array is: " + max);
    }
}
