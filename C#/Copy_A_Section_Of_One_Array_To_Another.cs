using System;

class Program
{
    static void Main()
    {
        // Initialize the source array
        int[] sourceArray = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

        // Define the destination array (size must be large enough to hold the copied section)
        int[] destinationArray = new int[5];

        // Ask user for the starting index and length of the section to copy
        Console.Write("Enter the starting index of the section to copy: ");
        int startIndex = int.Parse(Console.ReadLine());

        Console.Write("Enter the length of the section to copy: ");
        int length = int.Parse(Console.ReadLine());

        // Perform the array copy operation
        try
        {
            Array.Copy(sourceArray, startIndex, destinationArray, 0, length);

            // Display the elements of the destination array
            Console.WriteLine("Elements in the destination array:");
            foreach (int item in destinationArray)
            {
                Console.Write(item + " ");
            }
        }
        catch (ArgumentException e)
        {
            Console.WriteLine($"Error: {e.Message}");
        }
        catch (IndexOutOfRangeException e)
        {
            Console.WriteLine($"Error: {e.Message}");
        }
    }
}
