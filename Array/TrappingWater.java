package Array;

public class TrappingWater {

    public static int trappedRainWater(int height[]){
        int trappedWater=0;
        int width=1;
        //calculate left max array
        //calculate right max array
        int leftMax[]=new int [height.length];
        leftMax[0]=height[0];
        for(int i=1;i<height.length;i++){
            leftMax[i]=Math.max(height[i], leftMax[i-1]);

        }

        int rightMax[]=new int [height.length];
        rightMax[height.length-1]=height[height.length-1];
        for(int i=height.length-2;i>=0;i--){
            rightMax[i]=Math.max(height[i], rightMax[i+1]);
            
        }


        //loop
        for(int i=0;i<height.length;i++){
           int waterLevel=Math.min(leftMax[i], rightMax[i]);
            trappedWater+=waterLevel-height[i];
        }
        //wl=min(leftmax,rightmax)
        //tw=wl-height
        return trappedWater;
    }
    public static void main(String args[]){
        int height[]={4,2,0,6,3,2,5};
        System.out.println(trappedRainWater(height));
    }
}
