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
        public string Name;
        public string Subject;
        public string Course;
        public int NumberOfLectures;


        public Lecturer(string name,string subject,string course,int numberOfLectures)
        {
            Name = name;
            Subject = subject;
            Course = course;
            NumberOfLectures = numberOfLectures;
        }
        public void DisplayDetails()
        {
            Console.WriteLine("Lecture Name : " + Name);
            Console.WriteLine("Subject : " + Subject);
            Console.WriteLine("Course: " + Course);
            Console.WriteLine();
        }
        }
public class program
    {
        public static void Main(string[] args)
        {
            Lecturer[] lecturer = new Lecturer[5];

            lecturer[0] = new Lecturer("shruti","Mathemetics","Algebra 101",1);
            lecturer[1] = new Lecturer("Shreya","Physics","Quantum mechanics",1);
            lecturer[2]= new Lecturer("Aishu", "Chemestry", "Organic Chemistry", 1);
            lecturer[3] = new Lecturer("Sejal","Biology","Genetics",1);
            lecturer[4] = new Lecturer("Shreya","Computer Science","Data structure",1);


            foreach(Lecturer lecture in lecturer)
            {
                lecture.DisplayDetails();
            }
            for (int i=0;i< lecturer.Length;i++)
            {
                lecturer[i].DisplayDetails();
            }
            Console.ReadLine();

        }
    }   
}
    