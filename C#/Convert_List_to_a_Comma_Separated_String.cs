using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Convert_List_to_a_Comma_Separated_String
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<string> words = new List<string> { "apple", "banana", "cherry", "date" };

            string commaSeparated = ConvertListToCommaSeparatedString(words);

            Console.WriteLine("Comma-separated string:");
            Console.WriteLine(commaSeparated);
            Console.Read();
        }

        static string ConvertListToCommaSeparatedString(List<string> list)
        {
            return string.Join(", ", list);
        }
    }
}
