using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;
using System.Threading;

class one_dim_array
{
    static void main(string[] args)
    {
        const int n = 100000;
        int[] array = new int[n];
        int[] newArray = new int[n];
        int newArraySize = 0;
        Random rand = new Random();
        Console.WriteLine("Исходный массив:");
        DateTime startTime = DateTime.Now;
        for (int i = 0; i < n; i++)
        {
            array[i] = rand.Next(1, 100);
            Console.Write(array[i]);
            Console.Write("\t");
        }
        Console.Write("\nПреобразованный массив:\n");
        for (int i = 0; i < n; i++)
        {
            if ((array[i] % 2) == 0)
            {
                newArray[i] = array[i];
                Console.Write(newArray[i]);
                Console.Write("\t");
                newArraySize++;
            }
        }
        Console.Write("\nРазмер нового массива = ", newArraySize);
        Console.WriteLine(newArraySize);
        TimeSpan ts = DateTime.Now.Subtract(startTime);
        string elapsedTime = String.Format("{0:00}.{1:00}", ts.Seconds, ts.Milliseconds);
        Console.WriteLine(elapsedTime, "RunTime");
    }
}
