using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Remoting.Channels;
using System.Text;
using System.Threading.Tasks;


    namespace LectureDetailsApp
    {
        public class Lecturer
        {
         Data members
         public string Name { get; set; }
        public string Subject { get; set; }
        public string Course { get; set; }


            // Constructor to initialize values
            public Lecturer(string name, string subject, string course)
            {
                Name = name;
                Subject = subject;
                Course = course;

            }

            // Method to display lecturer details
            public void DisplayDetails()
            {
                Console.WriteLine("Lecturer Name: "+Name);
                Console.WriteLine("Subject: "+Subject);
                Console.WriteLine("Course: "+Course);
                Console.WriteLine();
            }
        }

        public class Program
        {
            public static void Main(string[] args)
            {
                // Create an array of lecturers
                Lecturer[] lecturers = new Lecturer[5];

                // Assign initial values
                lecturers[0] = new Lecturer("shruti ", "Mathematics", "Algebra 101");
                lecturers[1] = new Lecturer("karishma", "Physics", "Quantum Mechanics");
                lecturers[2] = new Lecturer("aishwarya", "Chemistry", "Organic Chemistry");
                lecturers[3] = new Lecturer("sejal", "Biology", "Genetics");
                lecturers[4] = new Lecturer("shreya", "Computer Science", "Data Structures");

                // Display details of all lecturers
                foreach (Lecturer lecturer in lecturers)
                {
                    lecturer.DisplayDetails();
                }
            Console.Read();
            }
        }
    }