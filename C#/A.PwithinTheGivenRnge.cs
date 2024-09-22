using System;

class Program
{
    static void Main()
    {
        Console.Write("Input the starting number of the A.P. series: ");
        int startingNumber = Convert.ToInt32(Console.ReadLine());

        Console.Write("Input the number of items for the A.P. series: ");
        int numberOfItems = Convert.ToInt32(Console.ReadLine());

        Console.Write("Input the common difference of A.P. series: ");
        int commonDifference = Convert.ToInt32(Console.ReadLine());

        int sum = 0;
        int currentTerm = startingNumber;

        Console.Write("The Sum of the A.P. series are:\n");
        for (int i = 0; i < numberOfItems; i++)
        {
            if (i > 0) Console.Write(" + ");
            Console.Write(currentTerm); // Print the current term
            sum += currentTerm; // Add to the sum
            currentTerm += commonDifference; // Move to the next term
        }

        Console.WriteLine($" = {sum}");
    }
}
