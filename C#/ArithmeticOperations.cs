using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

    namespace ArithmeticOperationsApp
    {
        public class Arithmetic
        {
            
            private double Opera1;
            private double Opera2;

            
            public Arithmetic(double operand1, double operand2)
            {
                Opera1 = operand1;
                Opera2 = operand2;
            }

            
            public double Add()
            {
                return Opera1 + Opera2;
            }

            
            public double Subtract()
            {
                return Opera1 - Opera2;
            }

            
            public double Multiply()
            {
                return Opera1 * Opera2;
            }

            
            public double Divide()
            {
                if (Opera2 != 0)
                {
                    return Opera1 / Opera2;
                }
                else
                {
                    throw new DivideByZeroException("Cannot divide by zero.");
                }
            }
        }

        public class Program
        {
            public static void Main(string[] args)
            {
                
                Arithmetic arithmetic = new Arithmetic(10, 5);

               
                Console.WriteLine($"Addition: {arithmetic.Add()}");
                Console.WriteLine($"Subtraction: {arithmetic.Subtract()}");
                Console.WriteLine($"Multiplication: {arithmetic.Multiply()}");

                try
                {
                    Console.WriteLine($"Division: {arithmetic.Divide()}");
                }
                catch (DivideByZeroException ex)
                {
                    Console.WriteLine(ex.Message);
                }
            Console.Read();
            }
        }
    }
