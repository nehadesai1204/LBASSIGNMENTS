// Program 4
// Combine all files data into Combined.bin

import java.io.*;
import java.util.*;

class program63_4
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String DirName = sobj.nextLine();

        File dir = new File(DirName);
        File files[] = dir.listFiles();

        FileOutputStream fout = new FileOutputStream("Combined.bin");

        for(File f : files)
        {
            if(f.isFile())
            {
                FileInputStream fin = new FileInputStream(f);

                int data = 0;
                while((data = fin.read()) != -1)
                {
                    fout.write(data);
                }

                fin.close();
            }
        }

        fout.close();
        System.out.println("Combined.bin created successfully");
    }
}

/*
Input  : Directory : Data
Output : Combined.bin created successfully
*/
