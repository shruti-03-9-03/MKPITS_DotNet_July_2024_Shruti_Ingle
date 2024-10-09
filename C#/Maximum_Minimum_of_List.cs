using System;
using System.Collections.Generic;

namespace the_Maximum_and_Minimum__n_a_List
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> numbers = new List<int> { 5, 2, 8, 1, 3 };
            FindMaxMin(numbers);
        }

        static void FindMaxMin(List<int> list)
        {
            if (list == null || list.Count == 0)
            {
                Console.WriteLine("The list is empty.");
                return;
            }

            int max = list[0];
            int min = list[0];

            foreach (int number in list)
            {
                if (number > max)
                {
                    max = number;
                }
                if (number < min)
                {
                    min = number;
                }
            }

            Console.WriteLine($"Maximum value: {max}");
            Console.WriteLine($"Minimum value: {min}");
            Console.Read();

        }
    }
}

