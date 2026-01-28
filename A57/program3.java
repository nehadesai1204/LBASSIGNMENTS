// Accept directory name and create directory

import java.io.File;
import java.util.Scanner;

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String dname = sobj.nextLine();

        File fobj = new File(dname);

        if(fobj.exists())
        {
            System.out.println("Directory already exists");
        }
        else
        {
            fobj.mkdir();
            System.out.println("Directory created successfully");
        }
    }
}
