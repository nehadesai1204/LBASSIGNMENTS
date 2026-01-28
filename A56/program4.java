// Accept file name and create new file if it does not exist

import java.io.File;
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
            System.out.println("File already exists");
        }
        else
        {
            fobj.createNewFile();
            System.out.println("File created successfully");
        }
    }
}
