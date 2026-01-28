import java.io.File;
import java.util.Scanner;
// code to open a file
class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name :");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        if(fobj.exists())
        {
            System.out.println("File opened successfully");
        }
        else
        {
            System.out.println("File doesnt exist");
        }
    }
}

/*
Input  : Enter file name:
         PPA.txt
Output : File opened successfully
*/