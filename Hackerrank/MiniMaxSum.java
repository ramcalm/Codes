import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the miniMaxSum function below.
    static void miniMaxSum(long[] arr) {
        int i,j;
        long maxsum=arr[0]+arr[1]+arr[2]+arr[3],minsum=arr[0]+arr[1]+arr[2]+arr[3];
        for(i=0;i<arr.length;i++)
        {
            long sum=0;
            for(j=0;j<arr.length;j++)
            {
                if(i!=j)
                {
                   sum+=arr[j];
                }
            }
            if(minsum>sum)
                minsum=sum;
            if(maxsum<sum)
                maxsum=sum;
        }
        System.out.println(minsum+" "+maxsum);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        long[] arr = new long[5];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < 5; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        miniMaxSum(arr);

        scanner.close();
    }
}
