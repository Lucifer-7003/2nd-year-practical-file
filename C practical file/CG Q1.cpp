#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, dx, dy, steps, Xinc, Yinc;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    cout << "Enter  values of x1 and y1 : ";
    cin >> x1 >> y1;
    cout << "Enter  values of x2 and y2 : ";
    cin >> x1 >> y1;
    clrscr();
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    Xinc = dx / steps;
    Yinc = dy / steps;
    for (int i = 0; i < steps; i++)
    {
        putpixel(x1, y1, 3);
        x1 = x1 + Xinc;
        y1 = y1 + Yinc;
    }
    getch();
    closegraph();
    return 0;
}