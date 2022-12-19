int hurdleRace(int k, vector<int> height) {
  int n=height.size();
  int a=0;
  for(int i=0;i<n;i++){
      if(a<height[i]){
          a=height[i];
      }
  }
  
  if(k>=a){
     return 0;
  }
  else return (a-k);
}
