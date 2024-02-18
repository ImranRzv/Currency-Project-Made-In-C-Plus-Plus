#include<iostream>
using namespace std;
class CurrencyProject
{
	public:
	 void features(){
        int count=0;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"In this program, the conversion of the world's five most powerful currencies\ninto Indian Rupees has been explained And We Have On The Data Of 2024."<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"----------------"<<endl;
        cout<<(++count)<<".How To Use It:"<<endl;
        cout<<"----------------"<<endl;
        cout<<(++count)<<".Kuwaiti (KWD) Dinar To Indian Rupees:"<<endl;
        cout<<(++count)<<".Bahrani Dinar (BHD) To Indian Rupees:"<<endl;
        cout<<(++count)<<".Omani Rial (OMR) To Indian Rupees:"<<endl;
        cout<<(++count)<<".British Pound Starling (GBP) To Indian Rupees:"<<endl;
        cout<<(++count)<<".American Dollar To Indian Rupees:"<<endl;
        cout<<endl;
    }
    void kuwaitidinarvaluein2024(double kuwaitidinar)
    {
        double dinar=kuwaitidinar;
        double indianruppes=(kuwaitidinar*=270.03);
        cout<<dinar<<" Kuwaiti Dinar in Indian Rupees Is "<<indianruppes<<endl;
    }
     void behrandinarinindianrupees(double behranidinar)
    {
        double dinar=behranidinar;
        double indianrupees=(behranidinar*=220.43);
        cout<<dinar<<" Behrani Dinar In Indian Rupees Is "<<indianrupees<<endl;
    }
    void omanirialtoindianrupees(double omanirial)
    {
        double rial=omanirial;
        double indianrupees=(omanirial*=215.89);
        cout<<rial<<" Omani Rial In Indian Rupees Is "<<indianrupees<<endl;
    }
    void britishpoundintoindianrupees(double britishpound)
    {
        double pound=britishpound;
        double indianrupees=(britishpound*=104.62);
        cout<<pound<<" British Pound In Indian Rupees Is "<<indianrupees<<endl;
    }
    void usdollarvalue2024(float usdollar)
    {
        float dollar=usdollar;
        float torupees=(usdollar*=83.02);
        cout<<dollar<<" US Dollar In Indian Rupees Is "<<torupees<<endl;
    }
};
int main()
{
    CurrencyProject currencyproject;
    currencyproject.features();
    int choice;
    cout<<"Enter An Integer By Your Choice: ";
    cin>>choice;
    switch(choice)
    {
    	case 1:
    		cout<<endl;
    		cout<<"----------------------------------------------------------------------------------------"<<endl;
    		cout<<"Here, Is The Programme To Convert The Top 5 Most Powerful Currency To Indian Currency.\nAnd About How To Use,Its Very Easy Just You Have To Read The Given Heading\nAnd Just Go Through The Number Means Just You Have To Choose The Option By Numbers\nThen You Can Use This Programme Easily Just Remember One Thing As User\nJust You Have To Give A Input In Number Like Kali Linux.\n\n\nNOTICE:\nAll The Data In This Programme Is From Google And Forbes!"<<endl;
    		cout<<"----------------------------------------------------------------------------------------"<<endl;
    		break;
    	case 2:
    		cout<<endl;
    		cout<<"-------------------------------------------------------"<<endl;
    		cout<<"You Are Going To Convert Kuwaiti Dinar To India Rupees: "<<endl;
    		cout<<"-------------------------------------------------------"<<endl;
			cout<<endl;
    		float kuwaitidinar;
    		cout<<"Enter A Kuwaiti Dinar To Know That Indian Value: ";
    		cin>>kuwaitidinar;
    		cout<<endl;
    		cout<<"--------------------------------------------"<<endl;
    		currencyproject.kuwaitidinarvaluein2024(kuwaitidinar);
    		cout<<"--------------------------------------------"<<endl;
    		break;
    	case 3:
    		cout<<endl;
    		cout<<"-----------------------------------------------"<<endl;
    		cout<<"You Are Going To Behrani Dinar To India Rupees: "<<endl;
    		cout<<"-----------------------------------------------"<<endl;
    		cout<<endl;
    		float behranidinar;
    		cout<<"Enter A Behrani Dinar To Know That Indian Value: ";
    		cin>>behranidinar;
    		cout<<endl;
    		cout<<"-------------------------------------------"<<endl;
    		currencyproject.behrandinarinindianrupees(behranidinar);
    		cout<<"-------------------------------------------"<<endl;
    		break;
		case 4:
			cout<<endl;
			cout<<"-----------------------------------------------------"<<endl;
			cout<<"You Are Going To Convert Omani Riyal To India Rupees: "<<endl;
			cout<<"-----------------------------------------------------"<<endl;
    		cout<<endl;
    		float omaniriyal;
    		cout<<"Enter A Omani Riyal To Know That Indian Value: ";
    		cin>>omaniriyal;
    		cout<<endl;
    		cout<<"-----------------------------------------"<<endl;
    		currencyproject.omanirialtoindianrupees(omaniriyal);
    		cout<<"-----------------------------------------"<<endl;
    		break;
		case 5:
			cout<<endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout<<"You Are Going To Convert British Pound To India Rupees: "<<endl;
			cout<<"-------------------------------------------------------"<<endl;
    		cout<<endl;
    		float britishpound;
    		cout<<"Enter A British Pound To Know That Indian Value: ";
    		cin>>britishpound;
    		cout<<endl;
    		cout<<"---------------------------------------------"<<endl;
    		currencyproject.britishpoundintoindianrupees(britishpound);
    		cout<<"---------------------------------------------"<<endl;
    		break;
		case 6:
			cout<<endl;
			cout<<"----------------------------------------------------"<<endl;
	    	cout<<"You Are Going To Convert US Dollars To India Rupees: "<<endl;
	    	cout<<"----------------------------------------------------"<<endl;
    		cout<<endl;
    	    float usdollar;
    		cout<<"Enter A Us Dollar To Know That Indian Value: ";
    		cin>>usdollar;
    		cout<<endl;
    		cout<<"---------------------------------------"<<endl;
    		currencyproject.usdollarvalue2024(usdollar);
    		cout<<"---------------------------------------"<<endl;
    		break;
		default:
			cout<<endl;
			cout<<"----------------------------------------------------------------------"<<endl;
		    cout<<"I Think You Did Some Mistake Read The Heading Carefully And Try Again:"<<endl;
		    cout<<"----------------------------------------------------------------------"<<endl;
			break;	
	}
	return 0;
}
