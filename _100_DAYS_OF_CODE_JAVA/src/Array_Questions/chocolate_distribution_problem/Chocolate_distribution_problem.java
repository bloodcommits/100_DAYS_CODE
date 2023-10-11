package Array_Questions.chocolate_distribution_problem;

import java.util.Arrays;

public class Chocolate_distribution_problem {
    static int solution(int[]arr , int k){
        int ans=Integer.MAX_VALUE;

        Arrays.sort(arr); // sorted the array

//        System.out.println(Arrays.toString(arr));

        int forward = k-1 ;
        for (int i = 0 ; i<arr.length ; i++){

            if(forward<arr.length){

                int lol = arr[forward] - arr[i];

//                System.out.println( arr[forward]+"-"+ arr[i]+" "+lol);
//
                ans = Math.min(ans , lol);

                forward = forward + 1;
//                System.out.println("i am forward "+ forward);

            }





        }



        return ans;
    }

    public static void main (String[]args){

        int arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50} ;
        int m = 7  ;
        System.out.println(solution(arr , m));



    }
}
