#include<windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cmath>
#include<iostream>
#include<math.h>>
#include<cstdio>
#include <string.h>

#define PI 3.14159265358979323846
/////senario3//////////////
float fmoveCloudC = 0.0f;
float fmoveBusC =0.0f;
float fngle1 = 0.0f;
float fmoveCloudV = 0.0f;
float fposition1 = 0.0f;//initial position Ambulance
float fspeed1 = 1.7f;//Adjust speed as needed
float fcar1 = 600.0f; // Initial position of car
float fspcar1 = 2.0f; // Adjust speed as needed
void fupdateCloudC(int value){
     fmoveCloudC += 1.9f;
     if(fmoveCloudC > 800.0f){
        fmoveCloudC = -600.0f;
     }
     glutPostRedisplay();
     glutTimerFunc(20,fupdateCloudC,0);
}

void fupdateBusC(int value)

{
    if(fposition1 >400.0f)
        fposition1 = -600.0f;

    fposition1 += fspeed1;


      glutPostRedisplay();
     glutTimerFunc(20,fupdateBusC,0);
}
void fupdatecar1(int value) {
    fcar1 -= fspcar1;

    if (fcar1 < -600) { // Check if the car has moved off-screen to the left
        fcar1 = 600.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(16, fupdatecar1, 0);
}
void fupdateCloudV(int value)
{
    fmoveCloudV +=1.9f;
    if(fmoveCloudV >900.0f){
        fmoveCloudV = -600.0f;
    }
    glutPostRedisplay();
     glutTimerFunc(20,fupdateCloudV,0);
}



void initGL()
 {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void fsky ()

{
    ///backgroundsky
glBegin(GL_POLYGON);

        glColor3ub(135, 206, 235);
      //glColor3ub(153,225,225);///sky color

    glVertex2f(-400.0f, -160.0f);
    glVertex2f(-400.0f, 350.0f);
    glVertex2f(600.0f, 350.0f);
    glVertex2f(600.0f, -160.0f);
    glEnd();

}




//cloud


void fcloud()
{
glPushMatrix();
    glTranslatef(fmoveCloudC, 0.0f, 0.0f); // Move the cloud horizontally
glBegin(GL_POLYGON);
float x24 = 63.48f;
float y24 = 258.27f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255);
    float r = 29.08f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x24;
    float y = r * sin(a) + y24;
    glVertex2f(x, y);
}
glEnd();


glBegin(GL_POLYGON);
float x25 = 57.69f;
float y25 =281.94f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255,255, 255);
    float r = 30.43f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x25;
    float y = r * sin(a) + y25;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x27 =87.68f;
float y27=276.68f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255,255, 255);
    float r = 32.89f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x27;
    float y = r * sin(a) + y27;
    glVertex2f(x, y);
}
glEnd();




glBegin(GL_POLYGON);///2nd cloud
float x31 =-178.309f;
float y31=287.9678f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255);
    float r =   21.75f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x31;
    float y = r * sin(a) + y31;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x32 =-149.24f;
float y32 = 306.741f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255,255,255);
    float r =   20.48f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x32;
    float y = r * sin(a) + y32;
    glVertex2f(x, y);
}
glEnd();


 glBegin(GL_POLYGON);
float x33 = -206.73;
float y33 =308.08f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); /// Set color to white
    float r =20.48f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x33;
    float y = r * sin(a) + y33;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x35 = -175.66f;
float y35 = 317.18f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Set color to white

    float r =18.59f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x35;
    float y = r * sin(a) + y35;
    glVertex2f(x, y);
}
glEnd();

glPopMatrix();
//glFlush();
}



void fsun()
{

glBegin(GL_POLYGON);
float x23 = 325.93f;
float y23 = 237.16f;
for (int i = 0; i < 300; i++)
{

    glColor3ub(255, 204, 0);
    float r = 31.16f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x23;
    float y = r * sin(a) + y23;
    glVertex2f(x, y);
}
glEnd();


}

void fbuildings()

{

///1st Building
 glBegin(GL_QUADS);
    glColor3ub(169, 169, 169);
    glVertex2f(-195,-160);  ///1st Building main part
    glVertex2f(-195,180);
    glVertex2f(-400,180);
    glVertex2f(-400,-160);
    glEnd();
 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-300,-160);  ///1st Building white part
    glVertex2f(-300,170);
    glVertex2f(-400,170);
    glVertex2f(-400,-160);
    glEnd();


 glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(-360,130);  ///1st Building main part
    glVertex2f(-360,170);
    glVertex2f(-400,170);
    glVertex2f(-400,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(-300,130);  ///1st Building main part
    glVertex2f(-300,132);
    glVertex2f(-400,132);
    glVertex2f(-400,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(-300,110);  ///1st Building main part
    glVertex2f(-300,112);
    glVertex2f(-400,112);
    glVertex2f(-400,110);
    glEnd();
 glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(-360,110);  ///1st Building main part
    glVertex2f(-360,70);
    glVertex2f(-400,70);
    glVertex2f(-400,110);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(-300,70);  ///1st Building main part
    glVertex2f(-300,72);
    glVertex2f(-400,72);
    glVertex2f(-400,70);
    glEnd();glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(-300,50);  ///1st Building main part
    glVertex2f(-300,52);
    glVertex2f(-400,52);
    glVertex2f(-400,50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(-300,10);  ///1st Building main part
    glVertex2f(-300,12);
    glVertex2f(-400,12);
    glVertex2f(-400,10);
    glEnd();
  glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(-360,50);  ///1st Building main part
    glVertex2f(-360,10);
    glVertex2f(-400,10);
    glVertex2f(-400,50);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(-360,-10);  ///1st Building main part
    glVertex2f(-360,-50);
    glVertex2f(-400,-50);
    glVertex2f(-400,-10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(-300,-52);  ///1st Building main part
    glVertex2f(-300,-50);
    glVertex2f(-400,-50);
    glVertex2f(-400,-52);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(-300,-10);  ///1st Building main part
    glVertex2f(-300,-8);
    glVertex2f(-400,-8);
    glVertex2f(-400,-10);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(-360,-70);  ///2nd Building main part
    glVertex2f(-360,-110);
    glVertex2f(-400,-110);
    glVertex2f(-400,-70);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,-70);  ///1st Building main part
    glVertex2f(-300,-68);
    glVertex2f(-400,-68);
    glVertex2f(-400,-70);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(-300,-110);  ///1st Building main part
    glVertex2f(-300,-108);
    glVertex2f(-400,-108);
    glVertex2f(-400,-110);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(-360,-130);  ///2nd Building main part
    glVertex2f(-360,-160);
    glVertex2f(-400,-160);
    glVertex2f(-400,-130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,-130);  ///1st Building main part
    glVertex2f(-300,-128);
    glVertex2f(-400,-128);
    glVertex2f(-400,-130);
    glEnd();
  glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(-300,130);  ///1st Building main part
    glVertex2f(-300,170);
    glVertex2f(-280,170);
    glVertex2f(-280,130);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(-260,130);  ///2nd Building main part
    glVertex2f(-260,170);
    glVertex2f(-200,170);
    glVertex2f(-200,130);
    glEnd();
 glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(-300,110);  ///2nd Building main part
    glVertex2f(-300,70);
    glVertex2f(-280,70);
    glVertex2f(-280,110);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(-260,110);  ///2nd Building main part
    glVertex2f(-260,70);
    glVertex2f(-200,70);
    glVertex2f(-200,110);
    glEnd();
 glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(-300,50);  ///1st Building main part
    glVertex2f(-300,10);
    glVertex2f(-280,10);
    glVertex2f(-280,50);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(-260,50);  ///1st Building main part
    glVertex2f(-260,10);
    glVertex2f(-200,10);
    glVertex2f(-200,50);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(-300,-50);  ///1st Building main part
    glVertex2f(-300,-10);
    glVertex2f(-280,-10);
    glVertex2f(-280,-50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(-300,132);  ///1st Building main part(right bar)
    glVertex2f(-260,132);
    glVertex2f(-260,134);
    glVertex2f(-300,134);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,112);  ///1st Building main part(right bar)
    glVertex2f(-260,112);
    glVertex2f(-260,114);
    glVertex2f(-300,114);
    glEnd();glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,72);  ///1st Building main part(right bar)
    glVertex2f(-260,72);
    glVertex2f(-260,74);
    glVertex2f(-300,74);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,52);  ///1st Building main part(right bar)
    glVertex2f(-260,52);
    glVertex2f(-200,54);
    glVertex2f(-300,54);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,12);  ///1st Building main part(right bar)
    glVertex2f(-260,12);
    glVertex2f(-260,14);
    glVertex2f(-300,14);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,-12);  ///1st Building main part(right bar)
    glVertex2f(-260,-12);
    glVertex2f(-260,-14);
    glVertex2f(-300,-14);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,-52);  ///1st Building main part(right bar)
    glVertex2f(-260,-52);
    glVertex2f(-260,-54);
    glVertex2f(-300,-54);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,-72);  ///1st Building main part(right bar)
    glVertex2f(-260,-72);
    glVertex2f(-260,-74);
    glVertex2f(-300,-74);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,-112);  ///1st Building main part(right bar)
    glVertex2f(-260,-112);
    glVertex2f(-260,-114);
    glVertex2f(-300,-114);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-300,-132);  ///1st Building main part(right bar)
    glVertex2f(-260,-132);
    glVertex2f(-260,-134);
    glVertex2f(-300,-134);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(-260,-50);  ///1st Building main part
    glVertex2f(-260,-10);
    glVertex2f(-200,-10);
    glVertex2f(-200,-50);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(-300,-70);  ///1st Building main part
    glVertex2f(-300,-110);
    glVertex2f(-280,-110);
    glVertex2f(-280,-70);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(-260,-70);  ///1st Building main part
    glVertex2f(-260,-110);
    glVertex2f(-200,-110);
    glVertex2f(-200,-70);
    glEnd();

 //Door


   glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-320,-130);  //door 1 main
    glVertex2f(-270,-130);
    glVertex2f(-270,-160);
    glVertex2f(-320,-160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-288,-130);  //door 1 main
    glVertex2f(-292,-130);
    glVertex2f(-292,-160);
    glVertex2f(-288,-160);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-260,-130);  //door 1 main
    glVertex2f(-200,-130);
    glVertex2f(-200,-160);
    glVertex2f(-260,-160);
    glEnd();
  glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-228,-130);  //door 1 main
    glVertex2f(-232,-130);
    glVertex2f(-232,-160);
    glVertex2f(-228,-160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-199,170);  //door 1 main
    glVertex2f(-201,170);
    glVertex2f(-201,-160);
    glVertex2f(-199,-160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-264,170);  //door 1 main
    glVertex2f(-262,170);
    glVertex2f(-262,-160);
    glVertex2f(-264,-160);
    glEnd();



/////Hospital
glBegin(GL_QUADS);
    glColor3ub(179, 206, 229);///2nd Building main part 2
    glVertex2f(-180,140);
    glVertex2f(-20,140);
    glVertex2f(-20,172);
    glVertex2f(-180,172);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(-180,140);        ///2nd Building main part 2
    glVertex2f(-20,140);
    glVertex2f(-20,167);
    glVertex2f(-180,167);
    glEnd();

///white part///
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);///1st Building main part 2
    glVertex2f(-180,-180);
    glVertex2f(-20,-180);
    glVertex2f(-20,142);
    glVertex2f(-180,142);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(-180,-180);        ///2nd Building main part 2
    glVertex2f(-20,-180);
    glVertex2f(-20,134);
    glVertex2f(-180,134);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(-70,155);        ///2nd Building main part 2
    glVertex2f(-40,155);
    glVertex2f(-40,160);
    glVertex2f(-70,160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(-52.5,143);        ///2nd Building main part 2
    glVertex2f(-57.5,143);
    glVertex2f(-57.5,167);
    glVertex2f(-52.5,167);
    glEnd();
    ///floor divided 55
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-20,-80);  ///2nd Building 1st floor1
    glVertex2f(-180,-80);
    glVertex2f(-180,-83);
    glVertex2f(-20,-83);

    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-180,-38);  ///2nd Building 2nd floor1
    glVertex2f(-20,-38);
    glVertex2f(-20,-35);
    glVertex2f(-180,-35);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-20,20);  ///1st Building 3rd floor1
    glVertex2f(-180,20);
    glVertex2f(-180,23);
    glVertex2f(-20,23);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-180,75);  ///1st Building 4th floor1
    glVertex2f(-20,75);
    glVertex2f(-20,78);
    glVertex2f(-180,78);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-150,140);  /// 1st Building white line vertical
    glVertex2f(-150,-160);
    glVertex2f(-151,-160);
     glVertex2f(-151,140);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-114,140);  /// 1st Building white line vertical
    glVertex2f(-114,-110);
    glVertex2f(-115,-110);
    glVertex2f(-115,140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-80,140);  /// 4th Building white line vertical
    glVertex2f(-80,-110);
    glVertex2f(-81,-110);
     glVertex2f(-81,140);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-50,140);  /// 1st Building white line vertical
    glVertex2f(-50,-160);
    glVertex2f(-49,-160);
     glVertex2f(-49,140);
    glEnd();

    ///Door
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(-140,-160);  ///1st Building 1st floor1
    glVertex2f(-143,-160);
    glVertex2f(-143,-110);
    glVertex2f(-140,-110);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(-100,-160);  ///1st Building 1st floor1
    glVertex2f(-97,-160);
    glVertex2f(-97,-110);
    glVertex2f(-100,-110);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(-60,-160);  ///1st Building 1st floor1
    glVertex2f(-57,-160);
    glVertex2f(-57,-110);
    glVertex2f(-60,-110);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(-143,-110);  ///1st Building 1st floor1
    glVertex2f(-143,-107);
    glVertex2f(-57,-107);
    glVertex2f(-57,-110);
    glEnd();

    ///End 1st Building///

///Hospital signboard

    glColor3ub(0, 51, 204);
    glRasterPos2i(-160,150);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
    glColor3ub(0, 51, 204);
    glRasterPos2i(-150,150);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glColor3ub(0, 51, 204);
   glRasterPos2i(-140,150);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
    glColor3ub(0, 51, 204);
    glRasterPos2i(-130,150);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'P');
    glColor3ub(0, 51, 204);
    glRasterPos2i(-120,150);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
    glColor3ub(0, 51, 204);
    glRasterPos2i(-110,150);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
     glColor3ub(0, 51, 204);
   glRasterPos2i(-100,150);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
    glColor3ub(0, 51, 204);
    glRasterPos2i(-90,150);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');
    ///End//







///Mosque's Gumbude

glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(520.03f, 0.0f);
    glVertex2f(520.0f, 100.0f);
    glVertex2f(540.0f, 100.0f);
    glVertex2f(540.05f, 30.0f);
glEnd();
glBegin(GL_POLYGON);
float x25 = 555.005f;
float y25 = -15.92f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 128, 0);
    float r = 45.18f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x25;
    float y = r * sin(a) + y25;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
    glColor3ub(211, 211, 211); //white
    glVertex2f(500.0f, -160.0f);
    glVertex2f(500.0f, 0.0f);
    glVertex2f(600.0f, 0.0f);
    glVertex2f(600.0f, -160.0f);
glEnd();

 glBegin(GL_POLYGON);
    glColor3ub(92, 51, 23); // dark drown
    glVertex2f(540.0f, -200.0f);
    glVertex2f(540.0f, -130.0f);
    glVertex2f(550.0f, -120.0f);
    glVertex2f(560.0f, -130.0f);
    glVertex2f(560.0f, -200.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3ub(153, 101, 21);//golden
    glVertex2f(520.0f, 100.0f);
    glVertex2f(540.0f, 100.0f);
    glVertex2f(530.0f, 120.0f);
glEnd();



glLineWidth(4.5);
glBegin(GL_LINES);
    glColor3ub(149,0,179);
    glVertex2f(520.0f, 70.0f);
    glVertex2f(540.0f, 70.0f);
glEnd();


glLineWidth(20.5);
glBegin(GL_LINES);
    glColor3ub(205, 127, 50);
    glVertex2f(520.0f, -100.0f);
    glVertex2f(520.0f, -80.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(205, 127, 50);//bronze
    glVertex2f(580.0f, -80.0f);
    glVertex2f(580.0f, -100.0f);
glEnd();//End Mosque

glBegin(GL_POLYGON); //side Building polygon
    glColor3ub(255,255,255); // Set color to blue (or change as needed)
    glVertex2f(460.0f, -160.0f);
    glVertex2f(460.0f, -10.0f);
    glVertex2f(500.0f,  0.0f);
    glVertex2f(500.0f, -160.0f);
glEnd();

glLineWidth(2.5f); // Set the line width
glBegin(GL_LINES); // Start drawing a line
    glColor3ub(255, 255, 255); // Set the color to white (RGB: 255, 255, 255)
    glVertex2f(490.0f, -35.0f);
    glVertex2f(460.0f, -35.0f);
glEnd();

glBegin(GL_LINES); // Start drawing a line
    glColor3ub(255, 255, 255); // Set the color to white (RGB: 255, 255, 255)
    glVertex2f(495.0f, -80.0f);
    glVertex2f(460.0f, -80.0f);
glEnd();


glBegin(GL_LINES); // Start drawing a line
    glColor3ub(255, 255, 255); // Set the color to white (RGB: 255, 255, 255)
    glVertex2f(460.0f, -130.0f);
    glVertex2f(495.0f, -130.0f);
glEnd();



////4nd Building
 glBegin(GL_QUADS);
    glColor3ub(169, 169, 169);
    glVertex2f(440,-160);  ///2nd Building main part
    glVertex2f(440,180);
    glVertex2f(205,180);
    glVertex2f(205,-160);
    glEnd();
 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(435,-160);  ///2nd Building white part
    glVertex2f(435,170);
    glVertex2f(315,170);
    glVertex2f(315,-160);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(435,130);  ///2nd Building main part
    glVertex2f(435,170);
    glVertex2f(390,170);
    glVertex2f(390,130);
    glEnd();
 glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(435,110);  ///2nd Building main part
    glVertex2f(435,70);
    glVertex2f(390,70);
    glVertex2f(390,110);
    glEnd();
  glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(435,50);  ///2nd Building main part
    glVertex2f(435,10);
    glVertex2f(390,10);
    glVertex2f(390,50);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(435,-10);  ///2nd Building main part
    glVertex2f(435,-50);
    glVertex2f(390,-50);
    glVertex2f(390,-10);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(435,-70);  ///2nd Building main part
    glVertex2f(435,-110);
    glVertex2f(390,-110);
    glVertex2f(390,-70);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(210, 190, 150);
    glVertex2f(435,-130);  ///2nd Building main part
    glVertex2f(435,-160);
    glVertex2f(390,-160);
    glVertex2f(390,-130);
    glEnd();
  glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(315,130);  ///2nd Building main part
    glVertex2f(315,170);
    glVertex2f(295,170);
    glVertex2f(295,130);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(275,130);  ///2nd Building main part
    glVertex2f(275,170);
    glVertex2f(210,170);
    glVertex2f(210,130);
    glEnd();
 glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(315,110);  ///2nd Building main part
    glVertex2f(315,70);
    glVertex2f(295,70);
    glVertex2f(295,110);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(275,110);  ///2nd Building main part
    glVertex2f(275,70);
    glVertex2f(210,70);
    glVertex2f(210,110);
    glEnd();
 glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(315,50);  ///2nd Building main part
    glVertex2f(315,10);
    glVertex2f(295,10);
    glVertex2f(295,50);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(275,50);  ///2nd Building main part
    glVertex2f(275,10);
    glVertex2f(210,10);
    glVertex2f(210,50);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(315,-50);  ///2nd Building main part
    glVertex2f(315,-10);
    glVertex2f(295,-10);
    glVertex2f(295,-50);
    glEnd();
   glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(275,-50);  ///2nd Building main part
    glVertex2f(275,-10);
    glVertex2f(210,-10);
    glVertex2f(210,-50);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(315,-70);  ///2nd Building main part
    glVertex2f(315,-110);
    glVertex2f(295,-110);
    glVertex2f(295,-70);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(223,245,251);
    glVertex2f(275,-70);  ///2nd Building main part
    glVertex2f(275,-110);
    glVertex2f(210,-110);
    glVertex2f(210,-70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(440,130);  ///4th Building main part(right bar)
    glVertex2f(295,130);
    glVertex2f(295,128);
    glVertex2f(440,128);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(440,112);  ///4th Building main part(right bar)
    glVertex2f(295,112);
    glVertex2f(295,110);
    glVertex2f(440,110);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(440,70);  ///4th Building main part(right bar)
    glVertex2f(295,70);
    glVertex2f(295,68);
    glVertex2f(440,68);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(440,52);  ///4th Building main part(right bar)
    glVertex2f(295,52);
    glVertex2f(295,50);
    glVertex2f(440,50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(440,10);  ///4th Building main part(right bar)
    glVertex2f(295,10);
    glVertex2f(295,8);
    glVertex2f(440,8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(440,-12);  ///4th Building main part(right bar)
    glVertex2f(295,-12);
    glVertex2f(295,-10);
    glVertex2f(440,-10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(440,-50);  ///4th Building main part(right bar)
    glVertex2f(295,-50);
    glVertex2f(295,-52);
    glVertex2f(440,-52);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(440,-72);  ///4th Building main part(right bar)
    glVertex2f(295,-72);
    glVertex2f(295,-70);
    glVertex2f(440,-70);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(440,-110);  ///4th Building main part(right bar)
    glVertex2f(295,-110);
    glVertex2f(295,-112);
    glVertex2f(440,-112);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(440,-132);  ///4th Building main part(right bar)
    glVertex2f(295,-132);
    glVertex2f(295,-130);
    glVertex2f(440,-130);
    glEnd();
     ///Door
      glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(210,-130);  //door 1 main
    glVertex2f(275,-130);
    glVertex2f(275,-160);
    glVertex2f(210,-160);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(330,-130);  //door 2 main
    glVertex2f(280,-130);
    glVertex2f(280,-160);
    glVertex2f(330,-160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(248,-160);
    glVertex2f(251,-160);
    glVertex2f(251,-130);
    glVertex2f(248,-130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(239,-160);
    glVertex2f(236,-160);
    glVertex2f(236,-130);
    glVertex2f(239,-130);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(304,-160);
    glVertex2f(307,-160);
    glVertex2f(307,-130);
    glVertex2f(304,-130);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(207,-160);
    glVertex2f(205,-160);
    glVertex2f(205,170);
    glVertex2f(207,170);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(277,-160);
    glVertex2f(275,-160);
    glVertex2f(275,170);
    glVertex2f(277,170);
    glEnd();








    ///3rd Building Food Court///
    /// Station big Right part///
glBegin(GL_QUADS);
    glColor3ub(52, 67, 74);// main part 2
    glVertex2f(10,-160);
    glVertex2f(100,-160);
    glVertex2f(100,-50);
    glVertex2f(10,-50);
    glEnd();

  glBegin(GL_QUADS);
    glColor3ub(91,102,108);
    glVertex2f(100,50);        // main part 2
    glVertex2f(190,50);
    glVertex2f(190,-160);
    glVertex2f(100,-160);
    glEnd();

    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(52, 67, 74);
    glVertex2f(05,-50);  ///Middle divided left right
    glVertex2f(195,-50);
    glVertex2f(195,-45);
    glVertex2f(05,-45);
    glEnd();

    ///stairs//Top
    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(100,50);  ///3//
    glVertex2f(190,50);
    glVertex2f(190,55);
    glVertex2f(100,55);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(95,55);  ///2//
    glVertex2f(195,55);
    glVertex2f(195,60);
    glVertex2f(95,60);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(90,60);  ///1//
    glVertex2f(200,60);
    glVertex2f(200,65);
    glVertex2f(90,65);
    glEnd();

    ///stairs Top End//


    glBegin(GL_QUADS);
    glColor3ub(254, 246, 223);
    glVertex2f(180,-30);        /// white color Food Court Right part
    glVertex2f(110,-30);
    glVertex2f(110,40);
    glVertex2f(180,40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(125,40);  ///middle line 2
    glVertex2f(127,40);
    glVertex2f(127,-30);
    glVertex2f(125,-30);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(165,40);  ///middle line 2
    glVertex2f(167,40);
    glVertex2f(167,-30);
    glVertex2f(165,-30);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(145,40);  ///middle line 2
    glVertex2f(147,40);
    glVertex2f(147,-30);
    glVertex2f(145,-30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(110,40);  ///middle line 2
    glVertex2f(180,40);
    glVertex2f(180,37);
    glVertex2f(110,37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(110,10);  ///middle line 2
    glVertex2f(180,10);
    glVertex2f(180,7);
    glVertex2f(110,7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(110,0);  ///middle line 2
    glVertex2f(180,0);
    glVertex2f(180,-3);
    glVertex2f(110,-3);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(182, 138, 94);
    glVertex2f(105,-35);        /// Food Court board
    glVertex2f(185,-35);
    glVertex2f(185,-52);
    glVertex2f(105,-52);
    glEnd();


    glColor3ub(31, 46, 53);
    glRasterPos2i(113,-46);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'F');
    glColor3ub(31, 46, 53);
    glRasterPos2i(119,-46);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glColor3ub(31, 46, 53);
    glRasterPos2i(125,-46);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glColor3ub(31, 46, 53);
    glRasterPos2i(131,-46);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'D');
    glColor3ub(31, 46, 53);
    glRasterPos2i(137,-46);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'  ');
    glColor3ub(31, 46, 53);
    glRasterPos2i(141,-46);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'C');
    glColor3ub(31, 46, 53);
    glRasterPos2i(146,-46);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
     glColor3ub(31, 46, 53);
    glRasterPos2i(153,-46);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'U');
    glColor3ub(31, 46, 53);
    glRasterPos2i(159,-46);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'R');
    glColor3ub(31, 46, 53);
    glRasterPos2i(165,-46);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
    //glRasterPos2i(171,-46);
    //glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');



    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(100,-55);        /// Food Court Right part
    glVertex2f(190,-55);
    glVertex2f(190,-57);
    glVertex2f(190,-57);
    glEnd();
    glColor3ub(33, 46, 47);
    glVertex2f(100,-65);        /// Food Court Right part
    glVertex2f(190,-67);
    glVertex2f(190,-67);
    glVertex2f(190,-65);
    glEnd();

    ///Door///


    glBegin(GL_QUADS);
    glColor3ub(254, 242, 205);
    glVertex2f(120,-70);        /// Bus Station Right part
    glVertex2f(170,-70);
    glVertex2f(170,-160);
    glVertex2f(120,-160);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(143,-70);        ///black baar door
    glVertex2f(147,-70);
    glVertex2f(147,-160);
    glVertex2f(143,-160);
    glEnd();


    ///End Right part///

    ///Food Court left part

    glBegin(GL_QUADS);
    glColor3ub(254, 246, 223);
    glVertex2f(20,-60);        /// white color Food Court small left part
    glVertex2f(90,-60);
    glVertex2f(90,-140);
    glVertex2f(20,-140);
    glEnd();

    //var line
    glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(45,-60);
    glVertex2f(48,-60);
    glVertex2f(48,-140);
    glVertex2f(45,-140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(65,-60);
    glVertex2f(68,-60);
    glVertex2f(68,-140);
    glVertex2f(65,-140);
    glEnd();



    //hori line
    glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(20,-80);
    glVertex2f(90,-80);
    glVertex2f(90,-83);
    glVertex2f(20,-83);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(20,-98);
    glVertex2f(90,-98);
    glVertex2f(90,-101);
    glVertex2f(20,-101);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(27, 45, 54);
    glVertex2f(20,-118);
    glVertex2f(90,-118);
    glVertex2f(90,-121);
    glVertex2f(20,-121);
    glEnd();



    ///End top Boundary//
    ///End left part//



    ///stairs(left side)//
    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(100,-40);  ///Bottom
    glVertex2f(5,-40);
    glVertex2f(5,-37);
    glVertex2f(100,-37);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(100,-24);  ///middle
    glVertex2f(5,-24);
    glVertex2f(5,-27);
    glVertex2f(100,-27);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(8,-45);  ///horizantally
    glVertex2f(5,-45);
    glVertex2f(5,-20);
    glVertex2f(8,-20);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(23,-45);  ///horizantally
    glVertex2f(20,-45);
    glVertex2f(20,-20);
    glVertex2f(23,-20);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(43,-45);  ///horizantally
    glVertex2f(40,-45);
    glVertex2f(40,-20);
    glVertex2f(43,-20);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(63,-45);  ///horizantally
    glVertex2f(60,-45);
    glVertex2f(60,-20);
    glVertex2f(63,-20);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(33, 46, 47);
    glVertex2f(83,-45);  ///horizantally
    glVertex2f(80,-45);
    glVertex2f(80,-20);
    glVertex2f(83,-20);
    glEnd();

    ///stairs End//

    ///End Food court///



}

void fdrawWheel(float x_center, float y_center, float radius)
{
    glPushMatrix();
    glTranslatef(x_center, y_center, 0);  // Position the wheel
//    glRotatef(_angle1, 0.0f, 0.0f, 1.0f); // Rotate the wheel
    glBegin(GL_POLYGON);
    for (int i = 0; i < 300; i++) {
        glColor3ub(0, 0, 0); // Wheel color: black
        float pi = 3.1416f;
        float angle = (i * 2 * pi) / 300;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
}


void fbus3()

{

glPushMatrix();
   glTranslatef(fposition1,0.0f, 0.0f); // Move the bus along the x-axis
//    glTranslatef(bx,0,0);
   glBegin(GL_POLYGON); ///3rd busssssssssssssss
       glColor3ub(255, 255, 255); // Set color to white
        glVertex2f(60.0f, -300.0f);
       glVertex2f(230.0f, -300.0f);
       glVertex2f(230.0f, -280.0f);
        glVertex2f(200.0f, -220.0f);
         glVertex2f(63.0f, -220.0f);
        glVertex2f(60.0f, -225.0f);
    glEnd();




glLineWidth(20);
glBegin(GL_LINES);
        glColor3ub(0,204,204);
        glVertex2f(190.0f, -250.0f);
        glVertex2f(150.0f, -250.0f);
    glEnd();
    glLineWidth(12);
glBegin(GL_LINES);
        glColor3ub(255, 0, 0);
        glVertex2f(125.0f, -230.0f);
        glVertex2f(125.0f, -270.0f);
    glEnd();

     glBegin(GL_LINES);
        glColor3ub(255, 0, 0);
        glVertex2f(105.0f, -250.0f);
        glVertex2f(145.0f, -250.0f);
    glEnd();
 glLineWidth(12);
glBegin(GL_LINES);
        glColor3ub(255, 0, 0);
        glVertex2f(140.0f, -220.0f);
        glVertex2f(140.0f, -210.0f);
    glEnd();

glBegin(GL_TRIANGLES);
        glColor3ub(0, 204, 204);
        glVertex2f(200.0f, -220.0f);
         glVertex2f(200.0f, -260.0f);
         glVertex2f(220.0f, -260.0f);

    glEnd();

    // Draw the bus wheels using the drawWheel() function
    fdrawWheel(95.0f, -300.0f, 24.4f); // First wheel
    fdrawWheel(180.0f, -300.0f, 25.4f); // Second wheel

    glPopMatrix();


}



void froad ()
{


///main road black  road Draw the polygon
     glBegin(GL_POLYGON);
    glColor3ub(32, 32, 32);
    glVertex2f(-350.0f, -180.0f);
    glVertex2f(600.0f, -180.0f);
    glVertex2f(600.0f, -330.0f);
    glVertex2f(-350.0f, -330.0f);
glEnd();

    glColor3ub(32, 32, 32);//2nd parts black road
    glBegin(GL_POLYGON);
    glVertex2f(-400.0f, -190.0f);
    glVertex2f(-350.0f, -190.0f);
    glVertex2f(-350.0f, -330.0f);
    glVertex2f(-400.0f, -330.0f);
    glEnd();



   glColor3ub(222, 184, 135);//sidewalks
   glBegin(GL_POLYGON);
    glVertex2f(-400.0f, -160.0f);
    glVertex2f(600.0f, -160.0f);
    glVertex2f(600.0f, -190.0f);
    glVertex2f(-400.0f, -190.0f);
    glEnd();

     glLineWidth(2);
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-400.0f, -170.0f);
        glVertex2f(600.0f, -170.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-400.0f, -180.0f);
        glVertex2f(600.0f, -180.0f);


    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-300.0f, -170.0f);
        glVertex2f(-300.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-200.0f, -170.0f);
        glVertex2f(-200.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-100.0f, -170.0f);
        glVertex2f(-100.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(0.0f, -170.0f);
        glVertex2f(0.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(100.0f, -170.0f);
        glVertex2f(100.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(200.0f, -170.0f);
        glVertex2f(200.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(300.0f, -170.0f);
        glVertex2f(300.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(400.0f, -170.0f);
        glVertex2f(400.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(500.0f, -170.0f);
        glVertex2f(500.0f, -160.0f);
    glEnd();
   glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-300.0f, -170.0f);
        glVertex2f(-300.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-200.0f, -170.0f);
        glVertex2f(-200.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-100.0f, -170.0f);
        glVertex2f(-100.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(0.0f, -170.0f);
        glVertex2f(0.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(100.0f, -170.0f);
        glVertex2f(100.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(200.0f, -170.0f);
        glVertex2f(200.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(300.0f, -170.0f);
        glVertex2f(300.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(400.0f, -170.0f);
        glVertex2f(400.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(500.0f, -170.0f);
        glVertex2f(500.0f, -160.0f);
    glEnd();

    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-300.0f, -180.0f);
        glVertex2f(-300.0f, -190.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-200.0f, -180.0f);
        glVertex2f(-200.0f, -190.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-100.0f, -180.0f);
        glVertex2f(-100.0f, -190.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(0.0f, -180.0f);
        glVertex2f(0.0f, -190.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(100.0f, -180.0f);
        glVertex2f(100.0f, -190.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(200.0f, -170.0f);
        glVertex2f(200.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(300.0f, -170.0f);
        glVertex2f(300.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(400.0f, -170.0f);
        glVertex2f(400.0f, -160.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(500.0f, -180.0f);
        glVertex2f(500.0f, -190.0f);
    glEnd();

    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-350.0f, -170.0f);
        glVertex2f(-350.0f, -180.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-250.0f, -170.0f);
        glVertex2f(-250.0f, -180.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(-150.0f, -170.0f);
        glVertex2f(-150.0f, -180.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(50.0f, -170.0f);
        glVertex2f(50.0f, -180.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(150.0f, -170.0f);
        glVertex2f(150.0f, -180.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(250.0f, -170.0f);
        glVertex2f(250.0f, -180.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(350.0f, -170.0f);
        glVertex2f(350.0f, -180.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(450.0f, -170.0f);
        glVertex2f(450.0f, -180.0f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(160,160,160);
        glVertex2f(550.0f, -170.0f);
        glVertex2f(550.0f, -180.0f);
    glEnd();





   glBegin(GL_POLYGON); ///gayyblackkkkkmid blackkkkkkkkkkkkkkkkStart defining a polygon
   glColor3ub(160, 160, 160);
   glVertex2f(600.0f, -190.0f);
   glVertex2f(600.0f, -200.0f);
   glVertex2f(-400.0f, -200.0f);
   glVertex2f(-400.0f, -190.0f);
  glEnd(); // End the polygon





glLineWidth(4.5);
glBegin(GL_LINES);///Beside road lineee dotttttttttttt
    glColor3ub(255, 255, 255);
    glVertex2f(460.0f, -190.0f);
    glVertex2f(460.0f, -200.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(350.0f, -190.0f);
    glVertex2f(350.0f, -200.0f);
glEnd();



glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(100.0f, -190.0f);
    glVertex2f(100.0f, -200.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(20.0f, -190.0f);
    glVertex2f(20.0f, -200.0f);
glEnd();



glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(180.0f, -190.0f);
    glVertex2f(180.0f, -200.0f);
glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(240.0f, -200.0f);
    glVertex2f(240.0f, -190.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(180.0f, -200.0f);
    glVertex2f(180.0f, -190.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(100.0f, -200.0f);
    glVertex2f(100.0f, -190.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(20.0f, -200.0f);
    glVertex2f(20.0f, -190.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-60.0f, -200.0f);
    glVertex2f(-60.0f, -190.0f);


glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(-140.0f, -200.0f);
    glVertex2f(-140.0f, -190.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(-260.0f, -200.0f);
    glVertex2f(-260.0f, -190.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(-320.0f, -200.0f);
    glVertex2f(-320.0f, -190.0f);
glEnd();


///Main road Mid dot lineeeeeeeeeeeee11111111
   glLineWidth(4.5); // Set line width

   glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-340.0f, -260.0f);
    glVertex2f(-390.0f, -260.0f);
 glEnd();


   glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-300.0f, -260.0f);
    glVertex2f(-340.0f, -260.0f);
glEnd();




glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-260.0f, -260.0f);
    glVertex2f(-220.0f, -260.0f);
glEnd();

glLineWidth(4.5);

////lineeeeee22222
glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-160.0f, -260.0f);
    glVertex2f(-120.0f, -260.0f);
glEnd();

glLineWidth(4.5);


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-60.0f, -260.0f);
    glVertex2f(-20.0f, -260.0f);
glEnd();

glLineWidth(4.5);


glBegin(GL_LINES);///4th lineee
    glColor3ub(255, 255, 255);
    glVertex2f(40.0f, -260.0f);
    glVertex2f(80.0f, -260.0f);
glEnd();

glLineWidth(4.5);


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(120.0f, -260.0f);
    glVertex2f(160.0f, -260.0f);
glEnd();
glLineWidth(4.5);


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(200.0f, -260.0f);
    glVertex2f(240.0f, -260.0f);
glEnd();
glLineWidth(4.5);


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(280.0f, -260.0f);
    glVertex2f(320.0f, -260.0f);
glEnd();

glLineWidth(4.5);



glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(360.0f, -260.0f);
    glVertex2f(400.0f, -260.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(440.0f, -260.0f);
    glVertex2f(480.0f, -260.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(520.0f, -260.0f);
    glVertex2f(560.0f, -260.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(590.0f, -260.0f);
    glVertex2f(600.0f, -260.0f);
glEnd();


  glBegin(GL_POLYGON);///opposite road Green partssssssss

     glColor3ub(0,255,42);



    glVertex2f(-400.0f, -390.0f);
    glVertex2f(-400.0f, -330.0f);
    glVertex2f(600.0f, -330.0f);
    glVertex2f(600.0f, -390.0f);
glEnd();




glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2f(-400.0f, -390.0f);
    glVertex2f(-400.0f, -400.0f);
    glVertex2f(600.0f, -400.0f);
    glVertex2f(600.0f, -390.0f);
glEnd();
glBegin(GL_LINES);///Beside road lineee dotttttttttttt
    glColor3ub(255, 255, 255);
    glVertex2f(460.0f, -400.0f);
    glVertex2f(460.0f, -390.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(350.0f, -400.0f);
    glVertex2f(350.0f, -390.0f);
glEnd();



glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(100.0f, -400.0f);
    glVertex2f(100.0f, -390.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(20.0f, -400.0f);
    glVertex2f(20.0f, -390.0f);
glEnd();



glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(180.0f, -390.0f);
    glVertex2f(180.0f, -400.0f);
glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(240.0f, -390.0f);
    glVertex2f(240.0f, -400.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(180.0f, -390.0f);
    glVertex2f(180.0f, -400.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(100.0f, -390.0f);
    glVertex2f(100.0f, -400.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(20.0f, -390.0f);
    glVertex2f(20.0f, -400.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-60.0f, -390.0f);
    glVertex2f(-60.0f, -400.0f);


glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(-140.0f, -390.0f);
    glVertex2f(-140.0f, -400.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(-260.0f, -390.0f);
    glVertex2f(-260.0f, -400.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(-320.0f, -390.0f);
    glVertex2f(-320.0f, -400.0f);
glEnd();





}

void fbreanch()
{
     glLineWidth(2.5);

glBegin(GL_LINES);
    glColor3ub(102, 51, 0);


    glVertex2f(-240.0f, -390.0f);
    glVertex2f(-240.0f, -380.0f);
glEnd();


glLineWidth(2.5);

glBegin(GL_LINES); // Start defining the line
    glColor3ub(102, 51, 0); // Set the color to yellow (RGB values: 255, 255, 0)


    glVertex2f(-190.0f, -380.0f);
    glVertex2f(-190.0f, -390.0f);
glEnd();




glLineWidth(4.5);

glBegin(GL_LINES);
    glColor3ub(102, 51, 0);

    // Define the two endpoints of the line
    glVertex2f(-245.0f, -380.0f); // Starting point of the line
    glVertex2f(-185.0f, -380.0f);
glEnd();




glLineWidth(4.5);

glBegin(GL_LINES);
    glColor3ub(255, 255, 0);


    glVertex2f(-240.0f, -375.0f);
    glVertex2f(-190.0f, -375.0f);
glEnd();


glLineWidth(4.5);

glBegin(GL_LINES);
    glColor3ub(255, 255, 0);


    glVertex2f(-240.0f, -370.0f);
    glVertex2f(-190.0f, -370.0f);
glEnd();



 glLineWidth(4.5);

glBegin(GL_LINES);
    glColor3ub(102, 51, 0);


    glVertex2f(-240.0f, -365.0f);
    glVertex2f(-190.0f, -365.0f);
glEnd();


glLineWidth(4.5);

glBegin(GL_LINES);
    glColor3ub(102, 51, 0);


    glVertex2f(-240.0f, -360.0f);
    glVertex2f(-190.0f, -360.0f);
glEnd();



glBegin(GL_LINES);///2nd breanchcccccccccccccccccccccccccccc
glColor3ub(102, 51, 0);

glVertex2f(140.0f, -390.0f);
glVertex2f(140.0f, -376.0f);

glEnd();

glBegin(GL_LINES);
glColor3ub(102, 51, 0);

glVertex2f(240.0f, -375.0f);
glVertex2f(240.0f, -390.0f);

glEnd();


glBegin(GL_LINES);
glColor3ub(255, 0, 0);

glVertex2f(140.0f, -368.0f);
glVertex2f(240.0f, -368.0f);

glEnd();


glBegin(GL_LINES);
glColor3ub(102, 51, 0);

glVertex2f(126.0f, -376.0f);
glVertex2f(250.0f, -376.0f);

glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 0);

glVertex2f(140.0f, -360.0f);
glVertex2f(240.0f, -360.0f);

glEnd();


glBegin(GL_LINES);
glColor3ub(102, 51, 0);

glVertex2f(145.0f, -355.0f);
glVertex2f(145.0f, -376.0f);

glEnd();
glBegin(GL_LINES);
glColor3ub(102, 51, 0);

glVertex2f(235.0f, -355.0f);
glVertex2f(235.0f, -376.0f);

glEnd();


}

void fCar1() {
      glPushMatrix();
    glTranslatef(fcar1, 0.0f, 0.0f);

    // Car body (deep violet color)
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2f(0, -240);
    glVertex2f(100, -240);
    glVertex2f(90, -195);
    glVertex2f(20, -195);
    glVertex2f(10, -215);
    glVertex2f(0, -215);
    glEnd();



    // Car windows
    glColor3ub(180, 220, 255); // Light blue for windows
    glBegin(GL_POLYGON); // Left window

    glVertex2f(25, -215);
    glVertex2f(25, -195);
     glVertex2f(10, -215);

    glEnd();
      glColor3ub(180, 220, 255);
    glBegin(GL_POLYGON); // Right window
    glVertex2f(40, -215);
    glVertex2f(75, -215);
    glVertex2f(75, -200);
    glVertex2f(40, -200);
    glEnd();

    // Wheels
    glColor3ub(0, 0, 0); // Black wheels
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {  // Left wheel
        float angle = i * 3.14159 / 180;
        glVertex2f(20 + 10 * cos(angle), -240 + 10 * sin(angle));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {  // Right wheel
        float angle = i * 3.14159 / 180;
        glVertex2f(80 + 10 * cos(angle), -240 + 10 * sin(angle));
    }
    glEnd();

    glPopMatrix();
}



void ftrees()
{


glBegin(GL_POLYGON); ///treesssssssssss Start defining the polygon (rectangle in this case)
    glColor3ub(102, 51, 0); // Set the color (brown shade)

    // Define the four vertices of the rectangle
    glVertex2f(70.0f, -390.0f); // Bottom-left corner
    glVertex2f(70.0f, -365.0f); // Top-left corner
    glVertex2f(75.0f, -365.0f); // Top-right corner
    glVertex2f(75.0f, -390.0f); // Bottom-right corner
glEnd(); // End the polygon definition


glBegin(GL_TRIANGLES); // Start defining the triangle
    glColor3ub(0, 128, 0); // Set the color to green (RGB values: 0, 128, 0)

    // Define the three vertices of the triangle (tree foliage)
    glVertex2f(55.0f, -365.0f); // Left corner of the triangle
    glVertex2f(70.0f, -300.0f);  // Top corner of the triangle
    glVertex2f(90.0f, -365.0f); // Right corner of the triangle
glEnd();




glBegin(GL_POLYGON); ///treesssssssssss Start defining the polygon (rectangle in this case)
    glColor3ub(102, 51, 0); // Set the color (brown shade)

    // Define the four vertices of the rectangle
    glVertex2f(20.0f, -390.0f); // Bottom-left corner
    glVertex2f(20.0f, -365.0f); // Top-left corner
    glVertex2f(25.0f, -365.0f); // Top-right corner
    glVertex2f(25.0f, -390.0f); // Bottom-right corner
glEnd(); // End the polygon definition


glBegin(GL_TRIANGLES); // Start defining the triangle
    glColor3ub(0, 128, 0); // Set the color to green (RGB values: 0, 128, 0)

    // Define the three vertices of the triangle (tree foliage)
    glVertex2f(5.0f, -365.0f); // Left corner of the triangle
    glVertex2f(20.0f, -300.0f);  // Top corner of the triangle
    glVertex2f(40.0f, -365.0f); // Right corner of the triangle
glEnd(); // End the triangle definition


glBegin(GL_POLYGON); ///treesssssssssss Start defining the polygon (rectangle in this case)
    glColor3ub(102, 51, 0); // Set the color (brown shade)

    // Define the four vertices of the rectangle
    glVertex2f(-70.0f, -390.0f); // Bottom-left corner
    glVertex2f(-70.0f, -365.0f); // Top-left corner
    glVertex2f(-65.0f, -365.0f); // Top-right corner
    glVertex2f(-65.0f, -390.0f); // Bottom-right corner
glEnd(); // End the polygon definition


glBegin(GL_TRIANGLES); // Start defining the triangle
    glColor3ub(0, 128, 0); // Set the color to green (RGB values: 0, 128, 0)

    // Define the three vertices of the triangle (tree foliage)
    glVertex2f(-85.0f, -365.0f); // Left corner of the triangle
    glVertex2f(-70.0f, -300.0f);  // Top corner of the triangle
    glVertex2f(-50.0f, -365.0f); // Right corner of the triangle
glEnd(); // End the triangle definition

glBegin(GL_POLYGON); ///treesssssssssss Start defining the polygon (rectangle in this case)
    glColor3ub(102, 51, 0); // Set the color (brown shade)

    // Define the four vertices of the rectangle
    glVertex2f(-370.0f, -390.0f); // Bottom-left corner
    glVertex2f(-370.0f, -365.0f); // Top-left corner
    glVertex2f(-365.0f, -365.0f); // Top-right corner
    glVertex2f(-365.0f, -390.0f); // Bottom-right corner
glEnd(); // End the polygon definition


glBegin(GL_TRIANGLES); // Start defining the triangle
    glColor3ub(0, 128, 0); // Set the color to green (RGB values: 0, 128, 0)

    // Define the three vertices of the triangle (tree foliage)
    glVertex2f(-385.0f, -365.0f); // Left corner of the triangle
    glVertex2f(-370.0f, -300.0f);  // Top corner of the triangle
    glVertex2f(-350.0f, -365.0f); // Right corner of the triangle
glEnd(); // End the triangle definition

glBegin(GL_POLYGON); ///treesssssssssss Start defining the polygon (rectangle in this case)
    glColor3ub(102, 51, 0); // Set the color (brown shade)

    // Define the four vertices of the rectangle
    glVertex2f(370.0f, -390.0f); // Bottom-left corner
    glVertex2f(370.0f, -365.0f); // Top-left corner
    glVertex2f(375.0f, -365.0f); // Top-right corner
    glVertex2f(375.0f, -390.0f); // Bottom-right corner
glEnd(); // End the polygon definition


glBegin(GL_TRIANGLES); // Start defining the triangle
    glColor3ub(0, 128, 0); // Set the color to green (RGB values: 0, 128, 0)

    // Define the three vertices of the triangle (tree foliage)
    glVertex2f(355.0f, -365.0f); // Left corner of the triangle
    glVertex2f(370.0f, -300.0f);  // Top corner of the triangle
    glVertex2f(390.0f, -365.0f); // Right corner of the triangle
glEnd(); // End the triangle definition


glBegin(GL_POLYGON); ///treesssssssssss Start defining the polygon (rectangle in this case)
    glColor3ub(102, 51, 0); // Set the color (brown shade)

    // Define the four vertices of the rectangle
    glVertex2f(420.0f, -390.0f); // Bottom-left corner
    glVertex2f(420.0f, -365.0f); // Top-left corner
    glVertex2f(425.0f, -365.0f); // Top-right corner
    glVertex2f(425.0f, -390.0f); // Bottom-right corner
glEnd(); // End the polygon definition


glBegin(GL_TRIANGLES); // Start defining the triangle
    glColor3ub(0, 128, 0); // Set the color to green (RGB values: 0, 128, 0)

    // Define the three vertices of the triangle (tree foliage)
    glVertex2f(405.0f, -365.0f); // Left corner of the triangle
    glVertex2f(420.0f, -300.0f);  // Top corner of the triangle
    glVertex2f(440.0f, -365.0f); // Right corner of the triangle
glEnd(); // End the triangle definition

glBegin(GL_POLYGON); ///treesssssssssss Start defining the polygon (rectangle in this case)
    glColor3ub(102, 51, 0); // Set the color (brown shade)

    // Define the four vertices of the rectangle
    glVertex2f(520.0f, -390.0f); // Bottom-left corner
    glVertex2f(520.0f, -365.0f); // Top-left corner
    glVertex2f(525.0f, -365.0f); // Top-right corner
    glVertex2f(525.0f, -390.0f); // Bottom-right corner
glEnd(); // End the polygon definition


glBegin(GL_TRIANGLES); // Start defining the triangle
    glColor3ub(0, 128, 0); // Set the color to green (RGB values: 0, 128, 0)

    // Define the three vertices of the triangle (tree foliage)
    glVertex2f(505.0f, -365.0f); // Left corner of the triangle
    glVertex2f(520.0f, -300.0f);  // Top corner of the triangle
    glVertex2f(540.0f, -365.0f); // Right corner of the triangle
glEnd(); // End the triangle definition
}


//////////////////////////////////senario 2///////////////////////////////////////////////////////////////////////
float _moveCloudC = 0.0f;//cloud
float _moveBusC =0.0f;//daraz T
float _angle1 = 0.0f; // wheel rotation

float busPosition = 600.0f; // Bus starts from the right side
float wheelAngle = 0.0f;   // BUSWheel rotation angle

float carX = 600.0f;//CAR1

float carT1 = 600.0f; // CAR2
float speedCar1 = 1.7f; // CARspeed

float boatX = -400.0f;  // FIRSY BOAT position from the right side
float boat2X = 600.0f; // Second boat position



float smokeY1 = 0.0f, smokeY2 = 2.0f, smokeY3 = 5.0f;  //Boat 2x smoke
float smokeAngle1 = 0.0f, smokeAngle2 = 8.0f, smokeAngle3 = 9.0f;  // Smoke rotation angles
float smokeSpeed = 0.5f;  // Speed of smoke rising


void drawBoat1(float x, float y) {
 glPushMatrix();
    glTranslatef(x, y, 0.0f);  // Move the boat to the position (x, y)
    glScalef(1.5f, 1.5f, 1.0f);  // Scaling factor
    glColor3ub(101, 67, 33);  // Dark brown color for the base
    glBegin(GL_POLYGON);
    glVertex2f(-50, 0);
    glVertex2f(50, 0);
    glVertex2f(40, -15);
    glVertex2f(-40, -15);
    glEnd();

    // Cabin
    glColor3ub(169, 169, 169);  // Light gray
    glBegin(GL_QUADS);
    glVertex2f(-30, 10);
    glVertex2f(-30, 0);
    glVertex2f(30, 0);
    glVertex2f(30, 10);
    glEnd();

    // Windows
    glColor3ub(0, 0, 0);//black
    glBegin(GL_QUADS);
    glVertex2f(-20, 5);
    glVertex2f(-20, 3);
    glVertex2f(-15, 3);
    glVertex2f(-15, 5);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-5, 5);
    glVertex2f(-5, 3);
    glVertex2f(0, 3);
    glVertex2f(0, 5);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(10, 5);
    glVertex2f(10, 3);
    glVertex2f(15, 3);
    glVertex2f(15, 5);
    glEnd();

    // Chimney
    glColor3ub(255, 0, 0);  // Red
    glBegin(GL_QUADS);
    glVertex2f(-10, 20);
    glVertex2f(-10, 10);
    glVertex2f(0, 10);
    glVertex2f(0, 20);
    glEnd();



    // Smoke Puff 1
    glPushMatrix();
    glTranslatef(-5, 25 + smokeY1, 0.0f);  // Translate smoke
    glRotatef(smokeAngle1, 0, 0, 1);  // Rotate smoke puff 1
    glColor3ub(169, 169, 169);  // Gray smoke
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 5);
    glVertex2f(-3, 0);
    glVertex2f(3, 0);
    glEnd();
    glPopMatrix();

    // Smoke Puff 2
    glPushMatrix();
    glTranslatef(5, 25 + smokeY2, 0.0f);
    glRotatef(smokeAngle2, 0, 0, 1);  // Rotate smoke puff 2
    glColor3ub(169, 169, 169);  // Gray smoke
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 5);
    glVertex2f(-3, 0);
    glVertex2f(3, 0);
    glEnd();
    glPopMatrix();

    // Smoke Puff 3
    glPushMatrix();
    glTranslatef(10, 25 + smokeY3, 0.0f);
    glRotatef(smokeAngle3, 0, 0, 1);  // Rotate smoke puff 3
    glColor3ub(169, 169, 169);  // Gray smoke
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 5);
    glVertex2f(-3, 0);
    glVertex2f(3, 0);
    glEnd();
    glPopMatrix();

    glPopMatrix();
    }
    ///////////////////////////////////////////////////////////////////////////////////////boat1



    void drawBoat(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(1.2f, 1.2f, 1.0f);  // Scaling factor
    // Boat Hull
    glColor3ub(0, 0, 0); // Black
    glBegin(GL_POLYGON);
    glVertex2f(-40, 0);
    glVertex2f(40, 0);
    glVertex2f(30, -15);
    glVertex2f(-30, -15);
    glEnd();

    // Deck
    glColor3ub(139, 69, 19); // Light brown
    glBegin(GL_POLYGON);
    glVertex2f(-25, 0);
    glVertex2f(25, 0);
    glVertex2f(20, 5);
    glVertex2f(-20, 5);
    glEnd();

    // Sail
    glColor3ub(255, 255, 255); // White sail
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 5);
    glVertex2f(0, 30);
    glVertex2f(15, 30);
    glEnd();

    // Mast
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2f(3, 5);
    glVertex2f(3, 30);
    glVertex2f(8, 30);
    glVertex2f(8, 5);
    glEnd();

    glPopMatrix();
}
//////////////////////////////////////////////////////////////////////////////////////////boat2
void sky() {

    glBegin(GL_POLYGON);

// Water
glColor3ub(0, 191, 255); // Light blue or cyan color for water
glVertex2f(-400.0f, -150.0f);
glVertex2f(-400.0f, 150.0f);
glVertex2f(600.0f, 150.0f);
glVertex2f(600.0f, -150.0f);

glEnd();

    /// sky
 glBegin(GL_POLYGON);

    // Top vertices - Yellow
    glColor3ub(255, 255, 102); // Light yellow
    glVertex2f(-400.0f, 350.0f); // Top-left
    glVertex2f(600.0f, 350.0f);  // Top-right

    // Bottom vertices - Orange
    glColor3ub(255, 153, 102); // Reddish-orange
    glVertex2f(600.0f, 150.0f); // Bottom-right
    glVertex2f(-400.0f, 150.0f); // Bottom-left

    glEnd();


    glBegin(GL_POLYGON);

    /// Evening Sun (Red)
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 0, 0); // Red color for the sun
    glVertex2f(500.0f, 250.0f); // Position of the sun
    for (int i = 0; i <= 360; i++) {
        float angle = i * 3.14159 / 180;
        float x = 500.0f + cos(angle) * 40.0f;
        float y = 250.0f + sin(angle) * 40.0f;
        glVertex2f(x, y);
    }
    glEnd();



}
//////////////////////////////////////////////////////////////////eveningsky+sun+water
void cloud()
{
glPushMatrix();
    glTranslatef(_moveCloudC, 0.0f, 0.0f); // Move the cloud horizontally
glBegin(GL_POLYGON);
float x24 = 63.48f;
float y24 = 258.27f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(200, 200, 200);
    float r = 29.08f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x24;
    float y = r * sin(a) + y24;
    glVertex2f(x, y);
}
glEnd();


glBegin(GL_POLYGON);
float x25 = 57.69f;
float y25 =281.94f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(200, 200, 200);
    float r = 30.43f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x25;
    float y = r * sin(a) + y25;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x27 =87.68f;
float y27=276.68f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(200, 200, 200);
    float r = 32.89f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x27;
    float y = r * sin(a) + y27;
    glVertex2f(x, y);
}
glEnd();


///2cloud

glBegin(GL_POLYGON);
float x31 =-178.309f;
float y31=287.9678f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(200, 200, 200);
    float r =   21.75f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x31;
    float y = r * sin(a) + y31;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x32 =-149.24f;
float y32 = 306.741f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(200, 200, 200);
    float r =   20.48f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x32;
    float y = r * sin(a) + y32;
    glVertex2f(x, y);
}
glEnd();


 glBegin(GL_POLYGON);
float x33 = -206.73;
float y33 =308.08f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(200, 200, 200); // white
    float r =20.48f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x33;
    float y = r * sin(a) + y33;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x35 = -175.66f;
float y35 = 317.18f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(200, 200, 200); //  white

    float r =18.59f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x35;
    float y = r * sin(a) + y35;
    glVertex2f(x, y);
}
glEnd();

glPopMatrix();

}



///////////////////////////////////cloud1+cloud2
void trees()
{
glLineWidth(12.5);
glBegin(GL_LINES); ///big trees
glColor3ub(102, 67, 33);
glVertex2f(-340.0f, 0.0f);
glVertex2f(-340.0f, 120.0f);
glEnd();


glLineWidth(9.5);
glBegin(GL_LINES);
glColor3ub(102, 67, 33);
glVertex2f(-340.0f, 120.0f);
glVertex2f(-320.0f, 160.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(102, 67, 33);
glVertex2f(-340.0f, 120.0f);
glVertex2f(-350.0f, 140.0f);
glEnd();


glBegin(GL_POLYGON);
float x32 =-361.17f;
float y32 = 146.0781676217262f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0);
    float r =    24.26f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x32;
    float y = r * sin(a) + y32;
    glVertex2f(x, y);
}
glEnd();


glBegin(GL_POLYGON);
float x33 =-317.94f;
float y33 = 169.437;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0);
    float r =    26.31f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x33;
    float y = r * sin(a) + y33;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x34 =-334.67f;
float y34 = 189.31f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0,100, 0);
    float r = 36.78f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x34;
    float y = r * sin(a) + y34;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x35 =-373.033f;
float y35 =178.532f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0);
    float r = 24.8f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x35;
    float y = r * sin(a) + y35;
    glVertex2f(x, y);
}
glEnd();

///   triangle tree1
glBegin(GL_POLYGON);
    glColor3ub(139, 69, 19); // Brown
    glVertex2f(300.0f, 0.0f);
    glVertex2f(300.0f, 30.0f);
    glVertex2f(305.0f, 30.0f);
    glVertex2f(305.0f, 0.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34); // Green
    glVertex2f(285.0f, 30.0f);
    glVertex2f(320.0f, 30.0f);
    glVertex2f(302.5f, 60.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34); // Green
    glVertex2f(290.0f, 45.0f);
    glVertex2f(315.0f, 45.0f);
    glVertex2f(302.5f, 75.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34); // Green
    glVertex2f(295.0f, 60.0f);
    glVertex2f(310.0f, 60.0f);
    glVertex2f(302.5f, 90.0f);
glEnd();


///  triangle tree2
glBegin(GL_POLYGON);
    glColor3ub(139, 69, 19); // Brown
    glVertex2f(250.0f, 0.0f);
    glVertex2f(250.0f, 30.0f);
    glVertex2f(255.0f, 30.0f);
    glVertex2f(255.0f, 0.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34); // Green
    glVertex2f(235.0f, 30.0f);
    glVertex2f(270.0f, 30.0f);
    glVertex2f(252.5f, 60.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34); // Green leaves
    glVertex2f(240.0f, 45.0f); // Shifted
    glVertex2f(265.0f, 45.0f);
    glVertex2f(252.5f, 75.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34); // Green
    glVertex2f(245.0f, 60.0f);
    glVertex2f(260.0f, 60.0f);
    glVertex2f(252.5f, 90.0f);
glEnd();
glLineWidth(12.5);
    glBegin(GL_LINES);
    glColor3ub(102, 67, 33);
    glVertex2f(-340.0f, 0.0f);
    glVertex2f(-340.0f, 120.0f);
    glEnd();

    glLineWidth(9.5);
    glBegin(GL_LINES);
    glColor3ub(102, 67, 33);
    glVertex2f(-340.0f, 120.0f);
    glVertex2f(-320.0f, 160.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(102, 67, 33);
    glVertex2f(-340.0f, 120.0f);
    glVertex2f(-350.0f, 140.0f);
    glEnd();





///big Tree smaller 2
glLineWidth(10.0);
glBegin(GL_LINES);
glColor3ub(102, 67, 33);
glVertex2f(-250.0f, 0.0f);
glVertex2f(-250.0f, 100.0f);
glEnd();

glLineWidth(7.5);
glBegin(GL_LINES);
glColor3ub(102, 67, 33);
glVertex2f(-250.0f, 100.0f);
glVertex2f(-235.0f, 130.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(102, 67, 33);
glVertex2f(-250.0f, 100.0f);
glVertex2f(-260.0f, 120.0f);
glEnd();

glBegin(GL_POLYGON);
float x1 = -270.0f;
float y1 = 130.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0);
    float r = 18.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x1;
    float y = r * sin(a) + y1;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x2 = -240.0f;
float y2 = 145.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0);
    float r = 20.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x2;
    float y = r * sin(a) + y2;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x3 = -255.0f;
float y3 = 165.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0);
    float r = 28.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x3;
    float y = r * sin(a) + y3;
    glVertex2f(x, y);
}
glEnd();

///big Tree smaller 3 right side
glLineWidth(10.0);
glBegin(GL_LINES);
glColor3ub(102, 67, 33);
glVertex2f(150.0f, 0.0f);
glVertex2f(150.0f, 100.0f);
glEnd();

glLineWidth(7.5);
glBegin(GL_LINES);
glColor3ub(102, 67, 33);
glVertex2f(150.0f, 100.0f);
glVertex2f(165.0f, 130.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(102, 67, 33);
glVertex2f(150.0f, 100.0f);
glVertex2f(140.0f, 120.0f);
glEnd();

glBegin(GL_POLYGON);
float x4 = 130.0f;
float y4 = 130.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0);
    float r = 18.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x4;
    float y = r * sin(a) + y4;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x5 = 160.0f;
float y5 = 145.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0);
    float r = 20.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x5;
    float y = r * sin(a) + y5;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x6 = 145.0f;
float y6 = 165.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0);
    float r = 28.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x6;
    float y = r * sin(a) + y6;
    glVertex2f(x, y);
}
glEnd();


///sky Tree 1
glLineWidth(5.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0); // Black color
glVertex2f(320.0f, 150.0f);
glVertex2f(320.0f, 190.0f);
glEnd();

glLineWidth(4.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(320.0f, 190.0f);
glVertex2f(330.0f, 205.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(320.0f, 190.0f);
glVertex2f(310.0f, 200.0f);
glEnd();

glBegin(GL_POLYGON);
float x7 = 305.0f;
float y7 = 205.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 0, 0);
    float r = 9.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x7;
    float y = r * sin(a) + y7;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x8 = 330.0f;
float y8 = 215.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 0, 0);
    float r = 10.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x8;
    float y = r * sin(a) + y8;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x9= 318.0f;
float y9 = 225.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 0, 0);
    float r = 15.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x9;
    float y = r * sin(a) + y9;
    glVertex2f(x, y);
}
glEnd();

///sky Tree 1
glLineWidth(5.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(280.0f, 150.0f);
glVertex2f(280.0f, 190.0f);
glEnd();

glLineWidth(4.0);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(280.0f, 190.0f);
glVertex2f(290.0f, 205.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(280.0f, 190.0f);
glVertex2f(270.0f, 200.0f);
glEnd();

glBegin(GL_POLYGON);
float x10 = 265.0f;
float y10 = 205.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 0, 0);
    float r = 9.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x10;
    float y = r * sin(a) + y10;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x11 = 290.0f;
float y11 = 215.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 0, 0);
    float r = 10.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x11;
    float y = r * sin(a) + y11;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON);
float x12 = 278.0f;
float y12 = 225.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 0, 0);
    float r = 15.0f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x12;
    float y = r * sin(a) + y12;
    glVertex2f(x, y);
}
glEnd();


}

////////////////////////////////////////////////


void newroad2()///road two
{

    glBegin(GL_POLYGON);
    glColor3ub(96, 96,96);
    glVertex2f(-400.0f, -150.0f);
    glVertex2f(-400.0f, -400.0f);
    glVertex2f(600.0f, -400.0f);
    glVertex2f(600.0f, -150.0f);
glEnd();


glLineWidth(8.5);
glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-300.0f, -300.0f);
    glVertex2f(-200.0f, -300.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-100.0f, -300.0f);
    glVertex2f(0.0f, -300.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(100.0f, -300.0f);
    glVertex2f(200.0f, -300.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(300.0f, -300.0f);
    glVertex2f(400.0f, -300.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(500.0f, -300.0f);
    glVertex2f(600.0f, -300.0f);
glEnd();


}
///daraz bus
void drawWheel(float x_center, float y_center, float radius)
{
    glPushMatrix();
    glTranslatef(x_center, y_center, 0);  // Position the wheel
    glRotatef(_angle1, 0.0f, 0.0f, 1.0f); // Rotate the wheel
    glBegin(GL_POLYGON);
    for (int i = 0; i < 300; i++) {
        glColor3ub(0, 0, 0); // black
        float pi = 3.1416f;
        float angle = (i * 2 * pi) / 300;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
}
void drawText(const char* text, float x, float y) {
    glColor3ub(255, 255, 255); //white
    glRasterPos2f(x, y);
    for (int i = 0; i < strlen(text); i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }
}
float position1 = 0.0f;
float speed1 = 2.0f;
void bus3()

{

glPushMatrix();
   glTranslatef(position1,0.0f, 0.0f); // Move the bus along the x-axis
//    glTranslatef
    glBegin(GL_POLYGON);
    glColor3ub(255, 102, 0); //orange
    glVertex2f(60.0f, -370.0f);
    glVertex2f(220.0f, -370.0f);
    glVertex2f(220.0f, -270.0f);
    glVertex2f(60.0f, -270.0f);
    glEnd();
     drawText("DARAZ", 100.0f, -320.0f);

 glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255); //white
    glVertex2f(220.0f, -370.0f);
    glVertex2f(280.0f, -370.0f);
    glVertex2f(260.0f, -310.0f);
    glVertex2f(220.0f, -310.0f);
    glEnd();

 glBegin(GL_POLYGON);
    glColor3ub(0, 204, 204);
    glVertex2f(230.0f, -310.0f);
    glVertex2f(250.0f, -310.0f);
    glVertex2f(250.0f, -330.0f);
    glVertex2f(230.0f, -330.0f);
    glEnd();

    drawWheel(90.0f, -370.0f, 24.4f);
    drawWheel(200.0f, -370.0f, 25.4f);
    glPopMatrix();


}


///////////////////////////////////////////////////
void road ()///road1
{

    glBegin(GL_POLYGON);
    glColor3ub(32, 32, 32);
    glVertex2f(-350.0f, 0.0f);
    glVertex2f(600.0f, 0.0f);
    glVertex2f(600.0f, -150.0f);
    glVertex2f(-350.0f, -150.0f);
glEnd();

    glColor3ub(32, 32, 32);
    glBegin(GL_POLYGON);
    glVertex2f(-400.0f, -50.0f);
    glVertex2f(-350.0f, -50.0f);
    glVertex2f(-350.0f, -150.0f);
    glVertex2f(-400.0f, -150.0f);
    glEnd();



  glBegin(GL_POLYGON);
   glColor3ub(0, 255, 0);
    glVertex2f(-350.0f, -50.0013f);
    glVertex2f(-350.0f, 0.0f);
    glVertex2f(600.0f, 0.0f);
    glVertex2f(600.0f, -40.0f);
glEnd();



glColor3ub(0, 255, 0);


    glBegin(GL_POLYGON);
    glVertex2f(-400.0f, 0.0f);
    glVertex2f(-350.0f, 0.0f);
    glVertex2f(-350.0f, -40.0f);
    glVertex2f(-400.0f, -40.0f);
    glEnd();



   glBegin(GL_POLYGON);
   glColor3ub(160, 160, 160);
   glVertex2f(600.0f, -50.0f);
   glVertex2f(600.0f, -40.0f);
   glVertex2f(-350.0f, -40.0f);
   glVertex2f(-350.0f, -50.0f);
glEnd();

 glColor3ub(160, 160, 160);
    glBegin(GL_POLYGON);
    glVertex2f(-400.0f, -40.0f);
    glVertex2f(-400.0f, -50.0f);
    glVertex2f(-350.0f, -50.0f);
    glVertex2f(-350.0f, -40.0f);
    glEnd();
glBegin(GL_LINES);///Beside road lineee dotttttttttttt
    glColor3ub(255, 255, 255);
    glVertex2f(460.0f, -50.0f);
    glVertex2f(460.0f, -40.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(350.0f, -50.0f);
    glVertex2f(350.0f, -40.0f);
glEnd();



glBegin(GL_LINES);
    glColor3ub(255, 255, 255); //  white
    glVertex2f(100.0f, -50.0f);
    glVertex2f(100.0f, -40.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(20.0f, -50.0f);
    glVertex2f(20.0f, -40.0f);
glEnd();



glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(180.0f, -40.0f);
    glVertex2f(180.0f, -50.0f);
glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(240.0f, -40.0f);
    glVertex2f(240.0f, -50.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255); //  white
    glVertex2f(180.0f, -40.0f);
    glVertex2f(180.0f, -50.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(100.0f, -40.0f);
    glVertex2f(100.0f, -50.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(20.0f, -40.0f);
    glVertex2f(20.0f, -50.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-60.0f, -40.0f);
    glVertex2f(-60.0f, -50.0f);


glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(-140.0f, -40.0f);
    glVertex2f(-140.0f, -50.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(-260.0f, -40.0f);
    glVertex2f(-260.0f, -50.0f);
glEnd();


glLineWidth(4.5);


glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Set the color to white
    glVertex2f(-320.0f, -40.0f);
    glVertex2f(-320.0f, -50.0f);
glEnd();


   ///Main road Mid dot lineeeeeeeeeeeee11111111
   glLineWidth(4.5); // Set line width

   glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-340.0f, -80.0f);
    glVertex2f(-390.0f, -80.0f);
glEnd();


   glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-300.0f, -80.0f);
    glVertex2f(-340.0f, -80.0f);
glEnd();




glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-260.0f, -80.0f);
    glVertex2f(-220.0f, -80.0f);
glEnd();

glLineWidth(4.5);

////lineeeeee22222
glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-160.0f, -80.0f);
    glVertex2f(-120.0f, -80.0f);
glEnd();

glLineWidth(4.5);


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-60.0f, -80.0f);
    glVertex2f(-20.0f, -80.0f);
glEnd();

glLineWidth(4.5);


glBegin(GL_LINES);///4th lineee
    glColor3ub(255, 255, 255);
    glVertex2f(40.0f, -80.0f);
    glVertex2f(80.0f, -80.0f);
glEnd();

glLineWidth(4.5);


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(120.0f, -80.0f);
    glVertex2f(160.0f, -80.0f);
glEnd();
glLineWidth(4.5);


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(200.0f, -80.0f);
    glVertex2f(240.0f, -80.0f);
glEnd();
glLineWidth(4.5);


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(280.0f, -80.0f);
    glVertex2f(320.0f, -80.0f);
glEnd();

glLineWidth(4.5);



glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(360.0f, -80.0f);
    glVertex2f(400.0f, -80.0f);
glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(440.0f, -80.0f);
    glVertex2f(480.0f, -80.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(520.0f, -80.0f);
    glVertex2f(560.0f, -80.0f);
glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(590.0f, -80.0f);
    glVertex2f(600.0f, -80.0f);
glEnd();


/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
  glBegin(GL_POLYGON); ///two roads middle part grass

     glColor3ub(0,255,42);



    glVertex2f(-400.0f, -200.0f);
    glVertex2f(-400.0f, -150.0f);
    glVertex2f(600.0f, -150.0f);
    glVertex2f(600.0f, -200.0f);
glEnd();

    ///two roads middle part tree1
    glColor3f(0.6f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-300, -190);
    glVertex2f(-295, -190);
    glVertex2f(-295, -165);
    glVertex2f(-300, -165);
    glEnd();

    glColor3f(0.0f, 0.5f, 0.0f); // *Deep Green Leaves*
    glBegin(GL_TRIANGLES);
    glVertex2f(-310, -165);
    glVertex2f(-285, -165);
    glVertex2f(-297, -140);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-308, -158);
    glVertex2f(-287, -158);
    glVertex2f(-297, -130);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-305, -150);
    glVertex2f(-290, -150);
    glVertex2f(-297, -120);
    glEnd();

    ///two roads middle part tree2
    glColor3f(0.6f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-150, -190);
    glVertex2f(-145, -190);
    glVertex2f(-145, -165);
    glVertex2f(-150, -165);
    glEnd();

    glColor3f(0.0f, 0.5f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-160, -165);
    glVertex2f(-135, -165);
    glVertex2f(-147, -140);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-158, -158);
    glVertex2f(-137, -158);
    glVertex2f(-147, -130);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-155, -150);
    glVertex2f(-140, -150);
    glVertex2f(-147, -120);
    glEnd();

 ///two roads middle part tree3
    glColor3f(0.6f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0, -190);
    glVertex2f(5, -190);
    glVertex2f(5, -165);
    glVertex2f(0, -165);
    glEnd();

    glColor3f(0.0f, 0.5f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-10, -165);
    glVertex2f(15, -165);
    glVertex2f(3, -140);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-8, -158);
    glVertex2f(13, -158);
    glVertex2f(3, -130);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-5, -150);
    glVertex2f(10, -150);
    glVertex2f(3, -120);
    glEnd();

    ///two roads middle part tree4
    glColor3f(0.6f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(150, -190);
    glVertex2f(155, -190);
    glVertex2f(155, -165);
    glVertex2f(150, -165);
    glEnd();

    glColor3f(0.0f, 0.5f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(140, -165);
    glVertex2f(165, -165);
    glVertex2f(152, -140);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(142, -158);
    glVertex2f(162, -158);
    glVertex2f(152, -130);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(145, -150);
    glVertex2f(160, -150);
    glVertex2f(152, -120);
    glEnd();
 ///two roads middle part tree5
    glColor3f(0.6f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(300, -190);
    glVertex2f(305, -190);
    glVertex2f(305, -165);
    glVertex2f(300, -165);
    glEnd();

    glColor3f(0.0f, 0.5f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(290, -165);
    glVertex2f(315, -165);
    glVertex2f(302, -140);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(292, -158);
    glVertex2f(312, -158);
    glVertex2f(302, -130);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(295, -150);
    glVertex2f(310, -150);
    glVertex2f(302, -120);
    glEnd();

///////////////////////////////////////////////////

glBegin(GL_POLYGON);//new road boundary
    glColor3ub(128, 128, 128);
    glVertex2f(-400.0f, -200.0f);
    glVertex2f(-400.0f, -220.0f);
    glVertex2f(600.0f, -220.0f);
    glVertex2f(600.0f, -200.0f);
glEnd();

glLineWidth(10.5f);

glBegin(GL_LINES);//line
    glColor3ub(255, 255, 255);
    glVertex2f(-300.0f, -200.0f);
    glVertex2f(-300.0f, -220.0f);
glEnd();

glBegin(GL_LINES);//line
    glColor3ub(255, 255, 255);
    glVertex2f(-150.0f, -200.0f);
    glVertex2f(-150.0f, -220.0f);
glEnd();

glBegin(GL_LINES);//line
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, -200.0f);
    glVertex2f(0.0f, -220.0f);
glEnd();



glBegin(GL_LINES);//line
    glColor3ub(255, 255, 255);
    glVertex2f(150.0f, -200.0f);
    glVertex2f(150.0f, -220.0f);
glEnd();


glBegin(GL_LINES);//line
    glColor3ub(255, 255, 255);
    glVertex2f(300.0f, -200.0f);
    glVertex2f(300.0f, -220.0f);
glEnd();


glBegin(GL_LINES);//line
    glColor3ub(255, 255, 255);
    glVertex2f(450.0f, -200.0f);
    glVertex2f(450.0f, -220.0f);
glEnd();


}

void drawCar1() {
      glPushMatrix();
    glTranslatef(carT1, -100.0f, 0.0f);

    /// Car body (deep violet color)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 102);
    glVertex2f(0, 0);
    glVertex2f(100, 0);
    glVertex2f(110, 30);
    glVertex2f(-10, 30);
    glEnd();

    // Car roof
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 102);
    glVertex2f(20, 30);
    glVertex2f(90, 30);
    glVertex2f(75, 50);
    glVertex2f(35, 50);
    glEnd();

    // Car windows
    glColor3ub(180, 220, 255); // Light blue for windows
    glBegin(GL_POLYGON); // Left window
    glVertex2f(25, 30);
    glVertex2f(50, 30);
    glVertex2f(50, 45);
    glVertex2f(30, 45);
    glEnd();

    glBegin(GL_POLYGON); // Right window
    glVertex2f(60, 30);
    glVertex2f(85, 30);
    glVertex2f(80, 45);
    glVertex2f(55, 45);
    glEnd();

    // Wheels
    glColor3ub(0, 0, 0); // Black wheels
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {  // Left wheel
        float angle = i * 3.14159 / 180;
        glVertex2f(20 + 10 * cos(angle), -5 + 10 * sin(angle));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {  // Right wheel
        float angle = i * 3.14159 / 180;
        glVertex2f(80 + 10 * cos(angle), -5 + 10 * sin(angle));
    }
    glEnd();

    glPopMatrix();
}
/////////////////////////////////////////////////////////////////////////////////////////////////
void drawBus() {
    glPushMatrix();
    glTranslatef(busPosition, -130.0f, 0.0f);

    ///(Coffee Color)
    glColor3ub(111, 78, 55);
    glBegin(GL_POLYGON);
    glVertex2f(40.0f, 30.0f);
    glVertex2f(160.0f, 30.0f);
    glVertex2f(160.0f, 90.0f);
    glVertex2f(40.0f, 90.0f);
    glEnd();

    // Curved roof
    glBegin(GL_POLYGON);
    glVertex2f(50.0f, 90.0f);
    glVertex2f(150.0f, 90.0f);
    glVertex2f(140.0f, 105.0f);
    glVertex2f(60.0f, 105.0f);
    glEnd();

    // Windows (Smaller, evenly spaced)
    glColor3ub(200, 255, 255);

    // First window
    glBegin(GL_POLYGON);
    glVertex2f(55.0f, 65.0f);
    glVertex2f(70.0f, 65.0f);
    glVertex2f(70.0f, 85.0f);
    glVertex2f(55.0f, 85.0f);
    glEnd();

    // Second window
    glBegin(GL_POLYGON);
    glVertex2f(75.0f, 65.0f);
    glVertex2f(90.0f, 65.0f);
    glVertex2f(90.0f, 85.0f);
    glVertex2f(75.0f, 85.0f);
    glEnd();

    // Third window
    glBegin(GL_POLYGON);
    glVertex2f(95.0f, 65.0f);
    glVertex2f(110.0f, 65.0f);
    glVertex2f(110.0f, 85.0f);
    glVertex2f(95.0f, 85.0f);
    glEnd();

    // Fourth window
    glBegin(GL_POLYGON);
    glVertex2f(115.0f, 65.0f);
    glVertex2f(130.0f, 65.0f);
    glVertex2f(130.0f, 85.0f);
    glVertex2f(115.0f, 85.0f);
    glEnd();
    // "ENA" logo
    drawText("ENA", 90.0f, 50.0f);

    // Wheels with rotation
    drawWheel(60.0f, 30.0f, 10.0f);
    drawWheel(120.0f, 30.0f, 10.0f);

    glPopMatrix();
}

///red car
void drawCar() {
    glPushMatrix();
    glTranslatef(carX, -250.0f, 0.0f);
    // Car body
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0); // Red color
    glVertex2f(0, 0);
    glVertex2f(120, 0);
    glVertex2f(140, 30);
    glVertex2f(-20, 30);
    glEnd();

    // Car roof
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(20, 30);
    glVertex2f(100, 30);
    glVertex2f(90, 50);
    glVertex2f(30, 50);
    glEnd();

    // Car windows
    glColor3ub(180, 220, 255); // Light blue for windows
    glBegin(GL_POLYGON); // Left window
    glVertex2f(30, 30);
    glVertex2f(50, 30);
    glVertex2f(50, 45);
    glVertex2f(30, 45);
    glEnd();

    glBegin(GL_POLYGON); // Right window
    glVertex2f(60, 30);
    glVertex2f(80, 30);
    glVertex2f(80, 45);
    glVertex2f(60, 45);
    glEnd();

    // Wheels
    glColor3ub(169, 169, 169); // Gray color
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) { // Left wheel
        float angle = i * 3.14159 / 180;
        glVertex2f(30 + 15 * cos(angle), -5 + 15 * sin(angle));
    }
    glEnd();

    glBegin(GL_POLYGON); // Right wheel
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.14159 / 180;
        glVertex2f(90 + 15 * cos(angle), -5 + 15 * sin(angle));
    }
    glEnd();

    // Hubcaps
    glColor3ub(255, 255, 255); // White for hubcaps
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.14159 / 180;
        glVertex2f(30 + 8 * cos(angle), -5 + 8 * sin(angle));
    }
    glEnd();

    glBegin(GL_POLYGON); // Right wheel hubcap
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.14159 / 180;
        glVertex2f(90 + 8 * cos(angle), -5 + 8 * sin(angle));
    }
    glEnd();

    glPopMatrix();
}





void updateCloudC(int value){
     _moveCloudC += 1.9f;
     if(_moveCloudC > 600.0f){
        _moveCloudC = -600.0f;
     }
     glutPostRedisplay();
     glutTimerFunc(20,updateCloudC,0);
}


void updateBusC(int value)

{
    if(position1 >600.0f)
        position1 = -600.0f;

    position1 += speed1;


      glutPostRedisplay();
     glutTimerFunc(20,updateBusC,0);
}

void update(int value) {
    busPosition -= 2.5f; // Move left
    if (busPosition < -600.0f)
        busPosition = 600.0f;

    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}


void update2(int value) {
    carX += 2.0f; // Move the car

    // Reset car position
    if (carX > 600) {
        carX = -350.0f;
    }

    glutPostRedisplay();  // Redraw the screen
    glutTimerFunc(16, update2, 0);
}


void updateCar1(int value) {
    carT1 -= speedCar1;

    if (carT1 < -600) { // Check if the car has moved off-screen to the left
        carT1 = 600.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(16, updateCar1, 0);
}

void update5(int value) {

    boat2X -= 1.5f;  // Move left


    // Reset position when out of screen
    if (boat2X < -400) boat2X = 600;
    glutPostRedisplay();
    glutTimerFunc(50, update5, 0);
}
void update10(int value) {
   boatX += 1.5f; // Move boat
    if (boatX > 600) boatX = -600;
 smokeAngle1 += 2.0f;  // Rotate smoke puff 1
    smokeAngle2 += 2.0f;  // Rotate smoke puff 2
    smokeAngle3 += 2.0f;  // Rotate smoke puff 3

    // Move smoke puffs up
    smokeY1 += smokeSpeed;
    smokeY2 += smokeSpeed;
    smokeY3 += smokeSpeed;

    // smoke positions when they go too high
    if (smokeY1 > 50.0f) smokeY1 = 0.0f;
    if (smokeY2 > 50.0f) smokeY2 = 0.0f;
    if (smokeY3 > 50.0f) smokeY3 = 0.0f;
    glutPostRedisplay();
    glutTimerFunc(20, update10, 0);
}


////////////////////////////////////////////////////////senario1////////////////////////////////////////////////////
void sound()
{

    PlaySound("sound.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}
//  variables
GLfloat fanRotationAngle = 0.0f;
GLfloat sunPosition = 0.0f;
GLfloat cloudPosition = 0.0f;
GLfloat boatPosition1 = 0.0f;
GLfloat boatPosition2 = 0.0f;
GLfloat planePosition = 0.0f;

GLfloat sunSpeed = 2.0f;
GLfloat cloudSpeed = 2.0f;
GLfloat boatSpeed1 = 3.5f;
//boatSpeed 2 (left to right)
GLfloat boatSpeed2 = 3.5f;
GLfloat planeSpeed = 5.0f;
GLfloat fanRotationSpeed = 5.0f;

void Movement(int value) {
    // Sun
    sunPosition += sunSpeed;
    if (sunPosition > 750.0f) {
        sunPosition = -400.0f;
    }

    // Cloud
    cloudPosition += cloudSpeed;
    if (cloudPosition > 1000.0f) {
        cloudPosition = -1000.0f;
    }

    // Boat 1 (right to left)
    boatPosition1 -= boatSpeed1;
    if (boatPosition1 < -1000.0f) {
        boatPosition1 = 1000.0f;
    }

    // Boat 2 (left to right)
    boatPosition2 += boatSpeed2;
    if (boatPosition2 > 1000.0f) {
        boatPosition2 = -1000.0f;
    }

    // Plane (right to left)
    planePosition -= planeSpeed;
    if (planePosition < -1000.0f) {
        planePosition = 1000.0f;
    }


    // Fan rotation
    fanRotationAngle += fanRotationSpeed;
    if (fanRotationAngle >= 360.0f) {
        fanRotationAngle = 0.0f;
    }

    glutTimerFunc(100, Movement, 0); //every 100ms call movement function to update animation
    glutPostRedisplay(); //Triggers a redraw of the screen after movement updates.

}

void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:
    planeSpeed=105;
break;
case GLUT_KEY_DOWN:
    planeSpeed=5;
break;
}
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-400,600,-400,350);
}





void drawCircle(GLfloat x, GLfloat y, GLfloat radius)
{
    int triangleAmount = 300;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}







void drawAirplane() {
    glPushMatrix();
    glTranslatef( planePosition, 0.0f, 0.0f);
    glTranslatef(100.0f, 150.0f, 0.0f); // Positioned right of the sun


       glColor3f(1.0f, 0.75f, 0.8f); //picher side pakhna
      glBegin(GL_QUADS);
    glVertex2f(170, 110);
    glVertex2f(250, 140);
    glVertex2f(240, 150);
    glVertex2f(150, 120);
    glEnd();


       glColor3f(1.0f, 0.75f, 0.8f);//samner pakhna
    glBegin(GL_QUADS);
    glVertex2f(140, 90);
    glVertex2f(260, 40);
    glVertex2f(250, 60);
    glVertex2f(170, 100);
    glEnd();


   glColor3f(0.678f, 0.847f, 0.902f);//main body
    glBegin(GL_QUADS);
    glVertex2f(100, 120);
    glVertex2f(310, 120);
    glVertex2f(300, 80);
    glVertex2f(100, 80);
    glEnd();

   glColor3f(0.678f, 0.847f, 0.902f);//last part
   glBegin(GL_QUADS);
    glVertex2f(310, 140);
    glVertex2f(300, 80);
    glVertex2f(320, 80);
    glVertex2f(330, 150);
    glEnd();


  glColor3f(0.678f, 0.847f, 0.902f);
    glBegin(GL_TRIANGLES);//samner mukh
    glVertex2f(100, 120);
    glVertex2f(100, 80);
    glVertex2f(70, 95);
    glEnd();

       glColor3f(0.0f, 0.0f, 0.0f); // Windows
    // Window 1
      glBegin(GL_QUADS);
    glVertex2f(150, 110);
    glVertex2f(160, 110);
    glVertex2f(160, 100);
    glVertex2f(150, 100);
    glEnd();

    // Window 2
        glBegin(GL_QUADS);
    glVertex2f(170, 110);
    glVertex2f(180, 110);
    glVertex2f(180, 100);
    glVertex2f(170, 100);
    glEnd();

    // Window 3
     glBegin(GL_QUADS);
    glVertex2f(190, 110);
    glVertex2f(200, 110);
    glVertex2f(200, 100);
    glVertex2f(190, 100);
    glEnd();

    // Window 4
        glBegin(GL_QUADS);
    glVertex2f(210, 110);
    glVertex2f(220, 110);
    glVertex2f(220, 100);
    glVertex2f(210, 100);
    glEnd();

    // Window 5
      glBegin(GL_QUADS);
    glVertex2f(230, 110);
    glVertex2f(240, 110);
    glVertex2f(240, 100);
    glVertex2f(230, 100);
    glEnd();

    // Window 6
    glBegin(GL_QUADS);
    glVertex2f(250, 110);
    glVertex2f(260, 110);
    glVertex2f(260, 100);
    glVertex2f(250, 100);
    glEnd();

    glPopMatrix();
}




void drawFan() {
    // Fan Stand
    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(-190, -240);
    glVertex2d(-175, -240);
    glVertex2d(-180, -120);
    glVertex2d(-185, -120);
    glEnd();


    // Rotate entire fan mechanism
    glPushMatrix();
    glTranslatef(-182.5f, -120.0f, 0.0f);//center dhore rotate korer jonno ei translatef
    glRotatef(fanRotationAngle, 0.0f, 0.0f, 1.0f); //(z axis a rotate)

    // Fan Blades with larger dimensions
    glColor3ub(176, 3, 35);

    // First Blade (0 degrees)
    glBegin(GL_TRIANGLES);
    glVertex2d(0, 0);
    glVertex2d(0, 80);
    glVertex2d(-20, 40);
    glEnd();

    // Second Blade (90 degrees)
    glBegin(GL_TRIANGLES);
    glVertex2d(0, 0);
    glVertex2d(80, 0);
    glVertex2d(40, -20);
    glEnd();

    // Third Blade (180 degrees)
    glBegin(GL_TRIANGLES);
    glVertex2d(0, 0);
    glVertex2d(0, -80);
    glVertex2d(20, -40);
    glEnd();

    // Fourth Blade (270 degrees)
    glBegin(GL_TRIANGLES);
    glVertex2d(0, 0);
    glVertex2d(-80, 0);
    glVertex2d(-40, 20);
    glEnd();

    glPopMatrix();

    // Fan Center Circle
    glColor3ub(0, 0, 0);
    drawCircle(-182.5f, -120.0f, 5.0f);
}





void drawCloud(float xPos, float yPos, float scale) {
    int triangleAmount = 300;
    GLfloat twicePi = 2.0f * PI;

    glPushMatrix();
    glTranslatef(xPos, yPos, 0.0f);

    // Set white color for clouds
    glColor3f(1.0f, 1.0f, 1.0f);

    // left circle
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0, 0);
    for (int i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            (30.0f * scale * cos(i * twicePi / triangleAmount)),
            (30.0f * scale * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Right circle
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(45.0f * scale, 0);
    for (int i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            45.0f * scale + (30.0f * scale * cos(i * twicePi / triangleAmount)),
            (30.0f * scale * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Top middle circle
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(22.5f * scale, 30.0f * scale);
    for (int i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            22.5f * scale + (30.0f * scale * cos(i * twicePi / triangleAmount)),
            30.0f * scale + (30.0f * scale * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();
}
void scenario1();
void scenario2();
void scenario3();
int currentScenario=1;
// Display callback function
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the screen

    // Render the current scenario
    if (currentScenario == 1) {
        scenario1();
    } else if (currentScenario == 2) {
        scenario2();
    } else if (currentScenario == 3) {
        scenario3();
    }
    glutSwapBuffers(); // Swap buffers for smooth rendering
}

// Keyboard callback function
void keyboard(unsigned char key, int x, int y) {
    if (key == 'n' || key == 'N') {
        // Change to the next scenario
        currentScenario++;
        if (currentScenario > 3) {
            currentScenario = 1; // Loop back to the first scenario
        }
        glutPostRedisplay(); // Request a redisplay to update the screen
    }
}
// Mouse callback function
void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        // Change to the next scenario
        currentScenario++;
        if (currentScenario > 3) {
            currentScenario = 1; // Loop back to the first scenario
        }
        glutPostRedisplay(); // Request a redisplay to update the screen
    }
}



/////////////////////////////////////////////////////////////////   AAAAAAAAAAAAAAAAAAA  //////////////////////////////////////////////////////////////////////////////////////////
void scenario1()
{
     glClear(GL_COLOR_BUFFER_BIT);


     //Sky

      glColor3ub(255, 153, 102);
    glBegin(GL_QUADS);
    glVertex2d(-400, -100);
    glVertex2d(600, -100);

    glColor3ub(57, 213, 255);
    glVertex2d(600, 350);
    glVertex2d(-400, 350);
     glEnd();





       // Circle (Sun)

       glPushMatrix();
    glTranslatef(0.0f, sunPosition , 0.0f);
    glColor3f(1.0f, 0.84f, 0.0f);
    drawCircle(-225, 260, 30.0f);
     glPopMatrix();


    // Ground

      glColor3ub(62, 143, 80);
    glBegin(GL_QUADS);
    glVertex2d(-400, -400);
    glVertex2d(600, -400);
    glVertex2d(600, -100);
    glVertex2d(-400, -100);
     glEnd();





    // 1st beside jhao Tree Trunk
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(220, -100);
    glVertex2d(220, -40);
    glVertex2d(230, -40);
    glVertex2d(230, -100);
    glEnd();

    // Tree Leaves
    glColor3ub(0, 128, 0);
    drawCircle(210, -40, 30.0f);
    drawCircle(228, 0, 30.0f);
    drawCircle(245, -40, 30.0f);

    // Second Tree beside jhao
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(300, -100);
    glVertex2d(300, -40);
    glVertex2d(310, -40);
    glVertex2d(310, -100);
    glEnd();

    // Tree Leaves
    glColor3ub(0, 128, 0);
    drawCircle(290, -40, 30.0f);
    drawCircle(308, -10, 30.0f);
    drawCircle(325, -40, 30.0f);

    // last tree Third Tree beside jao
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(360, -100);
    glVertex2d(360, -20);
    glVertex2d(370, -20);
    glVertex2d(370, -100);
    glEnd();

    glColor3ub(0, 100, 0);
    drawCircle(350, -20, 40.0f);
    drawCircle(365, 30, 35.0f);
    drawCircle(380, -20, 40.0f);

    // 1st Leaves Between ground HILL and Trees
    glColor3ub(34, 139, 34);
    drawCircle(80, -90, 25.0f);
    drawCircle(100, -60, 20.0f);
    drawCircle(120, -90, 25.0f);

    // 2nd Leaves Between graound hill and Trees
    drawCircle(130, -90, 25.0f);
    drawCircle(150, -60, 20.0f);
    drawCircle(170, -90, 25.0f);





    ///////////////////////////////////////////// River
    glColor3ub(50, 130, 246);
    glBegin(GL_QUADS);
    glVertex2d(-400, -200);
    glVertex2d(600, -200);
    glColor3ub(0, 191, 255);
    glVertex2d(600, -100);
    glVertex2d(-400, -100);
    glEnd();




    // Hills
    glColor3ub(40, 181, 6);
    glBegin(GL_TRIANGLES);
    glVertex2d(-420, -100);
    glVertex2d(-200, -100);
    glVertex2d(-300, 50);
    glEnd();

    // 1st hill inner triangles
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(-420, -100);
    glVertex2d(-350, -100);
    glVertex2d(-300, 50);
    glEnd();

    // 2nd hill
    glColor3ub(40, 181, 6);
    glBegin(GL_TRIANGLES);
    glVertex2d(-250, -100);
    glVertex2d(-50, -100);
    glVertex2d(-150, 50);
    glEnd();

    // 2nd hill inner triangles
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(-250, -100);
    glVertex2d(-200, -100);
    glVertex2d(-150, 50);
    glEnd();

    // 3rd hill
    glColor3ub(40, 181, 6);
    glBegin(GL_TRIANGLES);
    glVertex2d(-100, -100);
    glVertex2d(120, -100);
    glVertex2d(0, 50);
    glEnd();

    // 3rd hill inner triangles
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(-100, -100);
    glVertex2d(-50, -100);
    glVertex2d(0, 50);
    glEnd();



        // 4th hill
    glColor3ub(40, 181, 6);
    glBegin(GL_TRIANGLES);
    glVertex2d(400, -100);
    glVertex2d(620, -100);
    glVertex2d(500, 90);
    glEnd();

    // 4th hill inner triangles
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(400, -100);
    glVertex2d(500, 90);
    glVertex2d(450, -100);
    glEnd();


    // Hill right-side tree trunk
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(130, -100);
    glVertex2d(130, -30);
    glVertex2d(140, -30);
    glVertex2d(140, -100);
    glEnd();

    // 1st tree triangles
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(110, -40);
    glVertex2d(160, -40);
    glVertex2d(135, 100);
    glEnd();

    // 2nd tree trunk
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(190, -100);
    glVertex2d(190, -30);
    glVertex2d(200, -30);
    glVertex2d(200, -100);
    glEnd();

    // 2nd upper triangles
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(170, 10);
    glVertex2d(220, 10);
    glVertex2d(195, 80);
    glEnd();

    // 2nd lower triangles
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(170, -30);
    glVertex2d(220, -30);
    glVertex2d(195, 30);
    glEnd();


    // Second Boat with New Colors

glPushMatrix();
glTranslatef(boatPosition1, 0.0f, 0.0f);

glColor3ub(139, 69, 19);  // Change to SaddleBrown for the boat body
glBegin(GL_QUADS);
glVertex2d(225, -130);
glVertex2d(300, -130);
glVertex2d(325, -100);
glVertex2d(200, -100);
glEnd();

glColor3ub(205, 133, 63);
glBegin(GL_QUADS);
glVertex2d(225, -100);
glVertex2d(300, -100);
glVertex2d(290, -70);
glVertex2d(235, -70);
glEnd();

glColor3ub(45, 105, 105);  // Change to Dim Gray for the mast
glBegin(GL_QUADS);
glVertex2d(260, -70);
glVertex2d(270, -70);
glVertex2d(270, -40);
glVertex2d(260, -40);
glEnd();

glColor3ub(255, 29, 23);  // Change to OrangeRed for the sail
glBegin(GL_QUADS);
glVertex2d(235, -60);
glVertex2d(290, -60);
glVertex2d(290, 25);
glVertex2d(235, 25);
glEnd();

glPopMatrix();

    // Boat

     glPushMatrix();
    glTranslatef(boatPosition2 , 0.0f, 0.0f);
    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2d(-75, -180);
    glVertex2d(0, -180);
    glVertex2d(25, -150);
    glVertex2d(-100, -150);
    glEnd();





    glColor3ub(205, 133, 63);
    glBegin(GL_QUADS);
    glVertex2d(-75, -150);
    glVertex2d(0, -150);
    glVertex2d(-10, -120);
    glVertex2d(-65, -120);
    glEnd();

    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(-40, -120);
    glVertex2d(-30, -120);
    glVertex2d(-30, -90);
    glVertex2d(-40, -90);
    glEnd();

    glColor3ub(127, 23, 156);
    glBegin(GL_QUADS);
    glVertex2d(-65, -110);
    glVertex2d(-10, -110);
    glVertex2d(-10, -25);
    glVertex2d(-65, -25);
    glEnd();
    glPopMatrix();









    ///////////////////////////////// HOUSE   ////////////////////////////

    //Tree Trunk (Large Tree)
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(-350, -250);
    glVertex2d(-330, -250);
    glVertex2d(-330, -100);
    glVertex2d(-350, -100);
    glEnd();

    //Tree Leaves (Large Tree upper house tree)
    glColor3ub(0, 128, 0);
    drawCircle(-350, -75, 40.0f);
    drawCircle(-330, -75, 40.0f);
    drawCircle(-355, -45, 40.0f);
    drawCircle(-325, -45, 40.0f);
    drawCircle(-340, -15, 40.0f);

    // 2nd House choto ghor
    glColor3ub(210, 105, 30);
    glBegin(GL_QUADS);
    glVertex2d(-300, -180);
    glVertex2d(-200, -180);
    glVertex2d(-225, -130);
    glVertex2d(-270, -130);
    glEnd();

    glColor3ub(244, 164, 96);
    glBegin(GL_QUADS);
    glVertex2d(-300, -230);
    glVertex2d(-215, -230);
    glVertex2d(-215, -180);
    glVertex2d(-300, -180);
    glEnd();

    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(-300, -230);
    glVertex2d(-210, -230);
    glVertex2d(-210, -240);
    glVertex2d(-300, -240);
    glEnd();

    // 2nd house door
    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(-260, -230);
    glVertex2d(-235, -230);
    glVertex2d(-235, -200);
    glVertex2d(-260, -200);
    glEnd();

    // 1st House
    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(-400, -180);
    glVertex2d(-265, -180);
    glVertex2d(-290, -130);
    glVertex2d(-375, -130);
    glEnd();

    glColor3ub(255, 222, 173);
    glBegin(GL_TRIANGLES);
    glVertex2d(-390, -180);
    glVertex2d(-350, -180);
    glVertex2d(-375, -145);
    glEnd();

    glColor3ub(255, 222, 173);
    glBegin(GL_QUADS);
    glVertex2d(-390, -250);
    glVertex2d(-350, -250);
    glVertex2d(-350, -180);
    glVertex2d(-390, -180);
    glEnd();

    glColor3ub(222, 184, 135);
    glBegin(GL_QUADS);
    glVertex2d(-350, -250);
    glVertex2d(-275, -250);
    glVertex2d(-275, -180);
    glVertex2d(-350, -180);
    glEnd();

    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(-390, -250);
    glVertex2d(-275, -250);
    glVertex2d(-275, -260);
    glVertex2d(-390, -260);
    glEnd();

    // 1st house door and window
    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(-325, -250);
    glVertex2d(-305, -250);
    glVertex2d(-305, -205);
    glVertex2d(-325, -205);
    glEnd();
    //window
    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(-380, -200);
    glVertex2d(-365, -200);
    glVertex2d(-365, -225);
    glVertex2d(-380, -225);
    glEnd();





    // School
    glColor3ub(244, 138, 68);
    glBegin(GL_QUADS);
    glVertex2d(-50, -400);
    glVertex2d(160, -400);
    glVertex2d(160, -150);
    glVertex2d(-50, -150);
    glEnd();

    // School left Side Wall
    glColor3ub(176, 105, 52);
    glBegin(GL_QUADS);
    glVertex2d(-50, -400);
    glVertex2d(-50, -150);
    glVertex2d(-60, -130);
    glVertex2d(-60, -370);
    glEnd();

    // School Roof Top
    glColor3ub(128, 76, 38);
    glBegin(GL_QUADS);
    glVertex2d(-50, -150);
    glVertex2d(160, -150);
    glVertex2d(160, -130);
    glVertex2d(-60, -130);
    glEnd();

// School Roof Top Pillar Back Walls
    glColor3ub(128, 76, 38);
    for (int i = 0; i < 42; i++) {
        int x = i * 5;
        glBegin(GL_QUADS);
        glVertex2d(-60 + x, -130);
        glVertex2d(-58 + x, -130);
        glVertex2d(-58 + x, -120);
        glVertex2d(-60 + x, -120);
        glEnd();
    }

    // School Roof Top Pillar Forward Walls
    glColor3ub(100, 56, 38);
    for (int i = 0; i < 42; i++) {
        int x = i * 5;
        glBegin(GL_QUADS);
        glVertex2d(-50 + x, -150);
        glVertex2d(-48 + x, -150);
        glVertex2d(-48 + x, -137);
        glVertex2d(-50 + x, -137);
        glEnd();
    }

    // School Wall Corner Design
    glColor3ub(128, 76, 38);
    glBegin(GL_QUADS);
    glVertex2d(-50, -150);
    glVertex2d(-47, -150);
    glVertex2d(-47, -400);
    glVertex2d(-50, -400);
    glEnd();

    // School Wall Divide Design Horizontal
    glColor3ub(237, 204, 125);
    for(int i = 0; i <= 4; i++) {
        int x = i * 50;
        glBegin(GL_QUADS);
        glVertex2d(-47 + x, -150);
        glVertex2d(-40 + x, -150);
        glVertex2d(-40 + x, -400);
        glVertex2d(-47 + x, -400);
        glEnd();
    }

    // School Wall Divide Design Vertical
    glColor3ub(237, 204, 125);
    for(int i = 0; i <= 4; i++) {
        int y = i * 100;
        glBegin(GL_QUADS);
        glVertex2d(-46, -150 - y);
        glVertex2d(100, -150 - y);
        glVertex2d(100, -162 - y);
        glVertex2d(-46, -162 - y);
        glEnd();
    }

    // School Windows
    glColor3ub(48, 45, 77);
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i <= 4; i++) {
            int y = i * 100;
            int x = j * 50;
            glBegin(GL_QUADS);
            glVertex2d(-30 + x, -210 - y);
            glVertex2d(-10 + x, -210 - y);
            glVertex2d(-10 + x, -170 - y);
            glVertex2d(-30 + x, -170 - y);
            glEnd();
        }
    }

    // School Main Gate
    glColor3ub(50, 50, 59);
    glBegin(GL_QUADS);
    glVertex2d(18, -400);
    glVertex2d(48, -400);
    glVertex2d(48, -340);
    glVertex2d(18, -340);
    glEnd();

    // School Text
    glColor3ub(63, 72, 204);
    glRasterPos2f(20, -160);  //Indicated starting position of SChool x, y
    for (int i = 0; i < 6; i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, "SCHOOL"[i]);//HELV TEXT SIZE 18,     CHARACTER  NITESI
    }

     // Tube Well Wall Part
     //green
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2d(-280, -302);
    glVertex2d(-320, -342);
    glVertex2d(-260, -342);
    glVertex2d(-240, -302);
    glEnd();
//white
    glBegin(GL_QUADS);
    glColor3ub(143, 188, 143);
    glVertex2d(-275, -307);
    glVertex2d(-295, -327);
    glVertex2d(-265, -327);
    glVertex2d(-250, -307);
    glEnd();
//black
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(-320, -352);
    glVertex2i(-320, -342);
    glVertex2i(-260, -342);
    glVertex2i(-260, -352);
    glEnd();
//2nd black
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2d(-240, -302);
    glVertex2d(-240, -322);
    glVertex2d(-260, -352);
    glVertex2d(-260, -342);
    glEnd();


// Main Tube Well Body
glBegin(GL_QUADS);
glColor3ub(184, 134, 11);  // Golden brown color
glVertex2d(-275, -260);    // Top left
glVertex2d(-265, -260);    // Top right
glVertex2d(-265, -320);    // Bottom right
glVertex2d(-275, -320);    // Bottom left
glEnd();


    // Tube Well Second Part choto triangle
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 215, 0);
    glVertex2d(-275, -260);
    glVertex2d(-270, -265);
    glVertex2d(-265, -260);

    glEnd();

    // Tube Well Third Part
    glBegin(GL_QUADS);
    glColor3ub(205, 133, 63);
    glVertex2i(-272, -260);
    glVertex2i(-272, -245);
    glVertex2i(-268, -245);
    glVertex2i(-268, -260);
    glEnd();




// Water Faucet
glBegin(GL_QUADS);
glColor3ub(139, 69, 19);   // Darker brown for the spout
glVertex2d(-265, -275);    // Left top
glVertex2d(-255, -275);    // Right top
glVertex2d(-255, -282);    // Right bottom
glVertex2d(-265, -282);    // Left bottom
glEnd();




// Handle Bar
glBegin(GL_QUADS);
glColor3ub(139, 69, 19);
glVertex2d(-282, -242);    // Top left
glVertex2d(-258, -242);    // Top right
glVertex2d(-258, -245);    // Bottom right
glVertex2d(-282, -245);    // Bottom left
glEnd();



    // School Flag Stand
    glBegin(GL_QUADS);
    glColor3ub(205, 133, 63);
    glVertex2i(165, -400);
    glVertex2i(170, -400);
    glVertex2i(170, -115);
    glVertex2i(165, -115);
    glEnd();

    // School Flag
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2d(170, -180);
    glVertex2d(230, -180);
    glVertex2d(230, -115);
    glVertex2d(170, -115);
    glEnd();

    // School Flag Circle
    glColor3ub(255, 27, 27);
    drawCircle(195, -145, 13.0f);




// Apply Translation
glPushMatrix();

glTranslatef(190,130,0);

// School Bus - Main Body
glBegin(GL_QUADS);
glColor3ub(255, 216, 0);  // School bus yellow
glVertex2i(100, -300);    // Top left
glVertex2i(400, -300);    // Top right
glVertex2i(400, -400);    // Bottom right
glVertex2i(100, -400);    // Bottom left
glEnd();



// Headlights on front side
glBegin(GL_QUADS);
glColor3ub(221, 232, 229);  // Light yellow color for headlights

// Left headlight (lower)
glVertex2i(90, -375);    // Top left
glVertex2i(100, -375);   // Top right
glVertex2i(100, -385);   // Bottom right
glVertex2i(90, -385);    // Bottom left

// Right headlight (upper)
glVertex2i(90, -340);    // Top left
glVertex2i(100, -340);   // Top right
glVertex2i(100, -350);   // Bottom right
glVertex2i(90, -350);    // Bottom left
glEnd();






// Windows
glBegin(GL_QUADS);
glColor3ub(135, 206, 235);  // Light blue for windows


// Passenger windows (4 windows)
// First window
glVertex2i(150, -310);
glVertex2i(200, -310);
glVertex2i(200, -330);
glVertex2i(150, -330);

// Second window
glVertex2i(210, -310);
glVertex2i(260, -310);
glVertex2i(260, -330);
glVertex2i(210, -330);

// Third window
glVertex2i(270, -310);
glVertex2i(320, -310);
glVertex2i(320, -330);
glVertex2i(270, -330);

// Fourth window
glVertex2i(330, -310);
glVertex2i(380, -310);
glVertex2i(380, -330);
glVertex2i(330, -330);
glEnd();

// bus Wheels

glColor3ub(0, 0, 0);  // Black for wheels
drawCircle(170, -385, 20);    // Front wheel  call the draw circle global function
drawCircle(340, -385, 20);    // Back wheel - x, y, radius



// Door
glBegin(GL_QUADS);
glColor3ub(200, 200, 200);  // Grey for door
glVertex2i(110, -330);    // Top left
glVertex2i(140, -330);    // Top right
glVertex2i(140, -400);    // Bottom right
glVertex2i(110, -400);    // Bottom left
glEnd();




// PlayGround
glBegin(GL_LINE_STRIP);
glColor3ub(0, 0, 0);
glVertex2i(101, -468);
glVertex2i(101, -430);
glVertex2i(76, -443);
glVertex2i(76, -470);
glEnd();

// **Connect left post top**
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2i(101, -430);  // Top of left post
glVertex2i(96, -460);   // Connecting to second left post
glEnd();

glBegin(GL_LINE_STRIP);
glColor3ub(0, 0, 0);
glVertex2i(96, -498);
glVertex2i(96, -460);
glVertex2i(71, -473);
glVertex2i(71, -500);
glEnd();

// Goal Post Right
glBegin(GL_LINE_STRIP);
glColor3ub(0, 0, 0);
glVertex2i(299, -468);
glVertex2i(299, -430);
glVertex2i(324, -443);
glVertex2i(324, -470);
glEnd();

// **Connect right post top**
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2i(299, -430);  // Top of right post
glVertex2i(304, -460);  // Connecting to second right post
glEnd();

glBegin(GL_LINE_STRIP);
glColor3ub(0, 0, 0);
glVertex2i(304, -498);
glVertex2i(304, -460);
glVertex2i(329, -473);
glVertex2i(329, -500);
glEnd();

// Boundary
glBegin(GL_LINE_LOOP);
glColor3ub(255, 255, 255);
glVertex2i(80, -420);
glVertex2i(318, -420);
glVertex2i(335, -520);
glVertex2i(69, -520);
glEnd();

// Mid line
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2i(200, -420);
glVertex2i(200, -520);
glEnd();

// Center Circle
glColor3ub(255, 255, 255);
drawCircle(200, -470, 10.0f);  // Placed outside glBegin/glEnd



  // School Bus Text
    glColor3ub(63, 72, 204);
    glRasterPos2f(220, -370);  //Indicated starting position of SChool x, y
    for (int i = 0; i < 10; i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, "SCHOOL BUS"[i]);//HELV TEXT SIZE 18,     CHARACTER
    }

glPopMatrix();  // Restore the original matrix



 glPushMatrix();
glTranslatef(cloudPosition , 0.0f, 0.0f);
drawCloud(-300, 250, 0.5f);    // First cloud
drawCloud(-150, 220, 0.8f);    // Second cloud
drawCloud(-220, 280, 0.6f);    // Third cloud
drawCloud(100, 240, 0.7f);     // Fourth cloud
drawCloud(0, 260, 0.5f);       // Fifth cloud
glPopMatrix();


glEnd();
drawFan();
drawAirplane(); // Draw the airplane
glutSwapBuffers();
glFlush();

}
/////////////////////////////////////////////////senario2//////////////////////////////////////////////////////////////////////////////////////////////////////
void scenario2()
{
   glClear(GL_COLOR_BUFFER_BIT);
    sky();
    cloud();
    newroad2();
    road();
    bus3();
    drawBus();
    drawCar();
    drawCar1();
    drawBoat(boat2X, 100);
    drawBoat1(boatX, 50);
    glDisable(GL_DEPTH_TEST);
    trees();
////////////////////////////////////////////////////////







    /// Lamppost 1


glBegin(GL_QUADS);
glColor3ub(255, 215, 0); // Golden color for the base of the lamppost

glVertex2f(-205.0f, -200.0f);
glVertex2f(-195.0f, -200.0f);
glVertex2f(-195.0f, -100.0f);
glVertex2f(-205.0f, -100.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(184, 134, 11);
glVertex2f(-200.0f, -100.0f);
glVertex2f(-200.0f, -50.0f);
glEnd();

glBegin(GL_LINES);
glVertex2f(-200.0f, -50.0f);
glVertex2f(-150.0f, -25.0f); // Right arm of the lamppost
glEnd();

glBegin(GL_LINES);
glVertex2f(-200.0f, -50.0f);
glVertex2f(-250.0f, -25.0f); // Left arm of the lamppost
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(-150.0f, -25.0f);
for (int i = 0; i <= 360; i++) {
    float angle = i * 3.14159 / 180;
    float x = -150.0f + cos(angle) * 8.0f;
    float y = -25.0f + sin(angle) * 8.0f;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(-250.0f, -25.0f);
for (int i = 0; i <= 360; i++) {
    float angle = i * 3.14159 / 180;
    float x = -250.0f + cos(angle) * 8.0f;
    float y = -25.0f + sin(angle) * 8.0f;
    glVertex2f(x, y);
}
glEnd();


////////////////////////////////////////////////////////////////////////////////

/// Lamppost 2

glBegin(GL_QUADS);
glColor3ub(255, 215, 0); // Golden color for the base of the lamppost
glVertex2f(145.0f, -195.0f);
glVertex2f(155.0f, -195.0f);
glVertex2f(155.0f, -100.0f);
glVertex2f(145.0f, -100.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(184, 134, 11);
glVertex2f(150.0f, -100.0f);
glVertex2f(150.0f, -50.0f);
glEnd();

// Right arm of lamppost
glBegin(GL_LINES);
glVertex2f(150.0f, -50.0f);
glVertex2f(200.0f, -25.0f); // Right arm of the lamppost
glEnd();

// Left arm of lamppost
glBegin(GL_LINES);
glVertex2f(150.0f, -50.0f);
glVertex2f(100.0f, -25.0f); // Left arm of the lamppost
glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(200.0f, -25.0f);
for (int i = 0; i <= 360; i++) {
    float angle = i * 3.14159 / 180;
    float x = 200.0f + cos(angle) * 8.0f;
    float y = -25.0f + sin(angle) * 8.0f;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(100.0f, -25.0f);
for (int i = 0; i <= 360; i++) {
    float angle = i * 3.14159 / 180;
    float x = 100.0f + cos(angle) * 8.0f;
    float y = -25.0f + sin(angle) * 8.0f;
    glVertex2f(x, y);
}
glEnd();
///////////////////////////////////////////////////////////////////////////////////

    /// Lamppost 3

glBegin(GL_QUADS);
glColor3ub(255, 215, 0); // Golden color for the base of the lamppost

glVertex2f(395.0f, -195.0f);
glVertex2f(405.0f, -195.0f);
glVertex2f(405.0f, -100.0f);
glVertex2f(395.0f, -100.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(184, 134, 11); // Darker golden
glVertex2f(400.0f, -100.0f);
glVertex2f(400.0f, -50.0f);
glEnd();


glBegin(GL_LINES);
glVertex2f(400.0f, -50.0f);
glVertex2f(450.0f, -25.0f); // Right arm of the lamppost
glEnd();


glBegin(GL_LINES);
glVertex2f(400.0f, -50.0f);
glVertex2f(350.0f, -25.0f); // Left arm of the lamppost
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(450.0f, -25.0f);
for (int i = 0; i <= 360; i++) {
    float angle = i * 3.14159 / 180;
    float x = 450.0f + cos(angle) * 8.0f;
    float y = -25.0f + sin(angle) * 8.0f;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(350.0f, -25.0f);
for (int i = 0; i <= 360; i++) {
    float angle = i * 3.14159 / 180;
    float x = 350.0f + cos(angle) * 8.0f;
    float y = -25.0f + sin(angle) * 8.0f;
    glVertex2f(x, y);
}
glEnd();

glFlush();
}

///////////////////////////////////////senario3////////////////////////////////////////////////////////////////////////////////////////////////////////////
 void scenario3()
 {
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

     fsky();


     fcloud();
      fsun();
     fbuildings();

    froad () ;
    fCar1();
     fbus3();
     ftrees();
     fbreanch();




	glFlush();  // Render now
 }
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("A Journey Through Perspectives: Rural to Urban Landscapes");
    init();
     sound();
    glutSpecialFunc(SpecialInput);
    glutDisplayFunc(display);
    glutTimerFunc(100, Movement, 0);


    glutTimerFunc(20, updateCloudC, 0);
      glutTimerFunc(20, updateBusC, 0);
        glutTimerFunc(15, update, 0);
        glutTimerFunc(0, update2, 0);
    glutTimerFunc(16, updateCar1, 0);

     glutTimerFunc(50, update5, 0);
 glutTimerFunc(20, update10, 0);  // 60 FPS
 glutKeyboardFunc(keyboard); // Set keyboard callback
  glutMouseFunc(mouse);
glutTimerFunc(20, fupdateCloudC, 0);
    glutTimerFunc(20, fupdateBusC, 0);
    glutTimerFunc(20, fupdateCloudV, 0);
     glutTimerFunc(20, fupdatecar1, 0);

    glutMainLoop();

    return 0;
}
