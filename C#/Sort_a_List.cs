using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sort_a_List
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> numbers = new List<int> { 5, 2, 8, 1, 3 };

            SortList(numbers);
        }

        static void SortList(List<int> list)
        {
          
            list.Sort();
            Console.WriteLine("List in ascending order:");//ascending order
            foreach (int number in list)
            {
                Console.WriteLine(number);
            }

            
            list.Sort((a, b) => b.CompareTo(a));
            Console.WriteLine("\nList in descending order:");//descending order
            foreach (int number in list)
            {
                Console.WriteLine(number);
            }
            Console.Read();
        }
    }
}
