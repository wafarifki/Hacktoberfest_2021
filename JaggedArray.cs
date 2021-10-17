using System;
class JaggedArray
{
    static void Main()
    {
        int[][] a = new int[2][];

        a[0] = new int[3] { 1, 2, 3 };
        a[1] = new int[4] { 4, 5, 6, 7 };

        for (int i = 0; i < a.Length; i++)
        {
            Console.Write("Element at ({0}): ", i);

            for (int j = 0; j < a[i].Length; j++)
            {
                Console.Write("{0}{1}", a[i][j], j == (a[i].Length - 1) ? "" : "\n");
            }
        }
    }
}
