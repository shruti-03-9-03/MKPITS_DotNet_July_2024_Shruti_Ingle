using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Add_Elements_To_List_Of_Elements
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> numbers = new List<int>();
            AddElementsToList(numbers, new List<int> { 1, 2, 3, 4, 5 });
        }

        static void AddElementsToList(List<int> list, List<int> elementsToAdd)
        {
            list.AddRange(elementsToAdd);

            Console.WriteLine("List elements:");
            foreach (int number in list)
            {
                Console.WriteLine(number);
            }
            Console.Read();

        }
    }
}
