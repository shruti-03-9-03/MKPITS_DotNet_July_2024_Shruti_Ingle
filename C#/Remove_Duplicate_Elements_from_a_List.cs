using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Remove_Duplicate_Elements_from_a_List
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> numbers = new List<int> { 1, 2, 2, 3, 4, 4, 5, 5, 5, 6 };

            List<int> uniqueNumbers = RemoveDuplicates(numbers);

            Console.WriteLine("List after removing duplicates:");
            foreach (int number in uniqueNumbers)
            {
                Console.WriteLine(number);
            }
            Console.Read();
        }

        static List<int> RemoveDuplicates(List<int> list)
        {
            HashSet<int> uniqueSet = new HashSet<int>(list);
            return new List<int>(uniqueSet);
        }
    }
}

