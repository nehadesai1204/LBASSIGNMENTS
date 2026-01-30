// Program 5
// Split file into two halves

import java.io.*;
import java.util.*;

class program61_5
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        File file = new File(FileName);
        long FileSize = file.length();
        long HalfSize = FileSize / 2;

        FileInputStream fin = new FileInputStream(file);
        FileOutputStream fout1 = new FileOutputStream("FirstHalf.txt");
        FileOutputStream fout2 = new FileOutputStream("SecondHalf.txt");

        int data = 0;
        long Count = 0;

        while((data = fin.read()) != -1)
        {
            if(Count < HalfSize)
            {
                fout1.write(data);
            }
            else
            {
                fout2.write(data);
            }
            Count++;
        }

        fin.close();
        fout1.close();
        fout2.close();

        System.out.println("File split successfully");
    }
}

/*
Input  : File name : Demo.txt
Output : File split successfully
         Files created : FirstHalf.txt, SecondHalf.txt
*/
