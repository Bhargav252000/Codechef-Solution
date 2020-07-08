import java.util.Arrays;
import java.util.Scanner;
//import java.util.*;
/**
 * DRCHEF
 */

public class DRCHEF {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int test = scan.nextInt();
        
        while(test-->0){
            int minDays = 0;
            int N = scan.nextInt();
            int X = scan.nextInt();
            int []arr = new int [N];
            for(int i=0; i<N; i++){
                arr[i] = scan.nextInt();
            }
            Arrays.sort(arr);

            for(int i=0; i<N; i++){
                if(X >= arr[i]){
                    minDays++;
                    X = Math.max(X, 2 * arr[i]);
                    continue;
                }
                int temp = arr[i];
                while(temp > 0){
                    minDays++;
                    temp = Math.min(temp, 2 * (temp-X));
                    X = 2 * X; 

                }
                X = 2 * arr[i];
            }

            System.out.println(minDays);
        }
        scan.close();
    }
}