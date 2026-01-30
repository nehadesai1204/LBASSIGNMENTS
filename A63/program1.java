// Program 1
// Copy file using BufferedInputStream and BufferedOutputStream

import java.io.*;
import java.util.*;

class program63_1
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name : ");
        String Src = sobj.nextLine();

        System.out.println("Enter destination file name : ");
        String Dest = sobj.nextLine();

        BufferedInputStream bin =
            new BufferedInputStream(new FileInputStream(Src));
        BufferedOutputStream bout =
            new BufferedOutputStream(new FileOutputStream(Dest));

        int data = 0;

        while((data = bin.read()) != -1)
        {
            bout.write(data);
        }

        bin.close();
        bout.close();

        System.out.println("File copied successfully using buffered streams");
    }
}

/*
Input  : Source : Demo.txt
         Destination : Copy.txt
Output : File copied successfully using buffered streams
*/
