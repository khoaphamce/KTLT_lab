#include <iostream>

struct POINT
{
	float x;
	float y;
};
void display(POINT* p)
{
	if (p!=NULL)
	{
        //std::cout << "Displaying x" << std::endl;
		std::cout << p->x << std::endl;
        //std::cout << "Displaying y" << std::endl;
		std::cout << p->y << std::endl;
        //std::cout << "deleting p" << std::endl;
		delete p;
        //std::cout << "Done deleting p" << std::endl;
    }
}
POINT * readPoint()
{
    POINT *pp = new POINT;
    std::cin >> pp->x >> pp->y;
    return pp;
}
int main()
{
    POINT* p = readPoint();
    display(p);
    delete p;
    return 0;
}