// Program 3
// Append string at the end of file

import java.io.*;
import java.util.*;

class program61_3
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        System.out.println("Enter string to append : ");
        String Data = sobj.nextLine();

        FileOutputStream fout = new FileOutputStream(FileName, true);

        byte Arr[] = Data.getBytes();
        fout.write(Arr);

        fout.close();

        System.out.println("Data appended successfully");
    }
}

/*
Input  : File name : Demo.txt
         String : Hello World
Output : Data appended successfully
*/
