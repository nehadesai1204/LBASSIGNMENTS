import java.io.File;
import java.io.FileOutputStream;
import java.util.Scanner;

class program3
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        if(fobj.exists())
        {
            FileOutputStream fout = new FileOutputStream(fobj, true);

            System.out.println("Enter data : ");
            String data = sobj.nextLine();

            for(int i = 0; i < data.length(); i++)
            {
                fout.write(data.charAt(i));
            }

            fout.close();
            System.out.println("Data written successfully");
        }
        else
        {
            System.out.println("File not found");
        }
    }
}
