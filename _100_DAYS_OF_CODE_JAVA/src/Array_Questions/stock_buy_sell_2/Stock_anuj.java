package Array_Questions.stock_buy_sell_2;

public class Stock_anuj {
   static int solution(int []arr){
       int ans = 0  ;
       for (int i = 1 ; i<arr.length ; i++){
           if(arr[i]>arr[i-1]){
               ans = ans + arr[i]-arr[i-1];
           }
       }
       return ans ;
   }
    public static void main(String[]args){
      int [] arr ={5,2,6,1,4,7,3,6};
        System.out.println(solution(arr));

    }
}
