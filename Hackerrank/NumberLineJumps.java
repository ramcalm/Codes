import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the kangaroo function below.
    static String kangaroo(int x1, int v1, int x2, int v2) {
        boolean result=false;
        if(v1<=v2)
            result=false;
        else
        {
            while(x1<x2)
            {
                x1=x1+v1;
                x2=x2+v2;

                if(x1==x2)
                    result=true;
            }
        }

        if(result)
            return("YES");
        else
            return("NO");
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int x1=in.nextInt();
        int v1=in.nextInt();
        int x2=in.nextInt();
        int v2=in.nextInt();
        System.out.println(kangaroo(x1,v1,x2,v2));
    }
}
