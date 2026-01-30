// Program 3
// Display name of smallest file from directory

import java.io.*;
import java.util.*;

class program60_3
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

            long MinSize = Long.MAX_VALUE;
            File SmallestFile = null;

            for(File f : files)
            {
                if(f.isFile() && f.length() < MinSize)
                {
                    MinSize = f.length();
                    SmallestFile = f;
                }
            }

            if(SmallestFile != null)
            {
                System.out.println("Smallest file : " + SmallestFile.getName());
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
Output : Smallest file : Test.txt
*/
