using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Initialize a collection with some integers
        List<int> numbers = new List<int> { 1, 2, 3, 4, 5 };

        // Create an array with the same size as the collection
        int[] numbersArray = new int[numbers.Count];

        // Copy the collection to the array
        numbers.CopyTo(numbersArray);

        // Display the elements of the array
        Console.WriteLine("Elements in the array:");
        foreach (int number in numbersArray)
        {
            Console.Write(number + " ");
        }
    }
}
