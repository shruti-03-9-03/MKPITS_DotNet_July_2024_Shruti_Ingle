using System;

class Program
{
    static void Main()
    {
        Console.Write("Input the first number of the G.P. series: ");
        double firstTerm = Convert.ToDouble(Console.ReadLine());

        Console.Write("Input the number of terms in the G.P. series: ");
        int numberOfTerms = Convert.ToInt32(Console.ReadLine());

        Console.Write("Input the common ratio of G.P. series: ");
        double commonRatio = Convert.ToDouble(Console.ReadLine());

        double sum = 0;

        Console.WriteLine("The numbers for the G.P. series:");

        // Calculate each term and the sum
        for (int i = 0; i < numberOfTerms; i++)
        {
            double currentTerm = firstTerm * Math.Pow(commonRatio, i);
            Console.Write($"{currentTerm:F6} "); // Print current term with 6 decimal places
            sum += currentTerm;                  // Add to the sum
        }

        // Output the sum
        Console.WriteLine($"\nThe Sum of the G.P. series: {sum:F6}");
    }
}
