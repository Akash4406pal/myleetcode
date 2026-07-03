class Solution {
public:
    string capitalizeTitle(string title) {
        int st=0,end=0,n=title.size();
        for(int i=0;i<n;i++){
            end=i;
            if(title[i]==' '){
                if(end-st<=2){
                    while(st<end){
                        title[st]=tolower(title[st]);
                        st++;}
                }
                else{
                    for(int x=st;x<=end;x++){
                        if(x==st)title[x]=toupper(title[x]);
                        else title[x]=tolower(title[x]);
                    }
                }
                st=end+1;
            }
        }
        if(end-st<2){
                    while(st<=end){
                        title[st]=tolower(title[st]);
                        st++;}
        }
        else{
            for(int x=st;x<=end;x++){
                if(x==st)title[x]=toupper(title[x]);
                else title[x]=tolower(title[x]);
                }
        }
        return title;
    }
};