using System;

class Program
{
    // Function to print Pascal's triangle
    static void PrintPascalsTriangle(int rows)
    {
        for (int iCout = 0; iCout< rows; iCout++)
        {
            // Print leading spaces
            for (int space = 1; space <= rows -iCout; space++)
                Console.Write(" ");

            // Print coefficients of the current row
            int coef = 1;
            for (int jCout = 0; jCout <= iCout; jCout++)
            {
                if (jCout == 0 || jCout == iCout)
                {
                    coef = 1; // The first and last coefficient in each row is 1
                }
                else
                {
                    coef = coef * (iCout - jCout + 1) / jCout; // Calculate the coefficient
                }
                Console.Write(coef + " ");
            }

            Console.WriteLine();
        }
    }

    static void Main()
    {
        int numberOfRows;

        // Input number of rows
        Console.Write("Input number of rows: ");
        numberOfRows = int.Parse(Console.ReadLine());

        // Print Pascal's triangle
        PrintPascalsTriangle(numberOfRows);
    }
}
