// Program 2
// Display name of largest file from directory

import java.io.*;
import java.util.*;

class program60_2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            long MaxSize = 0;
            File LargestFile = null;

            for(File f : files)
            {
                if(f.isFile() && f.length() > MaxSize)
                {
                    MaxSize = f.length();
                    LargestFile = f;
                }
            }

            if(LargestFile != null)
            {
                System.out.println("Largest file : " + LargestFile.getName());
            }
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
Output : Largest file : Demo.java
*/
