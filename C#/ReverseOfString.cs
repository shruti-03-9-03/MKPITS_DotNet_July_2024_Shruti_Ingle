using System;

class Program
{
    static void Main()
    {
        Console.Write("Input a string to reverse: ");
        string input = Console.ReadLine();

        // Reverse the string
        char[] charArray = input.ToCharArray();
        Array.Reverse(charArray);
        string reversedString = new string(charArray);

        // Output the result
        Console.WriteLine($"Reversed string is: {reversedString}");
    }
}
