using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Check_if_a_list_contain_a_value
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> numbers = new List<int> { 5, 2, 8, 1, 3 };
            int valueToCheck = 8;

            bool containsValue = ContainsValue(numbers, valueToCheck);

            if (containsValue)
            {
                Console.WriteLine($"The list contains the value {valueToCheck}.");
            }
            else
            {
                Console.WriteLine($"The list does not contain the value {valueToCheck}.");
            }
            Console.Read();
        }

        static bool ContainsValue(List<int> list, int value)
        {
            return list.Contains(value);
        }
        
    }
}

