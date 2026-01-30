
////////////////////////// DISPLAY FILE WITH ABSOLUTE PATH ////////////////////////////////
import java.io.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////
//
//    Author        : Neha Navin Desai
//    Date          : 29/01/2025
//    Class Name    : program5
//    Description   : Display file name with absolute path
//
///////////////////////////////////////////////////////////////////////////////////////////

class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder : ");
        String foldername = sobj.nextLine();

        File fobj = new File(foldername);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            File fArr[] = fobj.listFiles();
            System.out.println("Folder is present");

            for(int i = 0; i < fArr.length; i++)
            {
                if(fArr[i].isFile())
                {
                    System.out.println("File name : " + fArr[i].getName());
                    System.out.println("Path      : " + fArr[i].getAbsolutePath());
                }
            }
        }
        else
        {
            System.out.println("There is no such folder");
        }
    }
}
