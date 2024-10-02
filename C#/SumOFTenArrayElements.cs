using System;

class Program
{
    static void Main()
    {
        // Array of 10 elements
        int[] array = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

        // Find the sum of the 1st (index 0) and 5th (index 4) elements
        int sum = array[0] + array[4];

        // Print the sum
        Console.WriteLine("The sum of the 1st and 5th elements is: " + sum);
    }
}
