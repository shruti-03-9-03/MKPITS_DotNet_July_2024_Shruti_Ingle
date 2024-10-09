using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Remove_Elements_from_a_List
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<string> words = new List<string> { "apple", "banana", "cherry", "date", "kiwi" };
            RemoveElementFromList(words, "cherry");
        }

        static void RemoveElementFromList(List<string> list, string elementToRemove)
        {
            bool removed = list.Remove(elementToRemove);

            if (removed)
            {
            
                Console.WriteLine("'" + elementToRemove + "'  removed from the list.");

            }
            else
            {
                
                Console.WriteLine("'" + elementToRemove + "' not found in the List");
            }

            Console.WriteLine("Updated list:");
            foreach (string word in list)
            {
                Console.WriteLine(word);
            }
            Console.Read();
        }
    }
}
