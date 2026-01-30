// Program 2
// Compare time of normal streams and buffered streams

import java.io.*;
import java.util.*;

class program63_2
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name : ");
        String Src = sobj.nextLine();

        // Normal streams
        long start = System.currentTimeMillis();

        FileInputStream fin1 = new FileInputStream(Src);
        FileOutputStream fout1 = new FileOutputStream("NormalCopy.txt");

        int data = 0;
        while((data = fin1.read()) != -1)
        {
            fout1.write(data);
        }

        fin1.close();
        fout1.close();

        long end = System.currentTimeMillis();
        System.out.println("Time using normal streams : " + (end - start) + " ms");

        // Buffered streams
        start = System.currentTimeMillis();

        BufferedInputStream bin =
            new BufferedInputStream(new FileInputStream(Src));
        BufferedOutputStream bout =
            new BufferedOutputStream(new FileOutputStream("BufferedCopy.txt"));

        while((data = bin.read()) != -1)
        {
            bout.write(data);
        }

        bin.close();
        bout.close();

        end = System.currentTimeMillis();
        System.out.println("Time using buffered streams : " + (end - start) + " ms");
    }
}

/*
Output :
Time using normal streams : 45 ms
Time using buffered streams : 5 ms
*/
