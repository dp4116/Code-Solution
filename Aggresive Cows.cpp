bool isOk(int dis,vector<int> arr , int n ,  int c){
    int cnt = 1;
    int prev = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-prev>=dis){
            cnt++;
            prev = arr[i];
        }
    }
    if(cnt>=c){return true;}
    return false;
}
int chessTournament(vector<int> arr , int n ,  int c){
	// Write your code here
    sort(arr.begin(),arr.end());
    int low = 1;
    int high = arr[n-1]-arr[0];
    int res = 0;
    while(low<=high){
        int mid = (high+low)>>1;
        if(isOk(mid,arr,n,c)){
            res = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return res;
}
