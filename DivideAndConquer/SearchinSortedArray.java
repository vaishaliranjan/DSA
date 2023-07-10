package DivideAndConquer;

public class SearchinSortedArray {
    public static int search(int arr[], int tar, int si, int ei){
        if(si>=ei){
            return -1;
        }

        //kaam
        int mid=(si+ei)/2;

        //case found
        if(arr[mid]==tar){
            return mid;
        }
        //case 1- L1 
        if(arr[mid]>=arr[si]){

            //case a -left
            if(arr[si]<= tar && tar<=arr[mid]){
                return search(arr, tar, si, mid);
            }
            else{
                //case b- right
            return search(arr, tar, mid+1, ei);

            }
            
        }
        else{
            //case a right
            if(arr[mid]<=tar && tar<=arr[ei]){
                return search(arr, tar, mid, ei);
            }

            else{
                return search(arr, tar, si, mid-1);

            }

        }
    }
    public static void main(String args[]){
        int arr[]={4,5,6,7,0,1,2};
        int target=6; //output=4
        int idx=search(arr, target, 0, arr.length-1); 
        System.out.println(idx);
    }
}
