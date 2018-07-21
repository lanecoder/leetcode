#include<iostream>
#include<forward_list>

using namespace std;

class Solution{
public:
    forward_list<int> add_two_num(forward_list<int> & fl1, forward_list<int> & fl2){
	
	int size1 = distance(fl1.begin(), fl1.end());
	int size2 = distance(fl2.begin(), fl2.end());

	if(size1 == 0 && size2 == 0){forward_list<int> fr(0); return fr;}

	if(size1 == 0) {forward_list<int> fr(fl2.begin(), fl2.end()); return fr;}
	if(size2 == 0) {forward_list<int> fr(fl1.begin(), fl1.end()); return fr;}

	forward_list<int> fr;

	forward_list<int>::iterator f1_start = fl1.begin();
	forward_list<int>::iterator f2_start = fl2.begin();
	int digit = 0;
	while(f1_start != fl1.end() || f2_start != fl2.end()){
	   
		if(f1_start == fl1.end()){
		    fr.insert_after(*f2_start+digit);
		    f2_start++;
		    continue;
		} 

		if(f2_start == fl2.end()){
		    fr.insert_after(fr.end(), *f1_start+digit);
		    f1_start++;
		    continue;
		}

		if(*f1_start+*f2_start+digit>10){
			fr.insert_after(fr.end(), (*f1_start+*f2_start+digit)%10);
			digit = (*f1_start+*f2_start+digit)/10;
			f1_start++;
			f2_start++;	
		}else{
		 	fr.insert_after(fr.end(), *f1_start+*f2_start+digit);
			digit = 0;		  
		}
	}

	return fr;	


    }
};


int main(){

    forward_list<int> f1 = {2,4,3};
    forward_list<int> f2 = {5,6,4};

    Solution s;
    forward_list<int> fr = s.add_two_num(f1, f2);
    for(forward_list<int>::iterator it = fr.begin();it != fr.end(); it++){
	cout<<*it<<endl;
    }

    return 0;
}
