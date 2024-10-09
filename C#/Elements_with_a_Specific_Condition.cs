using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Find_Elements_with_a_Specific_Condition
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> numbers = new List<int> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

            List<int> evenNumbers = GetEvenNumbers(numbers);

            Console.WriteLine("Even numbers:");
            foreach (int number in evenNumbers)
            {
                Console.WriteLine(number);
            }
            Console.Read();
        }

        static List<int> GetEvenNumbers(List<int> list)
        {
            return list.Where(number => number % 2 == 0).ToList();
        }
    }
}
