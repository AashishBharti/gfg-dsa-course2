import java.util.Scanner;
import java.util.*;
import java.io.*;

public class PalindromeCheck {
    public static boolean isPalindrome(String str) {
        int s = 0, e = str.length() - 2;
        while (s <e) {
            if (str.charAt(s) != str.charAt(e)) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        if (isPalindrome(str)) {
            System.out.println(str + " is a palindrome.");
        } else {
            System.out.println(str + " is not a palindrome.");
        }
    }
}
