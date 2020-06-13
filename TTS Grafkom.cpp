#include <iostream>
#include <GL/glut.h>

void kedua(void) {

	//segitiga
	glBegin(GL_POLYGON);//segi3 tengah bawah
	glColor3f(0, 0, 0);
	glVertex2f(37, 38.5);//bawah kiri
	glVertex2f(50, 26);//atas
	glVertex2f(63, 38.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);//segi3 tengah atas kiri
	glColor3f(0, 0, 0);
	glVertex2f(0, 38.5);//atas kiri
	glVertex2f(13, 38.5);//atas kanan
	glVertex2f(0, 26);//bawah
	glEnd();

	glBegin(GL_POLYGON);//segi3 tengah atas kanan
	glColor3f(0, 0, 0);
	glVertex2f(87, 38.5);//atas kiri
	glVertex2f(100, 38.5);//atas kanan
	glVertex2f(100, 26);//bawah
	glEnd();
	//segitiga

	//trapesium
	glBegin(GL_POLYGON);//trapesium tengah
	glColor3f(0, 0, 0);
	glVertex2f(36, 39.5);
	glVertex2f(30.5, 44.5);
	glVertex2f(69.5, 44.5);
	glVertex2f(64, 39.5);
	glEnd();

	glBegin(GL_POLYGON);//trapesium kiri
	glColor3f(0, 0, 0);
	glVertex2f(0, 39.5);
	glVertex2f(0, 44.5);
	glVertex2f(19.5, 44.5);
	glVertex2f(14, 39.5);
	glEnd();

	glBegin(GL_POLYGON);//trapesium kanan
	glColor3f(0, 0, 0);
	glVertex2f(86, 39.5);
	glVertex2f(80.5, 44.5);
	glVertex2f(100, 44.5);
	glVertex2f(100, 39.5);
	glEnd();
	//trapesium

	/*glBegin(GL_LINE_LOOP);
	glVertex2f(55, 28);
	glVertex2f(75, 47);
	glVertex2f(95, 28);
	glEnd();

	/*glEnable(GL_POINT_SMOOTH);
	glPointSize(15);
	glColor3f(1, 1, 0);
	glBegin(GL_POINTS);//tengah
	glVertex2f(38, 42);
	glVertex2f(43, 42);
	glVertex2f(48, 42);
	glVertex2f(53, 42);
	glVertex2f(58, 42);
	glVertex2f(63, 42);
	glVertex2f(13, 42);
	glVertex2f(8, 42);
	glVertex2f(3, 42);
	glVertex2f(87, 42);
	glVertex2f(92, 42);
	glVertex2f(97, 42);
	glVertex2f(25, 42);
	glVertex2f(21, 42);
	glVertex2f(29, 42);
	glVertex2f(8, 29);
	glVertex2f(13, 29);
	glVertex2f(18, 29);
	glVertex2f(23, 29);
	glVertex2f(28, 29);
	glVertex2f(33, 29);
	glVertex2f(38, 29);
	glVertex2f(43, 29);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);// garis lurus segi3 besar kanan
	glVertex2f(57, 28);
	glVertex2f(57, 30);
	glVertex2f(59, 28);
	glVertex2f(59, 32);
	glVertex2f(61, 28);
	glVertex2f(61, 34);
	glVertex2f(63, 28);
	glVertex2f(63, 35.5);
	glVertex2f(65, 28);
	glVertex2f(65, 37.5);
	glVertex2f(67, 28);
	glVertex2f(67, 39.5);
	glVertex2f(69, 28);
	glVertex2f(69, 41.5);
	glVertex2f(71, 28);
	glVertex2f(71, 43.5);
	glVertex2f(73, 28);
	glVertex2f(73, 45);
	glVertex2f(75, 28);
	glVertex2f(75, 47);
	glVertex2f(95, 28);
	glVertex2f(95, 28);
	glVertex2f(93, 28);
	glVertex2f(93, 30);
	glVertex2f(91, 28);
	glVertex2f(91, 32);
	glVertex2f(89, 28);
	glVertex2f(89, 34);
	glVertex2f(87, 28);
	glVertex2f(87, 35.5);
	glVertex2f(85, 28);
	glVertex2f(85, 37.5);
	glVertex2f(83, 28);
	glVertex2f(83, 39.5);
	glVertex2f(81, 28);
	glVertex2f(81, 41);
	glVertex2f(79, 28);
	glVertex2f(79, 43);
	glVertex2f(77, 28);
	glVertex2f(77, 45);
	glEnd();*/
	glFlush();
}

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

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(0, 25);
	glVertex2f(100, 25);
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

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(17.5, 0.5);//atas 
	glVertex2f(15, 4.5);//bawah kiri
	glVertex2f(20, 4.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(10.5, 0.5);//atas 
	glVertex2f(8, 4.5);//bawah kiri
	glVertex2f(13, 4.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(3.5, 0.5);//atas 
	glVertex2f(1, 4.5);//bawah kiri
	glVertex2f(6, 4.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(82.5, 0.5);//atas 
	glVertex2f(80, 4.5);//bawah kiri
	glVertex2f(85, 4.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(89.5, 0.5);//atas 
	glVertex2f(87, 4.5);//bawah kiri
	glVertex2f(92, 4.5);//bawah kanan
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(96.5, 0.5);//atas 
	glVertex2f(94, 4.5);//bawah kiri
	glVertex2f(99, 4.5);//bawah kanan
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

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(24, 0.5);//1
	glVertex2f(23, 0.5);//2
	glVertex2f(21, 3.5);//3
	glVertex2f(21, 4.5);//6
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(21, 3.5);//3
	glVertex2f(19, 0.5);//4
	glVertex2f(18, 0.5);//5
	glVertex2f(21, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(17, 0.5);//1
	glVertex2f(16, 0.5);//2
	glVertex2f(14, 3.5);//3
	glVertex2f(14, 4.5);//6
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(14, 3.5);//3
	glVertex2f(12, 0.5);//4
	glVertex2f(11, 0.5);//5
	glVertex2f(14, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(10, 0.5);//1
	glVertex2f(9, 0.5);//2
	glVertex2f(7, 3.5);//3
	glVertex2f(7, 4.5);//6
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(7, 3.5);//3
	glVertex2f(5, 0.5);//4
	glVertex2f(4, 0.5);//5
	glVertex2f(7, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(3, 0.5);//1
	glVertex2f(2, 0.5);//2
	glVertex2f(0, 3.5);//3
	glVertex2f(0, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(97, 0.5);//1
	glVertex2f(98, 0.5);//2
	glVertex2f(100, 3.5);//3
	glVertex2f(100, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(96, 0.5);//1
	glVertex2f(95, 0.5);//2
	glVertex2f(93, 3.5);//3
	glVertex2f(93, 4.5);//6
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(93, 3.5);//3
	glVertex2f(91, 0.5);//4
	glVertex2f(90, 0.5);//5
	glVertex2f(93, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(89, 0.5);//1
	glVertex2f(88, 0.5);//2
	glVertex2f(86, 3.5);//3
	glVertex2f(86, 4.5);//6
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(86, 3.5);//3
	glVertex2f(84, 0.5);//4
	glVertex2f(83, 0.5);//5
	glVertex2f(86, 4.5);//6
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(82, 0.5);//1
	glVertex2f(81, 0.5);//2
	glVertex2f(79, 3.5);//3
	glVertex2f(79, 4.5);//6
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(79, 3.5);//3
	glVertex2f(77, 0.5);//4
	glVertex2f(76, 0.5);//5
	glVertex2f(79, 4.5);//6
	glEnd();
	//v

	//bulatan
	glEnable(GL_POINT_SMOOTH);
	glPointSize(15);
	glColor3f(1, 1, 0);
	glBegin(GL_POINTS);//tengah
	glVertex2f(38, 8);
	glVertex2f(43, 8);
	glVertex2f(48, 8);
	glVertex2f(53, 8);
	glVertex2f(58, 8);
	glVertex2f(63, 8);
	glVertex2f(13, 8);
	glVertex2f(8, 8);
	glVertex2f(3, 8);
	glVertex2f(87, 8);
	glVertex2f(92, 8);
	glVertex2f(97, 8);
	glVertex2f(25, 8);
	glVertex2f(21, 8);
	glVertex2f(29, 8);
	glVertex2f(8, 21);
	glVertex2f(13, 21);
	glVertex2f(18, 21);
	glVertex2f(23, 21);
	glVertex2f(28, 21);
	glVertex2f(33, 21);
	glVertex2f(38, 21);
	glVertex2f(43, 21);
	glEnd();
	//bulatan

	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glVertex2f(22, 5);
	glVertex2f(24.5, 2);
	glVertex2f(24.5, 5);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glVertex2f(28, 5);
	glVertex2f(25.5, 2);
	glVertex2f(25.5, 5);
	glEnd();

	glLineWidth(2);//garis di bawah bulat
	glBegin(GL_LINE_LOOP);
	glVertex2f(16, 11);
	glVertex2f(34, 11);
	glEnd();

	glLineWidth(2);//garis di atas bulat
	glBegin(GL_LINES);
	glVertex2f(9, 18);
	glVertex2f(41, 18);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(11, 16);
	glVertex2f(14, 13);
	glVertex2f(17, 16);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(18, 16);
	glVertex2f(21, 13);
	glVertex2f(24, 16);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(25, 16);
	glVertex2f(28, 13);
	glVertex2f(31, 16);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(32, 16);
	glVertex2f(35, 13);
	glVertex2f(38, 16);
	glEnd();

	glLineWidth(1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(14, 12);
	glVertex2f(17.5, 15);
	glVertex2f(21, 12);
	glVertex2f(24.5, 15);
	glVertex2f(28, 12);
	glVertex2f(31.5, 15);
	glVertex2f(35, 12);
	glVertex2f(40, 17);
	glVertex2f(9, 17);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0, 14);
	glVertex2f(9, 14);
	glVertex2f(0, 21);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(2, 14);//garis kiri
	glVertex2f(2, 19);
	glVertex2f(4, 14);
	glVertex2f(4, 18);
	glVertex2f(6, 14);
	glVertex2f(6, 16);//garis kiri
	glVertex2f(42, 13);// garis tengah kiri
	glVertex2f(42, 14.5);
	glVertex2f(44, 13);
	glVertex2f(44, 16);
	glVertex2f(46, 13);
	glVertex2f(46, 18);
	glVertex2f(48, 13);
	glVertex2f(48, 19.5);
	glVertex2f(49.5, 13);
	glVertex2f(49.5, 21);//garis tengah kiri
	glVertex2f(56, 13);// garis tengah kanan
	glVertex2f(58, 15);
	glVertex2f(54, 13);
	glVertex2f(56, 16);
	glVertex2f(51, 13);
	glVertex2f(54, 18);
	glVertex2f(50, 15);
	glVertex2f(52, 19);
	//garis tengah kanan
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glVertex2f(40, 13);
	glVertex2f(60, 13);
	glVertex2f(50, 21);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(55, 22);
	glVertex2f(75, 3);
	glVertex2f(95, 22);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);// garis lurus segi3 besar kanan
	glVertex2f(57, 22);
	glVertex2f(57, 20);
	glVertex2f(59, 22);
	glVertex2f(59, 18);
	glVertex2f(61, 22);
	glVertex2f(61, 16);
	glVertex2f(63, 22);
	glVertex2f(63, 14);
	glVertex2f(65, 22);
	glVertex2f(65, 12);
	glVertex2f(67, 22);
	glVertex2f(67, 11);
	glVertex2f(69, 22);
	glVertex2f(69, 9);
	glVertex2f(71, 22);
	glVertex2f(71, 7);
	glVertex2f(73, 22);
	glVertex2f(73, 5);
	glVertex2f(75, 22);
	glVertex2f(75, 3);
	glVertex2f(93, 22);
	glVertex2f(93, 20);
	glVertex2f(91, 22);
	glVertex2f(91, 18);
	glVertex2f(89, 22);
	glVertex2f(89, 16);
	glVertex2f(87, 22);
	glVertex2f(87, 14);
	glVertex2f(85, 22);
	glVertex2f(85, 12);
	glVertex2f(83, 22);
	glVertex2f(83, 11);
	glVertex2f(81, 22);
	glVertex2f(81, 9);
	glVertex2f(79, 22);
	glVertex2f(79, 7);
	glVertex2f(77, 22);
	glVertex2f(77, 5);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glVertex2f(100, 14);
	glVertex2f(91, 14);
	glVertex2f(100, 21);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(98, 14);//garis kiri
	glVertex2f(98, 19);
	glVertex2f(96, 14);
	glVertex2f(96, 18);
	glVertex2f(94, 14);
	glVertex2f(94, 16);//garis kiri
	glEnd();
	kedua();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(600, 150);
	glutInitWindowSize(640, 480);
	glutCreateWindow(argv[0]);
	gluOrtho2D(0, 100, 50, 0);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutDisplayFunc(utama);
	glutMainLoop();

	return(0);
}