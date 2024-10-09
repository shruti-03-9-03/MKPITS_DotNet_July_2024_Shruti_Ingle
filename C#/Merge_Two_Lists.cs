using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Merge_Two_Lists
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> list1 = new List<int> { 1, 3, 5, 7, 9 };
            List<int> list2 = new List<int> { 2, 4, 6, 8, 10 };

            List<int> mergedList = MergeLists(list1, list2);

            Console.WriteLine("Merged list:");
            foreach (int number in mergedList)
            {
                Console.WriteLine(number);
            }
            Console.Read();
        }

        static List<int> MergeLists(List<int> list1, List<int> list2)
        {
            List<int> mergedList = new List<int>(list1);
            mergedList.AddRange(list2);
            return mergedList;
        }
    }
}

