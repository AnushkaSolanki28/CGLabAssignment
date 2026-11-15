/*
 * CGM Lab Assignment - 1
 * Question: Write a C/C++ program using graphics library to draw basic shapes
 *           (Straight Line, Circle, Rectangle, and Triangle).
 *
 * SUBMITTED BY : Anushka Solanki
 * Roll No      : IC-2K24-20
 */

#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Black background
    setbkcolor(BLACK);
    cleardevice();

    // Heading
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(140, 25, (char*)"CGM LAB ASSIGNMENT - 01");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(260, 55, (char*)"Basic Shapes");
    outtextxy(140, 80, (char*)"Name: Anushka Solanki | Roll No: IC-2K24-20");

    // Red outer border
    setcolor(RED);
    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
    rectangle(20, 110, 620, 430);

    // Red dividing lines (2x2 grid)
    line(320, 110, 320, 430);
    line(20, 270, 620, 270);

    // White shape labels
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(35, 120, (char*)"1. Straight Line");
    outtextxy(335, 120, (char*)"2. Circle");
    outtextxy(35, 280, (char*)"3. Rectangle");
    outtextxy(335, 280, (char*)"4. Triangle");

    // Set line style for shapes
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);

    // 1. Straight Line
    setcolor(WHITE);
    line(50, 195, 290, 195);

    // 2. Circle
    setcolor(WHITE);
    circle(470, 195, 50);

    // 3. Rectangle
    setcolor(WHITE);
    rectangle(60, 330, 280, 400);

    // 4. Triangle
    setcolor(WHITE);
    line(390, 400, 470, 320);
    line(470, 320, 550, 400);
    line(550, 400, 390, 400);

    // Wait for key press before closing
    getch();

    // Close graphics
    closegraph();

    return 0;
}
