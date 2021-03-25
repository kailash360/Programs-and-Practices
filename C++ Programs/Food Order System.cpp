//by KAILASH KEJRIWAL

#include <iostream>
using namespace std;

struct menu{                                                                            //Menu Card

    string food_list[10]={"Burger","Chicken Pizza","Fried Chicken","Grilled Chicken","Hakka Noodles","Pasta","Oreo Shake","Cold Coffee","Cappuccino","Coke"};
    string quantity[10][3]={{"200gm","300gm"},{"12inch","14inch","16inch"},{"1pc","4pcs","10pcs"},{"Quarter","Half","Full"},{"Half","Full"},{"Half","Full"},{"250g"},{"250g"},{"250g"},{"250g","500g"}};
    int price[10][3]={{130,180,0},{750,975,1250},{85,320,790},{70,140,250},{130,250,0},{120,240,0},{180,0,0},{65,0,0},{70,0,0},{20,30,0}};
    };

int amount(int order_code,int order_count);                                              //To calculate amount
int amount(int order_code,int order_count)
{
    int size,type,cost;
    struct menu menu;
    size=int (order_code%10-1);
    type=int ((order_code/10)-11);
    cost=(menu.price[type][size])*order_count;
    return cost;
}

int order();                                                                            //Order function prototype
int order()
{
    int count,final_count,i,j;
    struct menu menu;                                   //Showing the menu here

    cout<<"\n=============================MENU================================\n";
    cout<<" Code    Description            Quantity                   Price(Rs.)\n";
    cout<<"[111]-----Burger------------------200g----------------------130\n";
    cout<<"[112]-----Burger------------------300g----------------------180\n";
    cout<<"[121]-----Chicken Pizza-----------12inch--------------------750\n";
    cout<<"[122]-----Chicken Pizza-----------14inch--------------------975\n";
    cout<<"[123]-----Chicken Pizza-----------16inch--------------------1250\n";
    cout<<"[131]-----Fried Chicken-----------1pc-----------------------85\n";
    cout<<"[132]-----Fried Chicken-----------4pcs----------------------320\n";
    cout<<"[133]-----Fried Chicken-----------8pcs----------------------790\n";
    cout<<"[141]-----Grilled Chicken---------Quarter-------------------70\n";
    cout<<"[142]-----Grilled Chicken---------Half----------------------140\n";
    cout<<"[143]-----Grilled Chicken---------Full----------------------250\n";
    cout<<"[151]-----Hakka Noodles-----------Half----------------------130\n";
    cout<<"[152]-----Hakka Noodles-----------Full----------------------250\n";
    cout<<"[161]-----Pasta-------------------Half----------------------120\n";
    cout<<"[162]-----Pasta-------------------Full----------------------240\n";
    cout<<"[171]-----Oreo Shake--------------250g----------------------180\n";
    cout<<"[181]-----Cold Coffee-------------250g----------------------65\n";
    cout<<"[191]-----Uni Cappucino-----------250g----------------------70\n";
    cout<<"[201]-----Regular Coke------------250g----------------------130\n";
    cout<<"[202]-----Regular Coke------------500g----------------------180\n";
    cout<<"===================================================================\n";

    cout<<"\nHow many itmes would you like to order? \n";                //Taking order here
    cin>>count;
    final_count=count;
    int order_code[count+1],order_count[count+1],cost,total_amount=0;
    string confirm,item,size_of_item;
    for(i=0;i<=count;i++)
    {
        if(i==(count))
        {
            cout<<"\nWould you like to order anything else? (y/n) \n";
            cin>>confirm;
            if(confirm=="y")
                {
                    cout<<"\nPlease give the item code ";               //Order stored in order_code
                    cin>>order_code[i];
                    cout<<"Give quantity of item";                         //Order quantity saved in order_count
                    cin>>order_count[i];
                    final_count=final_count+1;
                }
            else
                {
                    break;
                }
            break; 
        }
        else
        {
            cout<<"//ORDER ITEM "<<(i+1);
            cout<<"\nPlease give item code from the menu: ";
            cin>>order_code[i];
            cout<<"Give quantity of item: ";
            cin>>order_count[i];
        }          
    }
    cout<<"\n";
    for(i=0;i<final_count;i++)
    {
        item=menu.food_list[(int (order_code[i]/10)-11)];
        size_of_item=menu.quantity[int ((order_code[i]/10)-11)][int (order_code[i]%10)-1];
        cost=amount(order_code[i],order_count[i]);
        total_amount=total_amount+cost;
        cout<<order_count[i]<<"pcs of "<<size_of_item<<" "<<item<<"    \t= "<<cost<<"\n";
    }
    cout<<"\tBill Amount\t\t ="<<total_amount;
    return 0;
}

int serve(int order_num,string name);                                                        //Serve function prototype
int serve(int order_num,string name)
{
    cout<<"Order number "<<order_num<<" by "<<name<<" is ready\n";
    cout<<"Enjoy your meal :) \n";
    return 0;
}


int display();                                                                              //Display function prototype
int display(int total_order_count,int total_serve_count,int order_num)
{
    cout<<"Total orders taken: "<<total_order_count;
    cout<<"\nTotal orders served: "<<total_serve_count;
    cout<<"\nNo. of orders waiting to be served: "<<(total_order_count-total_serve_count);
    if(total_order_count>total_serve_count && total_order_count>0)
    {
        cout<<"\nCurrently preparing food for order number: "<<order_num;
    }
    return 0;
}



int opt_choose(string name,int order_num,int total_order_count,int total_serve_count);                                                         //Option choosing prototype
int opt_choose(string name,int order_num,int total_order_count,int total_serve_count)
{
    int option;
    cout<<"\nWhat would you like to do? \n1.Order\n2.Serve\n3.Diplay Records\n4.Exit the program\n-->";
    cin>>option;
    if(option==1)                                       //For order
    {
        total_order_count=total_order_count+1;
        order_num=order_num+1;
        order();
        opt_choose(name,order_num,total_order_count,total_serve_count);
    }
    if(option==2)                                       //For serve
    {
        if(total_serve_count<=total_order_count and total_order_count>0)
        {
            total_serve_count=total_serve_count+1;
            serve(order_num,name);
        }
        else
        {
            cout<<"All orders are cleared. Please get a new order.\n";
        }
        opt_choose(name,order_num,total_order_count,total_serve_count);
        
    }
    if(option==3)                                       //For displaying records
    {
        display(total_order_count,total_serve_count,order_num);
        opt_choose(name,order_num,total_order_count,total_serve_count);
    }
    if(option==4)
    {
        cout<<"\n============Thank You "<<name<<"============s====\n";
    }
}



//________________main_________________
int main()
{
    string name_of_waiter;
    int option,order_num=0,total_order_count=0,total_serve_count=0;
    cout<<"\t\tWelcome to Aroma Coffee\n";
    cout<<"Please give your name: ";
    cin>>name_of_waiter;
    opt_choose(name_of_waiter,order_num,total_order_count,total_serve_count);
    return 0;
}