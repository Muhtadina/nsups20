/*
 * PS19 Solution Q
 */

package com.mycompany.psq;
import java.util.*;

public class PsQ {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        //MidTime(s1);
        System.out.println(MidTime(s2));
    }
    
    public static int MidTime(String str){
        char h1 = str.charAt(1);
        int h2 = str.charAt(0);
	int hh = (h2*10 + h1%10); 
        return hh;
    }
}
/**
void timeConversion(string str)
{
	int h1 = (int)str[1] - '0';
	int h2 = (int)str[0] - '0';
	int hh = (h2*10 + h1%10);

	// If time is in "AM"
	if (str[8] == 'A')
	{
		if (hh==12)
		{
			cout << "00";
			for (int i=2; i<=7; i++)
				cout << str[i];
		}
		else
		{
			for (int i=0; i<=7; i++)
				cout << str[i];
		}
	}

	// If time is in "PM"
	else
	{
		if (hh==12)
		{
			cout << "12";
			for (int i=2; i<=7; i++)
				cout << str[i];
		}
		else
		{
			hh = hh + 12;
			cout << hh;
			for (int i=2; i<=7; i++)
				cout << str[i];
		}
	}
}**/