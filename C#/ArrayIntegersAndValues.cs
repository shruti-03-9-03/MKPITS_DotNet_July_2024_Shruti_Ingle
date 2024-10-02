using System;

class Program
{
    static void Main()
    {
        // Declare an array of 10 integers
        int[] array = new int[10];

        // Initialize the array with values from 1 to 10
        for (int i = 0; i < array.Length; i++)
        {
            array[i] = i + 1;
        }

        // Print the values of the array
        Console.WriteLine("The array values are:");
        for (int i = 0; i < array.Length; i++)
        {
            Console.WriteLine(array[i]);
        }
    }
}
