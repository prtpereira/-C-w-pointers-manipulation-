

 int pruneAB (ABin *a, int l) {
     int res=0;
     if(l>0 && (*a)!=NULL){
         res+=pruneAB(&(*a)->esq,l-1);
         res+=pruneAB(&(*a)->dir,l-1);
     } 
     if(l==0){
        res=freeAB((*a));
        *a=NULL;
     }  
     return res;
 }