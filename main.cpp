#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#define PI 3.1416

float cx=0, cy=0, tx=0, ty=0, scx=0, scy=0, angle=0;

void init()
{
        printf("-----------------------------Railway Station Project-------------------------------\n");
    printf(" -------------------------------------------------------------------------------------\n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("Press 't' or 'T' for moving train\n");
    printf("Press 's' or 'S' for moving cloud\n");
    printf("Press  'up' 'down' 'left' ' right' button for moving passanger \n");



    glClearColor(0.90f,0.90f,0.98f,1.0f);
    glOrtho(-10,+10,-10,+10,-10,+10);
}

void circle(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_POLYGON);
    for(i=0;i<100;i++)
    {
        angle=2*PI*i/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        //printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }

glEnd();

}



//Copyright
//https://github.com/mominulhq
//https://www.linkedin.com/in/mominulhq/




void myDisplay(){

    int i;
    glClear(GL_COLOR_BUFFER_BIT);

//Sky
    glColor3f(0.52,0.80,0.92);
    glBegin(GL_POLYGON);
        glVertex2d(-10,10);
        glVertex2d(-10,5);
        glVertex2d(10,5);
        glVertex2d(10,10);
    glEnd();


//SUN
    glPushMatrix();
    glTranslated(7,8,0);
        glColor3f(1.0,0.84,0.0);
        circle(1,1.5);
    glPopMatrix();



//Cloud 1


glPushMatrix();
    glTranslated(scx,scy,0);
        glScaled(1,1,1);


        glPushMatrix();
        //glTranslated(cx,cy,0);

        glPushMatrix();
        glTranslated(-8,6.5,0);
        glScaled(0.5,0.5,0);



        glPushMatrix();
        glTranslated(0.5,0.8,0);
        glColor3f(0.96,0.96,0.96);
        circle(0.9,1.1);
        glPopMatrix();
            glEnd();

        glPushMatrix();
        glTranslated(1.3,2,0);
        glColor3f(0.96,0.96,0.96);
        circle(1,1.8);
        glPopMatrix();
            glEnd();

        glPushMatrix();
        glTranslated(2.7,1.9,0);
        glColor3f(0.96,0.96,0.96);
        circle(0.5,1.7);
        glPopMatrix();
            glEnd();

        glPushMatrix();
        glTranslated(3.5,1.8,0);
        glColor3f(0.96,0.96,0.96);
        circle(0.5,1.5);
        glPopMatrix();
            glEnd();

        glPushMatrix();
        glTranslated(4.8,1.5,0);
        glColor3f(0.96,0.96,0.96);
        circle(0.7,1.6);
        glPopMatrix();
            glEnd();

        glPushMatrix();
        glTranslated(0,-0.2,0);
        glColor3f(0.96,0.96,0.96);
        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(6,0);
        glVertex2d(3,2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(5.8,0.8,0);
        glColor3f(0.96,0.96,0.96);
        circle(1,1);
        glPopMatrix();
            glEnd();
        glPopMatrix();

            glEnd();
        glPopMatrix();


//Cloud 2

        glPushMatrix();
        //glTranslated(cx,cy,0);

        glPushMatrix();
        glTranslated(-2,7,0);
        glScaled(0.5,0.5,0);

        glPushMatrix();
        glTranslated(0.5,0.8,0);
        glColor3f(0.96,0.96,0.96);
        circle(0.9,1.1);
        glPopMatrix();
            glEnd();
        glPushMatrix();
        glTranslated(1.3,2,0);
        glColor3f(0.96,0.96,0.96);
        circle(1,1.8);
        glPopMatrix();
            glEnd();
        glPushMatrix();
        glTranslated(2.7,1.9,0);
        glColor3f(0.96,0.96,0.96);
        circle(0.5,1.7);
        glPopMatrix();
            glEnd();
        glPushMatrix();
        glTranslated(3.5,1.8,0);
        glColor3f(0.96,0.96,0.96);
        circle(0.3,1.5);
        glPopMatrix();
            glEnd();
        glPushMatrix();
        glTranslated(4.8,1.5,0);
        glColor3f(0.96,0.96,0.96);
        circle(0.9,1.9);
        glPopMatrix();
            glEnd();
        glPushMatrix();
        glTranslated(0,-0.2,0);
        glColor3f(0.96,0.96,0.96);
        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(6,0);
        glVertex2d(3,2);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glTranslated(5.8,0.8,0);
        glColor3f(0.96,0.96,0.96);
        circle(1,1);
        glPopMatrix();
            glEnd();
        glPopMatrix();

            glEnd();
        glPopMatrix();


        glPopMatrix();




//Copyright
//https://github.com/mominulhq
//https://www.linkedin.com/in/mominulhq/



//Station Building
    glColor3f(0.36,0.36,0.36);
    glBegin(GL_POLYGON);
        glVertex2d(-9,5);
        glVertex2d(-10,4);
        glVertex2d(3,4);
        glVertex2d(2,5);
    glEnd();


    glColor3f(0.62,0.32,0.17);
    glBegin(GL_POLYGON);
        glVertex2d(-9,4);
        glVertex2d(-9,-4);
        glVertex2d(2,-4);
        glVertex2d(2,4);
    glEnd();


//Door
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2d(-4.5,2);
        glVertex2d(-4.5,-4);
        glVertex2d(-2.5,-4);
        glVertex2d(-2.5,2);
    glEnd();

    glColor3f(0.74,0.86,0.56);
    glBegin(GL_POLYGON);
        glVertex2d(-4.5,-4);
        glVertex2d(-4.5,-4.5);
        glVertex2d(-4.3,-4.5);
        glVertex2d(-4.3,-5);
        glVertex2d(-2.3,-5);
        glVertex2d(-2.3,-4.5);
        glVertex2d(-2.5,-4.5);
        glVertex2d(-2.5,-4);

    glEnd();

//Window- for -Counter

    glColor3f(1.0,0.73,1.0);
    glBegin(GL_POLYGON);
        glVertex2d(1.5,1.5);
        glVertex2d(1,2);
        glVertex2d(-1.5,2);
        glVertex2d(-2,1.5);
        glVertex2d(-2,-2);
        glVertex2d(1.5,-2);
    glEnd();


//Window- Left side
    glBegin(GL_POLYGON);
        glVertex2d(-6,1.5);
        glVertex2d(-6.5,2);
        glVertex2d(-8,2);
        glVertex2d(-8.5,1.5);
        glVertex2d(-8.5,-2);
        glVertex2d(-6,-2);
    glEnd();


//Platform
    glColor3f(0.56,0.74,0.56);
    glBegin(GL_POLYGON);
        glVertex2d(-10,-5);
        glVertex2d(-10,-7.5);
        glVertex2d(10,-7.5);
        glVertex2d(10,-5);
    glEnd();
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_LINE_LOOP);
        glVertex2d(-10,-7);
        glVertex2d(-10,-7.25);
        glVertex2d(10,-7.25);
        glVertex2d(10,-7);
    glEnd();


//Platform Bench - right

    glColor3f(.97,0.48,0.0);
    glBegin(GL_POLYGON);
        glVertex2d(5.5,-7);
        glVertex2d(5.7,-7);
        glVertex2d(5.7,-5.75);
        glVertex2d(5.5,-5.75);
    glEnd();

    glColor3f(0.97,0.48,0.0);
    glBegin(GL_POLYGON);
        glVertex2d(7.5,-7);
        glVertex2d(7.7,-7);
        glVertex2d(7.7,-5.75);
        glVertex2d(7.5,-5.75);
    glEnd();

    glColor3f(0.2,0.2,0.2);
    glBegin(GL_POLYGON);
        glVertex2d(5.5,-5.75);
        glVertex2d(7.7,-5.75);
        glVertex2d(7.7,-6.25);
        glVertex2d(5.5,-6.25);
    glEnd();


//Platform Bench - left

    glColor3f(.97,0.48,0.0);
    glBegin(GL_POLYGON);
        glVertex2d(-5.5,-7);
        glVertex2d(-5.7,-7);
        glVertex2d(-5.7,-5.75);
        glVertex2d(-5.5,-5.75);
    glEnd();

    glColor3f(0.97,0.48,0.0);
    glBegin(GL_POLYGON);
        glVertex2d(-7.5,-7);
        glVertex2d(-7.7,-7);
        glVertex2d(-7.7,-5.75);
        glVertex2d(-7.5,-5.75);
    glEnd();

    glColor3f(0.2,0.2,0.2);
    glBegin(GL_POLYGON);
        glVertex2d(-5.5,-5.75);
        glVertex2d(-7.7,-5.75);
        glVertex2d(-7.7,-6.25);
        glVertex2d(-5.5,-6.25);
    glEnd();
   /* glBegin(GL_LINE);
        glVertex2d(5.5,-5.5);glVertex2d(5.5,-6);
        glVertex2d(6,-5.5);glVertex2d(6,-6);
        glVertex2d(7,-5.5);glVertex2d(7,-6);
    glEnd(); */


//Railway Slipper
   glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-10,-7.75);
        glVertex2d(-10,-8);
        glVertex2d(10,-8);
        glVertex2d(10,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-10,-9.75);
        glVertex2d(-10,-10);
        glVertex2d(10,-10);
        glVertex2d(10,-9.75);
    glEnd();


   glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(9.50,-7.75);
        glVertex2d(9.50,-9.75);
        glVertex2d(9.40,-9.75);
        glVertex2d(9.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(8.50,-7.75);
        glVertex2d(8.50,-9.75);
        glVertex2d(8.40,-9.75);
        glVertex2d(8.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(7.50,-7.75);
        glVertex2d(7.50,-9.75);
        glVertex2d(7.40,-9.75);
        glVertex2d(7.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(6.50,-7.75);
        glVertex2d(6.50,-9.75);
        glVertex2d(6.40,-9.75);
        glVertex2d(6.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(5.50,-7.75);
        glVertex2d(5.50,-9.75);
        glVertex2d(5.40,-9.75);
        glVertex2d(5.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(4.50,-7.75);
        glVertex2d(4.50,-9.75);
        glVertex2d(4.40,-9.75);
        glVertex2d(4.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(3.50,-7.75);
        glVertex2d(3.50,-9.75);
        glVertex2d(3.40,-9.75);
        glVertex2d(3.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(2.50,-7.75);
        glVertex2d(2.50,-9.75);
        glVertex2d(2.40,-9.75);
        glVertex2d(2.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(1.50,-7.75);
        glVertex2d(1.50,-9.75);
        glVertex2d(1.40,-9.75);
        glVertex2d(1.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(0.50,-7.75);
        glVertex2d(0.50,-9.75);
        glVertex2d(0.40,-9.75);
        glVertex2d(0.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(0.50,-7.75);
        glVertex2d(0.50,-9.75);
        glVertex2d(0.40,-9.75);
        glVertex2d(0.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-0.50,-7.75);
        glVertex2d(-0.50,-9.75);
        glVertex2d(-0.40,-9.75);
        glVertex2d(-0.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-1.50,-7.75);
        glVertex2d(-1.50,-9.75);
        glVertex2d(-1.40,-9.75);
        glVertex2d(-1.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-9.50,-7.75);
        glVertex2d(-9.50,-9.75);
        glVertex2d(-9.40,-9.75);
        glVertex2d(-9.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-8.50,-7.75);
        glVertex2d(-8.50,-9.75);
        glVertex2d(-8.40,-9.75);
        glVertex2d(-8.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-7.50,-7.75);
        glVertex2d(-7.50,-9.75);
        glVertex2d(-7.40,-9.75);
        glVertex2d(-7.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-6.50,-7.75);
        glVertex2d(-6.50,-9.75);
        glVertex2d(-6.40,-9.75);
        glVertex2d(-6.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-5.50,-7.75);
        glVertex2d(-5.50,-9.75);
        glVertex2d(-5.40,-9.75);
        glVertex2d(-5.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-4.50,-7.75);
        glVertex2d(-4.50,-9.75);
        glVertex2d(-4.40,-9.75);
        glVertex2d(-4.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-3.50,-7.75);
        glVertex2d(-3.50,-9.75);
        glVertex2d(-3.40,-9.75);
        glVertex2d(-3.40,-7.75);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2d(-2.50,-7.75);
        glVertex2d(-2.50,-9.75);
        glVertex2d(-2.40,-9.75);
        glVertex2d(-2.40,-7.75);
    glEnd();


//passenger-1
glPushMatrix();
    glTranslated(cx,cy,0);
        glScaled(1,1,1);

    glBegin(GL_POLYGON);//body
    glColor3f(0.98,0.54,0.98);
    glVertex2d(3.75,-4);
    glVertex2d(3.75,-5.5);
    glVertex2d(4.5,-5.5);
    glVertex2d(4.5,-4);
    glEnd();

    glBegin(GL_POLYGON);//left Hand
    glColor3f(1,0,0.98);
    glVertex2d(3.75,-4.5);
    glVertex2d(3.50,-5);
    glVertex2d(3.60,-5.25);
    glVertex2d(3.75,-4.75);
    glEnd();

    glBegin(GL_POLYGON);//right Hand
    glColor3f(1,0,0.98);
    glVertex2d(4.5,-4.5);
    glVertex2d(4.75,-5);
    glVertex2d(4.80,-5.25);
    glVertex2d(4.5,-4.75);
    glEnd();

    glBegin(GL_POLYGON);//left foot
    glColor3f(0.0,0,0.0);
    glVertex2d(3.75,-5.5);
    glVertex2d(3.75,-6.5);
    glVertex2d(3.90,-6.5);
    glVertex2d(3.90,-5.5);
    glEnd();

    glBegin(GL_POLYGON);//right foot
    glColor3f(0.0,0,0.0);
    glVertex2d(4.35,-5.5);
    glVertex2d(4.35,-6.5);
    glVertex2d(4.5,-6.5);
    glVertex2d(4.5,-5.5);
    glEnd();

glPushMatrix();
    glTranslated(4.15,-3.5,0);
    glColor3f(0.98,0.98,0.97);
        circle(0.35,0.55);
    glPopMatrix();

    glPopMatrix();

//passenger-2

 glBegin(GL_POLYGON);//body
    glColor3f(0.98,0.54,0.98);
    glVertex2d(1.75,-4);
    glVertex2d(1.75,-5.5);
    glVertex2d(2.5,-5.5);
    glVertex2d(2.5,-4);
    glEnd();

    glBegin(GL_POLYGON);//left Hand
    glColor3f(1,0,0.98);
    glVertex2d(1.75,-4.5);
    glVertex2d(1.50,-5);
    glVertex2d(1.60,-5.25);
    glVertex2d(1.75,-4.75);
    glEnd();

    glBegin(GL_POLYGON);//right Hand
    glColor3f(1,0,0.98);
    glVertex2d(2.5,-4.5);
    glVertex2d(2.75,-5);
    glVertex2d(2.80,-5.25);
    glVertex2d(2.5,-4.75);
    glEnd();

    glBegin(GL_POLYGON);//left foot
    glColor3f(0.0,0,0.0);
    glVertex2d(1.75,-5.5);
    glVertex2d(1.75,-6.5);
    glVertex2d(1.90,-6.5);
    glVertex2d(1.90,-5.5);
    glEnd();

    glBegin(GL_POLYGON);//right foot
    glColor3f(0.0,0,0.0);
    glVertex2d(2.35,-5.5);
    glVertex2d(2.35,-6.5);
    glVertex2d(2.5,-6.5);
    glVertex2d(2.5,-5.5);
    glEnd();

glPushMatrix();
    glTranslated(2.15,-3.5,0);
    glColor3f(0.98,0.98,0.97);
        circle(0.35,0.55);
    glPopMatrix();







//Copyright
//https://github.com/mominulhq
//https://www.linkedin.com/in/mominulhq/





//for moving

    glPushMatrix();
    glTranslated(tx,ty,0);
        glScaled(1,1,1);


//coach
    glBegin(GL_POLYGON);
        glColor3f(0.56,0.64,0.25);
        glVertex2d(-8.5,-9);
        glVertex2d(-3.5,-9);
        glVertex2d(-3.5,-4);
        glVertex2d(-8.5,-4);
    glEnd();
//top
    glBegin(GL_POLYGON);
        glColor3f(0.36,0.36,0.36);
        glVertex2d(-8.55,-3.75);
        glVertex2d(-8.55,-4);
        glVertex2d(-3.45,-4);
        glVertex2d(-3.45,-3.75);
    glEnd();

//window-L
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2d(-8.25,-6.5);
        glVertex2d(-8.25,-4.5);
        glVertex2d(-7,-4.5);
        glVertex2d(-7,-6.5);
    glEnd();
//window-R
    glBegin(GL_POLYGON);
        glVertex2d(-5,-6.5);
        glVertex2d(-5,-4.5);
        glVertex2d(-3.75,-4.5);
        glVertex2d(-3.75,-6.5);
    glEnd();

//wheel-1
    glPushMatrix();
    glTranslated(-7.5,-9,0);
    glColor3f(0.35,0.16,0.14);
        circle(0.75,1.25);
    glPopMatrix();
//wheel-2
    glPushMatrix();
    glTranslated(-4.5,-9,0);
    glColor3f(0.35,0.16,0.14);
        circle(0.75,1.25);
    glPopMatrix();



//connector

    glBegin(GL_POLYGON);
        glColor3f(0.56,0.64,0.25);
        glVertex2d(-3.5,-6.95);
        glVertex2d(-3.5,-7.30);
        glVertex2d(-2.5,-7.30);
        glVertex2d(-2.5,-6.95);
    glEnd();


//coach-2
    glBegin(GL_POLYGON);
        glColor3f(0.56,0.64,0.25);
        glVertex2d(-2.5,-9);
        glVertex2d(2.5,-9);
        glVertex2d(2.5,-4);
        glVertex2d(-2.5,-4);
    glEnd();
//top-2
    glBegin(GL_POLYGON);
        glColor3f(0.36,0.36,0.36);
        glVertex2d(-2.55,-3.75);
        glVertex2d(-2.55,-4);
        glVertex2d(2.55,-4);
        glVertex2d(2.55,-3.75);
    glEnd();

//window-L-2
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2d(-2.25,-6.5);
        glVertex2d(-2.25,-4.5);
        glVertex2d(-1,-4.5);
        glVertex2d(-1,-6.5);
    glEnd();
//window-R-2
    glBegin(GL_POLYGON);
        glVertex2d(1,-6.5);
        glVertex2d(1,-4.5);
        glVertex2d(2.25,-4.5);
        glVertex2d(2.25,-6.5);
    glEnd();



    //wheel-3
    glPushMatrix();
    glTranslated(-1.5,-9,0);
    glColor3f(0.35,0.16,0.14);
        circle(0.75,1.25);
    glPopMatrix();
//wheel-4
    glPushMatrix();
    glTranslated(1.5,-9,0);
    glColor3f(0.35,0.16,0.14);
        circle(0.75,1.25);
    glPopMatrix();






//connector-to engine

    glBegin(GL_POLYGON);
        glColor3f(0.56,0.64,0.25);
        glVertex2d(2.5,-6.95);
        glVertex2d(2.5,-7.30);
        glVertex2d(3.5,-7.30);
        glVertex2d(3.5,-6.95);
    glEnd();




//Enginee
    glBegin(GL_POLYGON);
        glColor3f(0.56,0.64,0.25);
        glVertex2d(3.5,-2.5);
        glVertex2d(3.5,-7);
        glVertex2d(5.5,-7);
        glVertex2d(5.5,-2.5);
    glEnd();
    //base
    glColor3f(0.65,0.99,0.24);
    glBegin(GL_POLYGON);
        glVertex2d(3.25,-7);
        glVertex2d(3.25,-9);
        glVertex2d(8.75,-9);
        glVertex2d(8,-7);
    glEnd();
//front
    glBegin(GL_POLYGON);
    glColor3f(1,0,0.8);
        glVertex2d(8,-7);
        glVertex2d(8,-4.25);
        //glVertex2d(8.75,-3.25);
        glVertex2d(5.5,-4.25);
        glVertex2d(5.5,-7);
    glEnd();
//smoke
        glBegin(GL_POLYGON);
        glColor3f(0.66,0,0.8);
        glVertex2d(6.25,-3.5);
        glVertex2d(6.25,-4.25);
        glVertex2d(7,-4.25);
        glVertex2d(7,-3.5);
        //glVertex2d(5.5,-3.5);
    glEnd();





//wheel-5
    glPushMatrix();
    glTranslated(4,-9,0);
    glColor3f(0.35,0.16,0.14);
        circle(0.75,1.25);
    glPopMatrix();
//wheel-6
    glPushMatrix();
    glTranslated(7,-9,0);
    glColor3f(0.35,0.16,0.14);
        circle(0.75,1.25);
    glPopMatrix();



    glPopMatrix();


 /*
    for(i=0;i<100;i++)
   {
	glColor3f();
	circle(0.75,1.25);
	circle(0.75,1.25);
   }*/



/*
//Railway Station SignBoard

   glBegin(GL_POLYGON);
        glColor3f(0.0,1.0,0.0);
        glVertex2d(-7,7);
        glVertex2d(-7,4);
        glVertex2d(-3,4);
        glVertex2d(-3,7);
    glEnd();
*/



/*
glRasterPos2d(-6.75,6.75);
declare("Kamalapur Railway Station"); */







    glFlush();
    //glSwapBuffers();   //used when we thpe glut double

}


void specialKey(int key, int x, int y)
{
    switch(key){
    case GLUT_KEY_LEFT:
        cx--;
        glutPostRedisplay();
        break;

    case GLUT_KEY_RIGHT:
        cx++;
        glutPostRedisplay();
        break;

    case GLUT_KEY_UP:
        cy++;
        glutPostRedisplay();
        break;

    case GLUT_KEY_DOWN:
        cy--;
        glutPostRedisplay();
        break;

    default:
        break;

    }
}


void rotateC(){
    angle=angle+0.5;
    glutPostRedisplay();
}

void movePass(){
    if(cx>20)
    {
        cx=-5;
    }
    cx=cx+0.001;
    glutPostRedisplay();
}


//cloud moving
void moveCloud(){
    if(scx>20)
    {
        scx=-5;
    }
    scx=scx+0.001;
    glutPostRedisplay();
}

//train moving
void moveTrain(){
    if(tx>20)
    {
        tx=-5;
    }
    tx=tx+0.005;
    glutPostRedisplay();
}

void normalKey(unsigned char key, int x, int y)
{
    switch(key){
    case 's':
    case 'S':
        glutIdleFunc(moveCloud);
        break;


    case 't':
    case 'T':
        glutIdleFunc(moveTrain);
        break;

    case 'p':
    case 'P':
        glutIdleFunc(movePass);
        break;

    case 'x':
    case 'X':
        glutIdleFunc(NULL);
        glutPostRedisplay();
        break;


    default:
        break;

    }
}



int main()
{

    glutInitWindowSize(1200,1000);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Railway Station");
    init();
    glutDisplayFunc(myDisplay);
    glutSpecialFunc(specialKey);
    glutKeyboardFunc(normalKey);
    glutMainLoop();





//Copyright
//https://github.com/mominulhq
//https://www.linkedin.com/in/mominulhq/



    return 0;
}




//Copyright
//https://github.com/mominulhq
//https://www.linkedin.com/in/mominulhq/
