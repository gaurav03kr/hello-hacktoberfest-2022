import java.util.Scanner;

public class peakelement {
    static int getPeak(int arr[],int n){
        int low= 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if((mid==0 || arr[mid-1]<=arr[mid]) && (mid == n-1||arr[mid+1]<=arr[mid])){
                return arr[mid];
            }
            if(mid>0 && arr[mid-1]>=arr[mid])
                high = mid-1;

            else
                low = mid+1;
        }
        return -1;
    }
    public static void main(String args[]){
        int n;
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter the total number of Elements ");

        n=sc.nextInt();

        int[] arr = new int[10];
        System.out.println("Enter Each Element ");
        for(int i=0; i<n; i++)
        {

            arr[i]=sc.nextInt();
        }
        System.out.println("The Peak element in the given Elements is : "+ getPeak(arr,n));
    }
}
