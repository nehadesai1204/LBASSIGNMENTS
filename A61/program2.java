// Program 2
// Copy data using byte[] buffer

import java.io.*;
import java.util.*;

class program61_2
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

        byte Buffer[] = new byte[1024];
        int Ret = 0;

        while((Ret = fin.read(Buffer)) != -1)
        {
            fout.write(Buffer, 0, Ret);
        }

        fin.close();
        fout.close();

        System.out.println("File copied successfully using buffer");
    }
}

/*
Input  : Source file : Demo.txt
         Destination file : Copy.txt
Output : File copied successfully using buffer
*/
