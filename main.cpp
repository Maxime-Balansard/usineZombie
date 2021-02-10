#include "Zombie.h"

int main()
{
    Zombie z1;
    Zombie z2;
    Zombie z3;
    z1.setNom("zombieA001");
	z1.setAttack(10);
	z1.setPv(100);
	z1.showInfos();
	cout << endl;

	cout<<" zombieA002"<< endl;
	z2.setNom("zombieA002");
	z2.setAttack(12);
	z2.setPv(10);
	z2.showInfos();
	cout << endl;

	cout<<" zombieA003"<< endl;
	z3.setNom("zombieA003");
	z3.setAttack(15);
	z3.setPv(110);
	z3.showInfos();
	cout << endl;



	 cout <<"Manger"<<endl;
	z1.attackZombie(&z2);

	cout << "Attack de z1 = "<<z1.getAttack()<<endl;
	cout << "PV de z2 = "<<z2.getPv()<<endl;

	z1.showInfos();




}
