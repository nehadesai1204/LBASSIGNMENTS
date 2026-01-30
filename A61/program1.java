// Program 1
// Copy data from source file to destination file (byte by byte)

import java.io.*;
import java.util.*;

class program61_1
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name : ");
        String Src = sobj.nextLine();

        System.out.println("Enter destination file name : ");
        String Dest = sobj.nextLine();

        FileInputStream fin = new FileInputStream(Src);
        FileOutputStream fout = new FileOutputStream(Dest);

        int data = 0;

        while((data = fin.read()) != -1)
        {
            fout.write(data);
        }

        fin.close();
        fout.close();

        System.out.println("File copied successfully");
    }
}

/*
Input  : Source file : Demo.txt
         Destination file : Copy.txt
Output : File copied successfully
*/
