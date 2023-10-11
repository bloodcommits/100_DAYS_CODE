package Array_Questions.MaximumPointsObtainfromCards;

import java.util.ArrayList;
import java.util.List;


// getting run time error


public class Obtain_max_score {
    static int sol(int[] arr , int k)
    {
        int ans=0 ;
        List<Integer> sums = new ArrayList<>();
        int sum = 0;
        for (int i = 0 ; i < arr.length ; i++)
        {
            sum = sum + arr[i];
            sums.add(sum);
        }
        int total = sums.get(arr.length-1);

        // sliding window approach
        //window = size - k -1 + i

        for (int i = 0; i <k ; i++) {


           int window_start = arr.length - k -1 - i-1 ;

            int window_end = arr.length - 1 - i ;

            if(window_start==0){
                ans = total - sums.get(window_end);
            }

           int window_start_sum = sums.get(window_start);

            int window_end_sum = sums.get(window_end);

//            System.out.println("window start "+ window_start + " window end " + window_end);

            int window_diff = window_end_sum - window_start_sum ;

//            System.out.println("windows difference " + window_diff);

            int total_difference = total - window_diff ;

//            System.out.println("total - windows differnce " + total_difference);

//            System.out.println("comparing " + ans +" " + total_difference );
            ans = Math.max(ans  , total_difference);

        }




                return  ans;
    }    public static void main(String[] args) {
        int[]arr = {1,2,3,4,5,6,1};
        int k = 3;
        System.out.println(sol(arr , k));

    }
}
