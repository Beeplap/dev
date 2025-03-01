#include <GL/glut.h>
#include <math.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);

    const int SIDES = 6;
    double angle_step = 2 * M_PI / SIDES;

    for (int i = 0; i < SIDES; i++) {
        double x = cos(i * angle_step);
        double y = sin(i * angle_step);
        glVertex2f(x, y);
    }

    glEnd();
    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Hexagon");

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glOrtho(-1, 1, -1, 1, -1, 1);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
