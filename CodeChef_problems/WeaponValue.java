// problem link
// https://www.codechef.com/problems/SC31

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		while(t-- > 0){
		    int n = sc.nextInt();
		    sc.nextLine();
		    List<String> ls = new ArrayList<>();

		    String str;

		    for(int i = 0;i < n;i++){
		        str = sc.nextLine();
		        ls.add(str);
		    }

		    int[] arr = new int[10];

		    for(String s : ls){
		        for(int i = 0;i < 10;i++){
		            if(s.charAt(i) == '1'){
		                arr[i] += 1;
		            }
		        }
		    }

		    int total = 0;

		    for(int i : arr){
		        total += (i % 2);
		    }

		    System.out.println(total);
		}

	}
}
