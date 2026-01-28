// Accept file name and calculate checksum

import java.io.File;
import java.io.FileInputStream;
import java.util.Scanner;

class program4
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
            int checksum = 0;

            while((ch = fin.read()) != -1)
            {
                checksum = checksum + ch;
            }

            fin.close();
            System.out.println("Checksum of file is : " + checksum);
        }
        else
        {
            System.out.println("File not found");
        }
    }
}
