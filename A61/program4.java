// Program 4
// Merge two files into one output file

import java.io.*;
import java.util.*;

class program61_4
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first file name : ");
        String File1 = sobj.nextLine();

        System.out.println("Enter second file name : ");
        String File2 = sobj.nextLine();

        System.out.println("Enter output file name : ");
        String OutFile = sobj.nextLine();

        FileOutputStream fout = new FileOutputStream(OutFile);

        FileInputStream fin1 = new FileInputStream(File1);
        FileInputStream fin2 = new FileInputStream(File2);

        int data = 0;

        while((data = fin1.read()) != -1)
        {
            fout.write(data);
        }

        while((data = fin2.read()) != -1)
        {
            fout.write(data);
        }

        fin1.close();
        fin2.close();
        fout.close();

        System.out.println("Files merged successfully");
    }
}

/*
Input  : File1 : A.txt
         File2 : B.txt
         Output : Merge.txt
Output : Files merged successfully
*/
