#include<iostream>
#define  CANDIDATE_1 "|PARTY 1|<BJP>|1|"
#define  CANDIDATE_2 "|PARTY 2|<CNG>|2|"
#define  CANDIDATE_3 "|PARTY 3|<AAP>|3|"
#define  CANDIDATE_4 "|PARTY 4|<BSP>|4|"
#define NULL         "|      NULL    |5|"
using namespace std;
int vote_1=0;
int vote_2=0;
int vote_3=0;
int vote_4=0;
int NULL_vote=0;
int choice;
void vote_caste(){
	cout<<CANDIDATE_1<<endl;
	cout<<CANDIDATE_2<<endl;
	cout<<CANDIDATE_3<<endl;
	cout<<CANDIDATE_4<<endl;
	cout<<NULL<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	if(choice==1){
		cout<<(vote_1++)<<endl;
		 //break;
	}else if(choice==2){
		cout<<(vote_2++)<<endl;
	//	 break;
	}else if(choice==3){
		cout<<(vote_3++)<<endl;
	//	break;
	}else if(choice==4){
		cout<<(vote_4++)<<endl;	 
	//	break;
	}if(choice==5){
		cout<<(NULL_vote++)<<endl;
	//	break;
	}else{
		cout<<"WRONG CHOICE......."<<endl;
	//	break;
	}
	cout<<"Thanks For VOTE..."<<endl;
}
void vote_count(){
	cout<<CANDIDATE_1<<vote_1<<endl;
	cout<<CANDIDATE_2<<vote_2<<endl;
	cout<<CANDIDATE_3<<vote_3<<endl;
	cout<<CANDIDATE_4<<vote_4<<endl;
	cout<<NULL<<NULL_vote<<endl;
}
void leading_candidate(){
	cout<<"Leadind Candidate"<<endl;
	if(vote_1>vote_2&&vote_1>vote_3&&vote_1>vote_4){
		cout<<CANDIDATE_1<<"is leading"<<endl;
	}else if(vote_2>vote_1&&vote_2>vote_3&&vote_2>vote_4){
		cout<<CANDIDATE_2<<"is leading"<<endl;
	}else if(vote_3>vote_1&&vote_3>vote_2&&vote_3>vote_4){
		cout<<CANDIDATE_3<<"is leading"<<endl;
	}else if(vote_4>vote_1&&vote_4>vote_2&&vote_4>vote_3){
			cout<<CANDIDATE_4<<"is leading"<<endl;
	}else{
		cout<<"No winning chance because NULL is high"<<endl;
	}
}
int main(){
	int age;
	cout<<"Enter your age: "<<endl;
	cin>>age;
	if(age>=18){
		do{
			cout<<"Welcome to voting counter"<<endl;
			cout<<"1. vote caste"<<endl;
			cout<<"2. vote count"<<endl;
			cout<<"3. leading candidate"<<endl;
			cout<<"4. EXIT"<<endl;
			cout<<"Enter your choice:";
			cin>>choice;
			if(choice==1){
				vote_caste();
				break;
			}else if(choice==2){
				vote_count();
				break;
			}else if(choice==3){
				leading_candidate();
				break;
			}else{
				cout<<"Error"<<endl;
			}
		}while(choice!=4);

		
	}
	else{
		cout<<"Sorry you can't vote.."<<endl;
	}
//	vote_caste();
	return 0;
}
