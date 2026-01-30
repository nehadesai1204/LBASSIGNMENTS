// Program 2
// Copy first N bytes into new file

import java.io.*;
import java.util.*;

class program62_2
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name : ");
        String Src = sobj.nextLine();

        System.out.println("Enter number of bytes : ");
        int N = sobj.nextInt();

        FileInputStream fin = new FileInputStream(Src);
        FileOutputStream fout = new FileOutputStream("FirstNBytes.txt");

        int data = 0;
        int Count = 0;

        while((data = fin.read()) != -1 && Count < N)
        {
            fout.write(data);
            Count++;
        }

        fin.close();
        fout.close();

        System.out.println("First " + N + " bytes copied successfully");
    }
}

/*
Input  : File : Demo.txt
         N : 10
Output : First 10 bytes copied successfully
*/
