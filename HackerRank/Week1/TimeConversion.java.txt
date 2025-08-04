import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'timeConversion' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static String timeConversion(String s) {
    // Write your code here
    //spliting time to hh:mm:ssAM/PM
    String Last = s.substring(8);
    String Minute = s.substring(2,8);
    int Hour = Integer.parseInt(s.substring(0,2));
    
    if(Last.equals("AM")){
        if(Hour == 12)
            Hour = 0; 
    }
    else{
        if(Hour != 12){
        Hour += 12;
    }}
    
    String hh = String.format("%02d", Hour);

    String Time = hh + Minute;

    
    return Time;
    }
}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();

        String result = Result.timeConversion(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
