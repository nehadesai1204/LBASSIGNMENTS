// Program 4
// Display files having given extension

import java.io.*;
import java.util.*;

class program60_4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String DirName = sobj.nextLine();

        System.out.println("Enter file extension : ");
        String Ext = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            System.out.println("Files with extension " + Ext + " :");

            for(File f : files)
            {
                if(f.isFile() && f.getName().endsWith(Ext))
                {
                    System.out.println(f.getName());
                }
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
         Enter file extension :
         .java
Output : Files with extension .java :
         Demo.java
         Hello.java
*/
