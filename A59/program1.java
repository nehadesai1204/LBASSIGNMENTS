////////////////////////////////// DISPLAY ALL FILES //////////////////////////////////////
import java.io.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////
//
//    Author        : Neha Navin Desai
//    Date          : 29/01/2025
//    Class Name    : program1
//     Description   : Display all files and folders from directory
//    Input         : Enter the name of folder :
//    Output        : Names of files and folders
//
///////////////////////////////////////////////////////////////////////////////////////////

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder : ");
        String foldername = sobj.nextLine();

        File fobj = new File(foldername);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            System.out.println("Folder is present");

            String Arr[] = fobj.list();

            for(int i = 0; i < Arr.length; i++)
            {
                System.out.println(Arr[i]);
            }
        }
        else
        {
            System.out.println("There is no such folder");
        }
    }
}
