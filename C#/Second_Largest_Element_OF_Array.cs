using System;

class Program
{
    static void Main()
    {
        // Define the array
        int[] numbers = { 12, 35, 1, 10, 34, 1 };

        // Check if the array has at least two distinct elements
        if (numbers.Length < 2)
        {
            Console.WriteLine("Array must contain at least two elements.");
            return;
        }

        int largest = int.MinValue;
        int secondLargest = int.MinValue;

        // Find the largest and second largest elements
        foreach (int num in numbers)
        {
            if (num > largest)
            {
                secondLargest = largest;
                largest = num;
            }
            else if (num > secondLargest && num != largest)
            {
                secondLargest = num;
            }
        }

        if (secondLargest == int.MinValue)
        {
            Console.WriteLine("No second 
