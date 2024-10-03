using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Define two strings
        string string1 = "apple";
        string string2 = "pineapple";

        // Call the function to find common letters
        List<char> commonLetters = FindCommonLetters(string1, string2);

        // Print the common letters
        Console.WriteLine("Common letters: ");
        foreach (char letter in commonLetters)
        {
            Console.Write(letter + " ");
        }
    }

    static List<char> FindCommonLetters(string str1, string str2)
    {
        HashSet<char> set1 = new HashSet<char>(str1);
        HashSet<char> set2 = new HashSet<char>(str2);
        List<char> common = new List<char>();

        foreach (char letter in set1)
        {
            if (set2.Contains(letter))
            {
                common.Add(letter);
            }
        }

        return common;
    }
}
