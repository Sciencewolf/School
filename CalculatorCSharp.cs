using System;

namespace Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("\nWelcome in sciencewolf calculator\n\nWrite what operation want you to do\n\n");
            char a = Convert.ToChar(Console.ReadLine());
            string str = "";
            if (a == '+')str = "add";
            if (a == '-')str = "subtract";
            if (a == '*')str = "multiple";
            if (a == '/')str = "divide";
            Console.WriteLine("\nNow write two number to " + str + "\n\n");
            int b = Convert.ToInt32(Console.ReadLine());
            int c = Convert.ToInt32(Console.ReadLine());
            int d = 0;
            if (a == '+')d = b+c;
            if (a == '-')d = b-c;
            if (a == '*')d = b*c;
            if (a == '/')d = b/c;
            Console.WriteLine("Wait........\n\n");
            System.Threading.Thread.Sleep(1000);
            Console.WriteLine("The result is: " + d + "\n\n");
        }
    }
}
