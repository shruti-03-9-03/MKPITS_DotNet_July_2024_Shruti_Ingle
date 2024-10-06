using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Input two strings
        Console.Write("Enter the first string: ");
        string str1 = Console.ReadLine();

        Console.Write("Enter the second string: ");
        string str2 = Console.ReadLine();

        // Convert strings to lowercase to make comparison case-insensitive
        str1 = str1.ToLower();
        str2 = str2.ToLower();

        // Create hash sets for each string's characters
        HashSet<char> set1 = new HashSet<char>(str1);
        HashSet<char> set2 = new HashSet<char>(str2);

        // Find common letters by intersecting the sets
        set1.IntersectWith(set2);

        // Display common letters
        Console.WriteLine("Common letters in both strings:");
        foreach (char c in set1)
        {
            if (char.IsLetter(c))
            {
                Console.Write(c + " ");
            }
        }
    }
}
