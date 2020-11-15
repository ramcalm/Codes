import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    /*
     * Complete the timeConversion function below.
     */
    static String timeConversion(String s) {
        int i;
        String res="";
        String comp[]=s.split(":");
        int time[]=new int[3];
        String merid=comp[2].substring(2);
        comp[2]=comp[2].substring(0,2);
        for(i=0;i<comp.length;i++)
        {
            time[i]=Integer.parseInt(comp[i]);
        }
        if(merid.compareTo("AM")==0)
        {
            if(time[0]==12)
            {
                res="00:"+comp[1]+":"+comp[2];
            }
            else
                res=comp[0]+":"+comp[1]+":"+comp[2];
        }
        if(merid.compareTo("PM")==0)
        {
            if(time[0]!=12)
                comp[0]=""+(12+time[0]);
            res=comp[0]+":"+comp[1]+":"+comp[2];
        }
        return res;
    }

    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scan.nextLine();

        String result = timeConversion(s);

        bw.write(result);
        bw.newLine();

        bw.close();
    }
}
