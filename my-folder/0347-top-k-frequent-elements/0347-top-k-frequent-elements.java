class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i:nums){
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        PriorityQueue<Integer>pq=new PriorityQueue<>((a,b)->mp.get(a)-mp.get(b));
        for(int num:mp.keySet()){
            pq.offer(num);
            if(pq.size()>k) pq.poll();
        }
        int[] res=new int[k];
        int j=0;
        while(!pq.isEmpty()){
            res[j++]=pq.poll();
        }
        return res;


    }
}