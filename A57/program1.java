// Accept two file names, open first file and create second file
// and copy data from first file into newly created file

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Scanner;

class program1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name : ");
        String fname1 = sobj.nextLine();

        System.out.println("Enter destination file name : ");
        String fname2 = sobj.nextLine();

        File fobj1 = new File(fname1);
        File fobj2 = new File(fname2);

        if(fobj1.exists())
        {
            // Destination file is created here if it does not exist
            FileInputStream fin = new FileInputStream(fobj1);
            FileOutputStream fout = new FileOutputStream(fobj2);

            int ch;
            while((ch = fin.read()) != -1)
            {
                fout.write(ch);
            }

            fin.close();
            fout.close();

            System.out.println("File copied successfully");
        }
        else
        {
            System.out.println("Source file not found");
        }
    }
}
