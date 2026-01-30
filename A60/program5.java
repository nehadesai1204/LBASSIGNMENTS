// Program 5
// Check whether given path exists and identify file or directory

import java.io.*;
import java.util.*;

class program60_5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter path : ");
        String Path = sobj.nextLine();

        File fobj = new File(Path);

        if(fobj.exists())
        {
            System.out.println("Path exists");

            if(fobj.isFile())
            {
                System.out.println("It is a file");
            }
            else if(fobj.isDirectory())
            {
                System.out.println("It is a directory");
            }
        }
        else
        {
            System.out.println("Path does not exist");
        }
    }
}

/*
Input  : Enter path :
         Marvellous
Output : Path exists
         It is a directory
*/
