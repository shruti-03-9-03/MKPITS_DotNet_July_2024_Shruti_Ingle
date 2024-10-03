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

        // Calculate the sum of the array elements
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += array[i];
        }

        // Print the sum
        Console.WriteLine("The sum of the array elements is: " + sum);
    }
}
