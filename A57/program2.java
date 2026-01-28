// Accept file name and check whether it is regular file or not

import java.io.File;
import java.util.Scanner;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        if(fobj.exists() && fobj.isFile())
        {
            System.out.println("It is a regular file");
        }
        else
        {
            System.out.println("It is not a regular file");
        }
    }
}
