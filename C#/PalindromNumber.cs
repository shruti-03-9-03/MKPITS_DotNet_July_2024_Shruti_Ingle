using System;

class Program
{
    static void Main()
    {
        int num, reversedNum = 0, remainder, originalNum;

        // Input a number
        Console.Write("Input a number: ");
        num = int.Parse(Console.ReadLine());

        originalNum = num;

        // Reverse the number
        while (num != 0)
        {
            remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }

        // Check if the original number is equal to the reversed number
        if (originalNum == reversedNum)
        {
            Console.WriteLine($"{originalNum} is a palindrome number.");
        }
        else
        {
            Console.WriteLine($"{originalNum} is not a palindrome number.");
        }
    }
}
