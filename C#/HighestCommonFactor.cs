using System;

class Program
{
    static void Main()
    {
        Console.Write("Input 1st number for HCF: ");
        int num1 = Convert.ToInt32(Console.ReadLine());
        
        Console.Write("Input 2nd number for HCF: ");
        int num2 = Convert.ToInt32(Console.ReadLine());

        int hcf = HCF(num1, num2);

        Console.WriteLine($"HCF of {num1} and {num2} is: {hcf}");
    }

    static int HCF(int a, int b)
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
