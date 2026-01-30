/////////////////////////////// DISPLAY ONLY DIRECTORIES //////////////////////////////////
import java.io.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////
//
//    Author        : Neha Navin Desai
//    Date          : 30/01/2025
//    Class Name    : program3
//    Description   : Display only sub-directories
//
///////////////////////////////////////////////////////////////////////////////////////////

class program3
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
                if(fArr[i].isDirectory())
                {
                    System.out.println(fArr[i].getName());
                }
            }
        }
        else
        {
            System.out.println("There is no such folder");
        }
    }
}
