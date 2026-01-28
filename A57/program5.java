// Accept directory name and display file names with size

import java.io.File;
import java.util.Scanner;

class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String dname = sobj.nextLine();

        File fobj = new File(dname);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            System.out.println("File Name\t\tSize (bytes)");
            for(int i = 0; i < files.length; i++)
            {
                if(files[i].isFile())
                {
                    System.out.println(files[i].getName() + "\t\t" + files[i].length());
                }
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}
