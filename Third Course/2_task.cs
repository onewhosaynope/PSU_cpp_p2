using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;
using System.Threading;

namespace New_String
{
    class Class1
    {
        class String
        {
            static void main(string[] args)
            {
                Stopwatch stopWatch = new Stopwatch();
                char c;
                string s = "Я безумно рад, что работает.";
                Console.WriteLine("Выведем исходный массив символов S:");
                Console.WriteLine(s, "\n\n");
                Console.WriteLine("Введите символ перед которым необходимо вставить строку S0");
                c = (char)Console.Read();
                string s0 = "  --  ";
                stopWatch.Start();
                input(s, s0, c);
                transform(ref s, s0, c);
                Console.WriteLine("Полученная строка: \n");
                Console.WriteLine(s, "\n");
                TimeSpan ts = stopWatch.Elapsed;
                string elapsedTime = string.Format("{0:00}.{1:00}",
                ts.Seconds, ts.Milliseconds);
                Console.WriteLine("RunTime " + elapsedTime);
            }
            static void input(string s, string s0, char c)
            {
                Console.WriteLine("Выведем исходный массив символов S0:\n");
                Console.WriteLine(s0, "\n");
                Console.WriteLine("Вставить S0 перед всеми вхождениями символа - 'а' ");
            }

            static void transform(ref string s, string s0, char c)
            {
                for (int i = 0; i < s.Length; ++i)
                {
                    if (s[i] == c)
                    {
                        s = s.Insert(i, s0);
                        i += 7;
                    }
                }
            }
        }
    }
}
