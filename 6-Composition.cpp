		              Composition

- IS a special type of association between two or more classes
- "Have a" relation Ship
- One Container object composed of component objects
- Strong Association
-Another name is "must have" 

E.g Tea composed of Water, teabag, Milk and Suger
     Tea
water, teabag, milk, suger

e.g Car must have Type, engine and body
     car
engine, tyre, body

UML(Unified Modeling Language) 
-oop standard defined by OMG (Object management Group)
 see on Board
................................................
How to implement in Composition in C++?
................................................
class Engine{
public :
    Engine() {
        cout<<"Engine created"<<endl;
    }
  void start() {
   cout<<"Engine Started 800 hrspower"<<endl;
  }

};
class Tyre{
public :
    Tyre() {
        cout<<"Tyre  created"<<endl;
    }
  void size() {
   cout<<"Tyre Size is 14 inch"<<endl;
  }

};
class Body{
public :
    Body() {
        cout<<"Body  created"<<endl;
    }
  void type() {
cout<<"Body type is saloon color is white"<<endl;
  }

};
class Car {
private:
Engine e;
Body b;
Tyre t;
public :
  Car () {
   cout<<"Car  created"<<endl;
 }
void printSpecification(){
   e.start();
   b.type();
   t.size();
}
};

void main () {
Car c;
c.printSpecification();

}
..............................................
                   Compsotion with data
.............................................
 
e.g A Computer compose of Disk, RAM ,processor
computer (Brand,price)
disk(brand,size)
RAM(size)
processor(type,clockSpeed)

class Disk{
private:
 char brand[30];
 int size;
public:
   Disk() { }
   Disk (char b[],int s) {
     cout<<" Disk Create "<<endl;
      strcpy(brand,b);
      size=s;
   }
 void setBrand(char b[]) { strcpy(brand,b);}
 void setSize(int s) { size=s;}
 char * getBrand() { return brand;}
 int getSize()  { return size;}
};
class RAM{
private:
 
 int size;
public:
   RAM() { }
   RAM (int s) {
      cout<<" RAM Create "<<endl;
      size=s;
   }
 
 void setSize(int s) { size=s;}
 
 int getSize()  { return size;}
};

class Processor{
private:
 char type[30];
 int clockSpeed;
public:
   Processor() { }
   Processor (char b[],int s) {
     cout<<" Processor Create "<<endl;
      strcpy(type,b);
      clockSpeed=s;
   }
 void setType(char b[]) { strcpy(type,b);}
 void setClockSpeed(int s) { clockSpeed=s;}
 char * getType() { return type;}
 int getClockSpeed()  { return clockSpeed;}
};

class Computer{
private:
char brand[20];
int price;
Disk disk;
Processor processor;
RAM ram;
public :
      Computer( )  { }
      Computer (char cbrand[],int pr,char dbrand[], int dsize,char ptype[], int cspeed,int rsize):disk(dbrand,dsize),processor(ptype,cspeed),
ram(rsize)
// constructor initialization list
{ cout<<" Computer Create "<<endl;
  strcpy(brand,cbrand);
  price=pr;

}
void setSpecification(char cbrand[],int pr,char dbrand[], int dsize,char ptype[], int cspeed,int rsize)
{strcpy(brand,cbrand);
  price=pr;
 disk.setBrand(dbrand);
 disk.setSize(dsize);
 processor.setType(ptype);
 processor.setClockSpeed(cspeed);
 ram.setSize(rsize);

}
void printSpecification(){
  cout<<"Computer Brand="<<brand<<endl;
  cout<<"Computer Price="<<price<<endl;
  cout<<"Computer Disk Brand="<<disk.getBrand()<<endl;
  cout<<"Computer Disk Size="<<disk.getSize()<<endl;
  cout<<"Computer Processor Type="<<processor.getType()<<endl;
cout<<"Computer Processor ClockSpeed="<<processor.getClockSpeed()<<endl;
cout<<"Computer RAM Size="<<ram.getSize()<<endl;

}

};
void main(){
Computer c("compaq",25000,"cgate",500,"core i7",300,10);

}
........................................................
Problem : Create a computer lab, size of lab get form user input.All computer  may or may not have same specification

void main () {
int s;
cin>>s;
Computer *lab=new Computer[s];
int i=0;
char cbrand[20];int pr;char dbrand[20]; int dsize;char ptype[20]; int cspeed;int rsize;
while(i<s){
cin>>cbrand;cin>>pr;cin>>dbrand;cin>>dsize;
cin>>ptype;cin>>cspeed;cin>>rsize;
 lab[i].setSpecification(cbrand,pr,dbrand,dsize,ptype,cspeed,rsize);
i++;
}

}













