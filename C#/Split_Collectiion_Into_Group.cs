using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main()
    {
        // Initialize a collection of strings
        List<string> words = new List<string> { "apple", "banana", "cherry", "date", "elderberry", "fig", "grape" };

        // Define the group size
        Console.Write("Enter the group size: ");
        int groupSize = int.Parse(Console.ReadLine());

        // Split the collection into groups and display the result
        var groupedWords = SplitIntoGroups(words, groupSize);
        
        Console.WriteLine("Grouped words:");
        int groupNumber = 1;
        foreach (var group in groupedWords)
        {
            Console.WriteLine($"Group {groupNumber}: {string.Join(", ", group)}");
            groupNumber++;
        }
    }

    // Method to split a collection into groups
    static IEnumerable<IEnumerable<string>> SplitIntoGroups(List<string> collection, int size)
    {
        for (int i = 0; i < collection.Count; i += size)
        {
            yield return collection.Skip(i).Take(size);
        }
    }
}
