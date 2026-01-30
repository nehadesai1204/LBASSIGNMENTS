// Program 5
// Handle all file related exceptions

import java.io.*;
import java.util.*;

class program62_5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter file name : ");
            String FileName = sobj.nextLine();

            FileInputStream fin = new FileInputStream(FileName);

            int data = 0;
            int Count = 0;

            while((data = fin.read()) != -1)
            {
                Count++;
            }

            fin.close();
            System.out.println("File opened successfully");
            System.out.println("Total bytes : " + Count);
        }
        catch(FileNotFoundException e)
        {
            System.out.println("Error : File not found");
        }
        catch(IOException e)
        {
            System.out.println("Error : Input Output exception");
        }
        catch(Exception e)
        {
            System.out.println("Error : Unknown exception");
        }
    }
}

/*
Input  : Enter file name :
         Demo.txt
Output : File opened successfully
         Total bytes : 120
*/
