// Program 1
// Display total number of bytes from file

import java.io.*;
import java.util.*;

class program62_1
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        FileInputStream fin = new FileInputStream(FileName);

        int data = 0;
        int Count = 0;

        while((data = fin.read()) != -1)
        {
            Count++;
        }

        fin.close();

        System.out.println("Total bytes in file : " + Count);
    }
}

/*
Input  : Enter file name :
         Demo.txt
Output : Total bytes in file : 128
*/
