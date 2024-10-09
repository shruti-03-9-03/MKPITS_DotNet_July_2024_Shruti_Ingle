using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Convert_Array_to_List
{
    internal class Program
    {
        static void Main()
        {
            int[] numberArray = { 1, 2, 3, 4, 5 };

            List<int> numberList = ConvertArrayToList(numberArray);

            Console.WriteLine("List elements:");
            foreach (int number in numberList)
            {
                Console.WriteLine(number);
            }
            Console.Read();
        }

        static List<int> ConvertArrayToList(int[] array)
        {
            return new List<int>(array);
        }
    }
}
