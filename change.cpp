#include <iostream>
using namespace std;

int main() {
int count=0;
for(int iii=0; iii<=1 ;iii++) {
	int sum=0;
	sum=(iii*200);
	if(sum==200) {
		count++;
		break;
	}
	else {
		for(int jjj=0;jjj<=2;jjj++) {
			sum=(iii*200)+(jjj*100);
			if(sum==200) {
				count++;
				break;
			}
			else {
				for(int kkk=0;kkk<=4;kkk++) {
					sum=(iii*200)+(jjj*100)+(kkk*50);
					if(sum==200) {
						count++;
						break;
					}
					else {
						for(int lll=0;lll<=10;lll++) {
							sum=(iii*200)+(jjj*100)+(kkk*50)+(lll*20);
							if(sum==200) {
								count++;
								break;
							}
							else {
								for(int mmm=0;mmm<=20;mmm++) {
									sum=(iii*200)+(jjj*100)+(kkk*50)+(lll*20)+(mmm*10);
									if(sum==200) {
										count++;
										break;
									}
									else {
								for(int nnn=0;nnn<=40;nnn++) {
									sum=(iii*200)+(jjj*100)+(kkk*50)+(lll*20)+(mmm*10)+(nnn*5);
									if(sum==200) {
										count++;
										break;
										}
									else{
										for(int ooo=0;ooo<=100;ooo++) {
											sum=(iii*200)+(jjj*100)+(kkk*50)+(lll*20)+(mmm*10)+(nnn*5)+(ooo*2);
											if(sum==200) {
												count++;
												break;
											}
											else {
												for(int ppp=0;ppp<=200;ppp++) {
													sum=(iii*200)+(jjj*100)+(kkk*50)+(lll*20)+(mmm*10)+(nnn*5)+(ooo*2)+(ppp*1);
													if(sum==200) {
														count++;
													}
												}
											}
										}
									}	
								}
							}
						}
					}
				}
			}
		}
	}
}
}
}
cout << count << endl;
}

