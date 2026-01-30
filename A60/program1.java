// Program 1
// Accept directory name from user and calculate total size of all files

import java.io.*;
import java.util.*;

class program60_1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        long TotalSize = 0;

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            for(File f : files)
            {
                if(f.isFile())
                {
                    TotalSize = TotalSize + f.length();
                }
            }

            System.out.println("Total size of all files : " + TotalSize + " bytes");
        }
        else
        {
            System.out.println("Directory not found");
        }
    }
}

/*
Input  : Enter directory name :
         Marvellous
Output : Total size of all files : 45210 bytes
*/
