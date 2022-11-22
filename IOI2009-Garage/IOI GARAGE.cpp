#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, total=0; cin >> n >> m; 
	int queue[m], rate[n], emp[n], car[m];
	for(int i=0; i<n; i++){
		emp[i]=0;
		cin >> rate[i];
	}
	for(int i=0; i<m; i++){
		queue[i]=0;
		cin >> car[i];
	}
	bool set;
	int k, qf=0, qr=0;
	for(int i=0;i<2*m;i++){
		set=false;
		cin >> k;
		if(k>0){
			for(int j=0; j<n; j++){
				if(emp[j]==0){
					total+=car[k-1]*rate[j];
					emp[j]=k;
					set=true;
					break;
				}

			}
			if(!set){
				queue[qr]=k;
				qr++;
			}
		} 
		else {
			for(int h=0; h<n; h++){
				if(emp[h]==(-k)){
					if(queue[qf]==0){
						emp[h]=0;
						break;
					} else {
						total+=car[queue[qf]-1]*rate[h];
						emp[h]=queue[qf];
						qf++;
						break;
					}
				}
			}
		}
	}
	cout << total;
}
