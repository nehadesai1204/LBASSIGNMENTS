// Accept file name and display contents on screen

import java.io.File;
import java.io.FileInputStream;
import java.util.Scanner;

class program2
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        if(fobj.exists())
        {
            FileInputStream fin = new FileInputStream(fobj);
            int ch;

            System.out.println("File contents are : ");
            while((ch = fin.read()) != -1)
            {
                System.out.print((char)ch);
            }
            fin.close();
        }
        else
        {
            System.out.println("File not found");
        }
    }
}
