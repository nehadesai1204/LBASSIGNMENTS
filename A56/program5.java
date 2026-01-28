// Accept directory name and display all file names

import java.io.File;
import java.util.Scanner;

class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        if(fobj.exists() && fobj.isDirectory())
        {
            String arr[] = fobj.list();

            System.out.println("Files in directory are : ");
            for(int i = 0; i < arr.length; i++)
            {
                System.out.println(arr[i]);
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}
