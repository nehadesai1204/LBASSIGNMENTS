// Program 4
// Create backup copy of file

import java.io.*;
import java.util.*;

class program62_4
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        FileInputStream fin = new FileInputStream(FileName);

        String BackupName = FileName + "_backup";
        FileOutputStream fout = new FileOutputStream(BackupName);

        int data = 0;

        while((data = fin.read()) != -1)
        {
            fout.write(data);
        }

        fin.close();
        fout.close();

        System.out.println("Backup file created successfully");
    }
}

/*
Input  : File : Demo.txt
Output : Backup file created as Demo.txt_backup
*/
