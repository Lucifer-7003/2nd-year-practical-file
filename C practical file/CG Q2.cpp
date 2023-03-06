#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x, y, x2, y2, dx, dy, p;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    cout << "Enter  values of x1 and y1 : ";
    cin >> x1 >> y1;
    cout << "Enter  values of x2 and y2 : ";
    cin >> x1 >> y1;
    clrscr();
    dx = x2 - x1;
    dy = y2 - y1;
    p = 2 * (dy - dx);
    putpixel(x1, y1, 3);
    for (int k = 0; k < dx; k++)
    {
        if (p < 0)
        {
            x++;
            p = p + 2 * (2 * dy);
        }
        else
        {
            x1++;
            y1++;
            p = p + 2 * dy - 2 * dx;
        }
        putpixel(x1, y1, 3);
        delay(50);
    }
    getch();
    closegraph();

    return 0;
}
