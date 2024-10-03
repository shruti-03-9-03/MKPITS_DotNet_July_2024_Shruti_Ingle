using System;

class Program
{
    static void Main()
    {
        // Define two arrays
        int[] array1 = { 1, 3, 5, 7 };
        int[] array2 = { 2, 4, 6, 8 };

        // Merge the arrays
        int[] mergedArray = new int[array1.Length + array2.Length];
        array1.CopyTo(mergedArray, 0);
        array2.CopyTo(mergedArray, array1.Length);

        // Print the merged array
        Console.WriteLine("Merged array:");
        foreach (int num in mergedArray)
        {
            Console.Write(num + " ");
        }
    }
}
