// Program 3
// Copy all files from source directory to destination directory

import java.io.*;
import java.util.*;

class program63_3
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source directory : ");
        String SrcDir = sobj.nextLine();

        System.out.println("Enter destination directory : ");
        String DestDir = sobj.nextLine();

        File src = new File(SrcDir);
        File dest = new File(DestDir);

        if(!dest.exists())
        {
            dest.mkdir();
        }

        File files[] = src.listFiles();

        for(File f : files)
        {
            if(f.isFile())
            {
                FileInputStream fin = new FileInputStream(f);
                FileOutputStream fout =
                    new FileOutputStream(DestDir + "\\" + f.getName());

                int data = 0;
                while((data = fin.read()) != -1)
                {
                    fout.write(data);
                }

                fin.close();
                fout.close();
            }
        }

        System.out.println("All files copied successfully");
    }
}

/*
Input  : Source Dir : Data
         Destination Dir : Backup
Output : All files copied successfully
*/
