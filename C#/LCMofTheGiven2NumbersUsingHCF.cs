using System;

class Program
{
    static void Main()
    {
        Console.Write("Input 1st number for LCM: ");
        int num1 = Convert.ToInt32(Console.ReadLine());

        Console.Write("Input 2nd number for LCM: ");
        int num2 = Convert.ToInt32(Console.ReadLine());

        int hcf = CalculateHCF(num1, num2);
        int lcm = (num1 * num2) / hcf;

        Console.WriteLine($"The LCM of {num1} and {num2} is: {lcm}");
    }

    static int CalculateHCF(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a; // Last non-zero remainder is the HCF
    }
}
