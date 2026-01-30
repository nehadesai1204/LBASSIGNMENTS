// Program 3
// Copy last N bytes into new file

import java.io.*;
import java.util.*;

class program62_3
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        System.out.println("Enter number of bytes : ");
        int N = sobj.nextInt();

        File file = new File(FileName);
        long FileSize = file.length();

        FileInputStream fin = new FileInputStream(file);
        FileOutputStream fout = new FileOutputStream("LastNBytes.txt");

        fin.skip(FileSize - N);

        int data = 0;

        while((data = fin.read()) != -1)
        {
            fout.write(data);
        }

        fin.close();
        fout.close();

        System.out.println("Last " + N + " bytes copied successfully");
    }
}

/*
Input  : File : Demo.txt
         N : 8
Output : Last 8 bytes copied successfully
*/
