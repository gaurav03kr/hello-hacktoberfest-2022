package DSA.Arrays;

import java.util.Scanner;

public class StockBuyAndSell {
    static int maxProfit(int price[], int n)
    {
        int profit = 0;

        for(int i = 1; i < n; i++)
        {
            if(price[i] > price[i - 1])
                profit += price[i] - price[i -1];
        }

        return profit;
    }


    public static void main(String args[])
    {
        int n;
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter the number of stocks: ");

        n=sc.nextInt();

        int[] arr = new int[10];
        System.out.println("Enter stocks: ");
        for(int i=0; i<n; i++)
        {

            arr[i]=sc.nextInt();
        }

        System.out.println("Maximum Profit: "+maxProfit(arr, n));

    }

}

