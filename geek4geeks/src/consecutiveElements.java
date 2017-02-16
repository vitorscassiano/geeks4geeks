import java.util.Scanner;

/**
 For a given string delete the elements which are appearing more than once consecutively. All letters are of lowercase.

 Input:
 The first line contains an integer 'T' denoting the total number of test cases. In each test cases,  a string will be inserted.
 */
public class consecutiveElements {
    private static char[] consecutiveElements(String arr){
        char[] origin   = arr.toCharArray();
        char[] temp     = new char[origin.length];
        int ocurr    = 0;
        int tcurr    = 0;

        for (int i = 0; i < origin.length; i++) {
            if(ocurr == tcurr){
                temp[0] = origin[0];
                ocurr++;
            } else {
                if(origin[ocurr] == temp[tcurr]){
                    ocurr++;
                   continue;
                } else {
                    temp[tcurr + 1] = origin[ocurr];
                    ocurr++;
                    tcurr++;
                }
            }
        }
        return temp;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t > 0) {
//            String value = "aababbccdcd";
            String value = sc.next();
            char[] foo = consecutiveElements(value);
            System.out.println(foo);
            t--;
        }
    }
}
