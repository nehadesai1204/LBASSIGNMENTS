// Program 5
// Read first 1KB data from Combined.bin

import java.io.*;

class program63_5
{
    public static void main(String args[]) throws Exception
    {
        FileInputStream fin = new FileInputStream("Combined.bin");
        FileOutputStream fout = new FileOutputStream("First1KB.bin");

        byte buffer[] = new byte[1024];
        int Ret = fin.read(buffer);

        if(Ret > 0)
        {
            fout.write(buffer, 0, Ret);
        }

        fin.close();
        fout.close();

        System.out.println("First 1KB data copied successfully");
    }
}

/*
Output : First 1KB data copied successfully
*/
