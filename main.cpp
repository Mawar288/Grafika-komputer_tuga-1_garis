//PROGRAM GARIS MERAH

#include <windows.h>;
#include <GL/glut.h>

void garisMerah() {
    glBegin(GL_LINES); //sintaks awal menggambarkan garis
    glColor3f(1.0,0.0,0.0); //brush pen
    glVertex2f(100.0,80.0); // koordinat titim awal (x,y)
    glVertex2f(100.,180.0);
    glEnd(); //mengakhiri gambaran
    glFlush(); //memulai proses penggambaran
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT); //membersihkan buffer
    garisMerah();
}

int main (int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(250,250); //posisi window/jendelanya
    glutInitWindowSize(500,500);
    glutCreateWindow("Menggambar garis \merah"); //title bar pd window
    glClearColor(1.0,1.0,1.0,0.0); //warna baground hitam
    gluOrtho2D(0.0,500.0,-250,250); //besar sistem koordinat dengan range (x,x,y,y)
    glutDisplayFunc(display);
    glutMainLoop(); //
    return 0;
}
