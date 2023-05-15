package GFG_RANDOM;

public class Max_subset_sum {
    static long findMaxSubsetSum(int N, int[] arr) {
        long max = 0;
        for(int i = 1 ; i<arr.length ; i++){
            int a = arr[i-1];
            int b = arr[i];
            long sum =arr[i]+arr[i-1];
            System.out.println("i am the sum "+sum);
            max = sum;

            for(int j = 0 ; j<arr.length ; j++){
                if(arr[i]==arr[j]) {
                    System.out.println("continued");
                    continue;
                }
                if(arr[i-1]==arr[j]) {
                    System.out.println("continued");
                    continue;
                }
                sum = sum+arr[j];
                System.out.println(" i am max "+max);
                max = Math.max(max , sum);
            }
        }
        return max ;

    }
    public static void main(String[] args) {
        int []arr = {0, 2 ,0};
        System.out.println(findMaxSubsetSum(3 , arr));

    }
}
