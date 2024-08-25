using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;

namespace BookShop
{
    public class Book
    {
        
        private string author;
        private string title;
        private decimal price;
        private string publisher;
        public void AssignValues(string author,string title,decimal price,string publisher)
        {
            this.author = author;
            this.title = title;
            this.price = price;
            this.publisher = publisher;
        }
        public void DisplayValues()
        {
            Console.WriteLine("Author:" +author);
            Console.WriteLine("Title:" +title);
            Console.WriteLine("Price: "+price); 
            Console.WriteLine("Publisher: "+publisher);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            
            Book myBook = new Book();

           
            myBook.AssignValues("walter isaacson","steve jobs",500,"simon & schuster");
            myBook.DisplayValues();

           
            Console.Read();
        }
    }
}