using System;

class Program
{
    static void Main()
    {
        int number, icout, jcout, space;

        // Input number of rows for the upper half of the diamond
        Console.Write("Enter the number of rows for the diamond (half): ");
        number = int.Parse(Console.ReadLine());

        // Upper half of the diamond
        for (icout = 1; icout <= number; icout++)
        {
            // Print leading spaces
            for (space = 1; space <= number - icout; space++)
                Console.Write(" ");

            // Print stars
            for (jcout = 1; jcout <= (2 * icout - 1); jcout++)
                Console.Write("*");

            Console.WriteLine();
        }

        // Lower half of the diamond
        for (icout = number - 1; icout >= 1; icout--)
        {
            // Print leading spaces
            for (space = 1; space <= number - icout; space++)
                Console.Write(" ");

            // Print stars
            for (jcout = 1; jcout <= (2 * icout - 1); jcout++)
                Console.Write("*");

            Console.WriteLine();
        }
    }
}
