using System;

class Program
{
    static void Main()
    {
        Console.Write("Input 1st number for LCM: ");
        int num1 = Convert.ToInt32(Console.ReadLine());

        Console.Write("Input 2nd number for LCM: ");
        int num2 = Convert.ToInt32(Console.ReadLine());

        int lcm = CalculateLCM(num1, num2);

        Console.WriteLine($"The LCM of {num1} and {num2} is: {lcm}");
    }

    static int CalculateLCM(int a, int b)
    {
        int max = (a > b) ? a : b; // Start from the maximum of a and b

        while (true)
        {
            if (max % a == 0 && max % b == 0)
            {
                return max; // Found the LCM
            }
            max++; // Increment max to check the next potential LCM
        }
    }
}