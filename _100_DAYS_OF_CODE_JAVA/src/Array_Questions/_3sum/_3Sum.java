package Array_Questions._3sum;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class _3Sum {


    static List<List<Integer>> solution(int target , int[]arr){

        List<List<Integer>> result = new ArrayList<>();


        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
        for(int i = 0 ; i <arr.length ;i++){
            if(i>1 && arr[i]==arr[i-1]){
                System.out.println("contiued");
                continue;
            }
            int j =i+1;
            int k = arr.length-1;

            while(j<k){
//                System.out.println("into while loop right now");


            int sum = arr[i]+arr[j]+arr[k];
            if(sum>target){

                System.out.println("into if right now and sum is "+sum);
                j++;
            }
            else if(sum<target){

                System.out.println("into else if right now and sum is "+sum);
                k--;
            }
            else{
                System.out.println("into else condition right now");
                List<Integer> ans = new ArrayList<>();
                ans.add(arr[i]);
                ans.add(arr[j]);
                ans.add(arr[k]);
                System.out.println("added"+ans);
                result.add(ans);
                j++;
                k--;
                while(j<k && arr[j-1]==arr[j]){
                    j++;
                }while(j<k && arr[k+1]==arr[k]){
                    k--;
                }
            }
            }
        }

return result ;
    }

    public static void main(String[] args) {
        int[] arr ={1,-1,-1,0};
        System.out.println( solution(0 , arr));






    }
}
