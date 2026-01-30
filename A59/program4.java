//////////////////////////// COUNT FILES AND FOLDERS //////////////////////////////////////
import java.io.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////
//
//    Author        : Neha Navin Desai
//    Date          : 29/01/2025
//    Class Name    : program4
//    Description   : Count total files and folders
//
///////////////////////////////////////////////////////////////////////////////////////////

class program4
{
    public static void main(String A[])
    {
        int iFile = 0, iFolder = 0;
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
                    iFile++;
                }
                else if(fArr[i].isDirectory())
                {
                    iFolder++;
                }
            }

            System.out.println("Total files   : " + iFile);
            System.out.println("Total folders : " + iFolder);
        }
        else
        {
            System.out.println("There is no such folder");
        }
    }
}
