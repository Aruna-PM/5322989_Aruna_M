import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'plusMinus' function below.
     *
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static void plusMinus(List<Integer> arr) {
    // Write your code here
    float Pos=0 , Neg=0, Zero = 0;
    int len = arr.size();
    for(int i=0;i<len;i++){
        if(arr.get(i) > 0){
            Pos += 1; 
        }
        else if(arr.get(i) < 0){
            Neg += 1;
        }
        else{
            Zero += 1;
        }
    }
    
        System.out.printf("%.6f\n",Pos/len);
        System.out.printf("%.6f\n",Neg/len);
        System.out.printf("%.6f\n",Zero/len);
        
        }
    }
    
    
public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        String[] arrTemp = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        List<Integer> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int arrItem = Integer.parseInt(arrTemp[i]);
            arr.add(arrItem);
        }

        Result.plusMinus(arr);

        bufferedReader.close();
    }
}