#include <iostream>
#include <GL/glut.h>

void utama(void) {
	glClearColor(1, 1, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	//atas - tengah
	glBegin(GL_POLYGON);//segi atas kiri
	glColor3f(0, 0, 0);
	glVertex2f(1, 24);//bawah kiri
	glVertex2f(25, 1);//atas
	glVertex2f(49, 24);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);//segi atas kanan
	glColor3f(0, 0, 0);
	glVertex2f(51, 24);//bawah kiri
	glVertex2f(75, 1);//atas
	glVertex2f(99, 24);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);//segi bawah kiri
	glColor3f(0, 0, 0);
	glVertex2f(1, 26);//bawah kiri
	glVertex2f(49, 26);//atas
	glVertex2f(25, 49);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);//segi bawah kanan
	glColor3f(0, 0, 0);
	glVertex2f(51, 26);//bawah kiri
	glVertex2f(99, 26);//atas
	glVertex2f(75, 49);//bawah kanan
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(0, 25);
	glVertex2f(100, 25);
	glEnd();
	
	glBegin(GL_POLYGON);//kotak atas kiri
	glColor3f(0, 0, 0);
	glVertex2f(1, 74);//bawah kiri
	glVertex2f(25, 51);//atas
	glVertex2f(49, 74);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);//kotak atas kanan
	glColor3f(0, 0, 0);
	glVertex2f(51, 74);//bawah kiri
	glVertex2f(75, 51);//atas
	glVertex2f(99, 74);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);//kotak bawah kiri
	glColor3f(0, 0, 0);
	glVertex2f(1, 76);//bawah kiri
	glVertex2f(49, 76);//atas
	glVertex2f(25, 99);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);//kotak bawah kanan
	glColor3f(0, 0, 0);
	glVertex2f(51, 76);//bawah kiri
	glVertex2f(99, 76);//atas
	glVertex2f(75, 99);//bawah kanan
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(0, 50);
	glVertex2f(100, 50);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(0, 75);
	glVertex2f(100, 75);
	glEnd();
	//atas-tengah

	//segitiga
	glBegin(GL_POLYGON);//segi3 tengah atas
	glColor3f(0, 0, 0);
	glVertex2f(37, 11.5);//atas kiri
	glVertex2f(50, 24);//bawah
	glVertex2f(63, 11.5);//atas kanan
	glEnd();

	glBegin(GL_POLYGON);//segi3 tengah atas kiri
	glColor3f(0, 0, 0);
	glVertex2f(0, 11.5);//atas kiri
	glVertex2f(13, 11.5);//atas kanan
	glVertex2f(0, 24);//bawah
	glEnd();

	glBegin(GL_POLYGON);//segi3 tengah atas kanan
	glColor3f(0, 0, 0);
	glVertex2f(87, 11.5);//atas kiri
	glVertex2f(100, 11.5);//atas kanan
	glVertex2f(100, 24);//bawah
	glEnd();
	//segitiga

	//trapesium
	glBegin(GL_POLYGON);//trapesium tengah
	glColor3f(0,0,0);
	glVertex2f(36, 10.5);
	glVertex2f(30.5, 5.5);
	glVertex2f(69.5, 5.5);
	glVertex2f(64, 10.5);
	glEnd();

	glBegin(GL_POLYGON);//trapesium kiri
	glColor3f(0, 0, 0);
	glVertex2f(0, 10.5);
	glVertex2f(0, 5.5);
	glVertex2f(19.5, 5.5);
	glVertex2f(14, 10.5);
	glEnd();

	glBegin(GL_POLYGON);//trapesium kanan
	glColor3f(0, 0, 0);
	glVertex2f(86, 10.5);
	glVertex2f(80.5, 5.5);
	glVertex2f(100, 5.5);
	glVertex2f(100, 10.5);
	glEnd();
	// trapesium

	//segitiga kecil
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(46.5, 0.5);//atas 
	glVertex2f(44, 4.5);//bawah kiri
	glVertex2f(49, 4.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(39.5, 0.5);//atas 
	glVertex2f(37, 4.5);//bawah kiri
	glVertex2f(42, 4.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(32.5, 0.5);//atas 
	glVertex2f(30, 4.5);//bawah kiri
	glVertex2f(35, 4.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(53.5, 0.5);//atas 
	glVertex2f(51, 4.5);//bawah kiri
	glVertex2f(56, 4.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(60.5, 0.5);//atas 
	glVertex2f(58, 4.5);//bawah kiri
	glVertex2f(63, 4.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(67.5, 0.5);//atas 
	glVertex2f(65, 4.5);//bawah kiri
	glVertex2f(70, 4.5);//bawah kanan
	glEnd();
	///segitiga kecil

	//v
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(47, 0.5);//1
	glVertex2f(48, 0.5);//2
	glVertex2f(50, 3.5);//3
	glVertex2f(50, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(50, 3.5);//3
	glVertex2f(52, 0.5);//4
	glVertex2f(53, 0.5);//5
	glVertex2f(50, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(40, 0.5);//1
	glVertex2f(41, 0.5);//2
	glVertex2f(43, 3.5);//3
	glVertex2f(43, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(43, 3.5);//3
	glVertex2f(45, 0.5);//4
	glVertex2f(46, 0.5);//5
	glVertex2f(43, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(33, 0.5);//1
	glVertex2f(34, 0.5);//2
	glVertex2f(36, 3.5);//3
	glVertex2f(36, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(36, 3.5);//3
	glVertex2f(38, 0.5);//4
	glVertex2f(39, 0.5);//5
	glVertex2f(36, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(26, 0.5);//1
	glVertex2f(27, 0.5);//2
	glVertex2f(29, 3.5);//3
	glVertex2f(29, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(29, 3.5);//3
	glVertex2f(31, 0.5);//4
	glVertex2f(32, 0.5);//5
	glVertex2f(29, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(54, 0.5);//1
	glVertex2f(55, 0.5);//2
	glVertex2f(57, 3.5);//3
	glVertex2f(57, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(57, 3.5);//3
	glVertex2f(59, 0.5);//4
	glVertex2f(60, 0.5);//5
	glVertex2f(57, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(61, 0.5);//1
	glVertex2f(62, 0.5);//2
	glVertex2f(64, 3.5);//3
	glVertex2f(64, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(64, 3.5);//3
	glVertex2f(66, 0.5);//4
	glVertex2f(67, 0.5);//5
	glVertex2f(64, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(68, 0.5);//1
	glVertex2f(69, 0.5);//2
	glVertex2f(71, 3.5);//3
	glVertex2f(71, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(71, 3.5);//3
	glVertex2f(73, 0.5);//4
	glVertex2f(74, 0.5);//5
	glVertex2f(71, 4.5);//6
	glEnd();
	//v

	//bulatan dalam trapesium
	glEnable(GL_POINT_SMOOTH);
	glPointSize(15);
	glColor3f(1, 1, 0);
	glBegin(GL_POINTS);
	glVertex2f(38, 8);
	glVertex2f(43, 8);
	glVertex2f(48, 8);
	glVertex2f(53, 8);
	glVertex2f(58, 8);
	glVertex2f(63, 8);
	glEnd();
	//bulatan dalam trapesium
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(600, 150);
	glutInitWindowSize(640, 480);
	glutCreateWindow(argv[0]);
	gluOrtho2D(0, 100, 100, 0);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutDisplayFunc(utama);
	glutMainLoop();

	return(0);
}