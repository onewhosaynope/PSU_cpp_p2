using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;
class Matrix_Laba_1
{
    static void main(string[] args)
    {
        const int n = 100;
        const int m = 1000;
        Stopwatch stopWatch = new Stopwatch();
        int[,] array = new int[n, m];
        stopWatch.Start();
        matrixInitialization(ref array, n, m);
        matrixTransform(ref array, n, m);
        printResultArray(ref array, n, m);
        stopWatch.Stop();
        TimeSpan ts = stopWatch.Elapsed;
        string elapsedTime = String.Format("{0:00}.{1:00}", ts.Seconds, ts.Milliseconds);
        Console.WriteLine("RunTime " + elapsedTime);
    }
    static void matrixInitialization(ref int[,] array, int n, int m)
    {
        Console.WriteLine("Исходная матрица:");
        Random random = new Random();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                array[i, j] = random.Next(100);
                Console.Write("{0,4}", array[i, j]);
            }
            Console.WriteLine();
        }
        return;
    }
    static void matrixTransform(ref int[,] array, int n, int m)
    {
        int min = 1000;
        int max = -1;
        int i, j;
        int idMin = 0, idMax = 0;
        for (j = 0; j < m; j++)
        {
            for (i = 0; i < n; i++)
            {
                if (min > array[i, j])
                {
                    min = array[i, j];
                    idMin = i;
                }
                if (max < array[i, j])
                {
                    max = array[i, j];
                    idMax = i;
                }
            }
            array[idMin, j] = max;
            array[idMax, j] = min;
            min = 1000;
            max = -1;
        }

    }

    static void printResultArray(ref int[,] array, int n, int m)
    {
        int i, j;
        Console.WriteLine("Полученная матрица: ");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                Console.Write("{0,4}", array[i, j]);
            }
            Console.WriteLine();
        }
    }
}

