#include<iostream>
#include <math.h>
#include <algorithm>
//mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
#define __________________________________________________ GoodSeparation();
#define WithSide 
#define WithWidth
#define WithHeight
#define WithMarker
#define With_X
#define With_Y
#define BACKGROUND_COLOR
#define FORGROUND_COLOR
#define DefaultMarker '°'
#define PI 3.14159265
#define ConcatToSystemEcho (STRING) "echo " ##STRING
#define ConcatToSystemColor(BC, FG) "color "##BC##FG
#define SystemCall(COMMAND) system(COMMAND)
#define ECHO_OFF system("@echo off")
#define COMMAND(X, COLOR) "cmd.exe /C B.bat "##X " "##COLOR
#define ENTERLINE system("echo.")
#define CHAR_ARRAY char
#define CHAR char
CHAR_ARRAY  result[100];
CHAR_ARRAY _result[100];
const char* base = "cmd.exe /C B.bat ";
CHAR space = ' ';
//mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
inline const char* NUMBERRED_MARKER(char marker, int number) {
	for (size_t i = 0; i < number; i++) {
		result[i] = marker;
	}
	size_t i = 0;
	while (i != number) {
		++i;
	}
	result[i] = '\0';
	return result;
}
void STD_COUT(const char* arg) {
	_result[0] = 'e'; _result[1] = 'c'; _result[2] = 'h'; _result[3] = 'o'; _result[4] = ' ';
	size_t i = 0;
	while (arg[i] != '\0') {
		_result[5 + i] = arg[i];
		++i;
	}
	system(_result);
}
char __com__[200];
const char* COMMAND_(const char* X, const char* __color) {
	size_t i = 0;
	while (base[i] != '\0') {
		__com__[i] = base[i];
		++i;
	}
	size_t j = i;
	i = 0;
	while (X[i] != '\0') {
		__com__[j + i] = X[i];
		++i;
	}
	__com__[j + i] = space;
	size_t k = j + i + 1;
	i = 0;
	while (__color[i] != '\0') {
		__com__[k + i] = __color[i];
		++i;
	}
	return  __com__;
}
void systemCall(const char* arg) {
	system(arg);
}
//mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
class gotoxy {
private:
	int _X, _Y;
public:
	gotoxy() :_X(0), _Y(0) {}
	gotoxy(int x, int y) :_X(x), _Y(y) {}
	void _gotoxy() {
		for (size_t i = 0; i < _Y; i++)
		{
			std::cout << std::endl;
		}
		for (size_t i = 0; i < _X; i++)
		{
			std::cout << ' ';
		}
	}
	void hideGotoxy(int X) {
		std::cout << std::endl;
		for (size_t i = 0; i < X; i++)
		{
			std::cout << ' ';
		}
	}
	int get_x() { return _X; }
	int get_y() { return _Y; }
};
//mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
class square {
private:
	int side;
public:
	square() :side(0) {}
	square(int _r) :side(_r) {}
	int getSide() { return side; }
};
//mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
class rectangle {
private:
	int width, height;
public:
	rectangle() :width(0), height(0) {}
	rectangle(int _w, int _h) : width(_w), height(_h) {}
	int getWidth() { return width; }
	int getHeight() { return height; }
};
//mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
class circle {
private:
	int radius;
public:
	circle() : radius(0) {}
	circle(int _r) : radius(_r) {}
	int getRadius() { return radius; }
};
//mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
class PrintMarker {
private:
	char marker;
public:
	PrintMarker() :marker(DefaultMarker) {}
	PrintMarker(char ch) :marker(ch) {}
	char getMarker() { return marker; }
};
//mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
struct Draw {
	Draw(gotoxy* xy, square* sq, PrintMarker* pm, const char* __colorCode) {
		xy->_gotoxy();
		int SIDE = sq->getSide();
		char MARKER = pm->getMarker();
		for (size_t j = 0; j < SIDE; j++)
		{
			system(COMMAND_(NUMBERRED_MARKER(MARKER, SIDE), __colorCode));
			xy->hideGotoxy(xy->get_x());
		}
		for (size_t i = 0; i < 100; i++) {
			result[i]  = 0;
			_result[i] = 0;
		}
		std::cout << std::endl;
	}
	Draw(gotoxy* xy, rectangle* rc, PrintMarker* pm, const char* __colorCode) {
		xy->_gotoxy();
		int HEIGHT = rc->getHeight();
		char MARKER = pm->getMarker();
		for (size_t j = 0; j < rc->getWidth(); j++)
		{
			system(COMMAND_(NUMBERRED_MARKER(MARKER, HEIGHT), __colorCode));
			xy->hideGotoxy(xy->get_x());
		}
		for (size_t i = 0; i < 100; i++) {
			result[i]  = 0;
			_result[i] = 0;
		}
		std::cout << std::endl;
	}
	void Sort(int* __array__, size_t Size) {
		std::sort(__array__, (int*)((char*)__array__ + (Size * sizeof(int))));
	}
	Draw(gotoxy* xy, circle* cr, PrintMarker* pm, const char* __colorCode) {
		xy->_gotoxy();
		struct circle_xy {
			int x, y;
		} _circe_xy[20000];
		circle_xy Dump_Circle_xy_Value = { 50264, 50264 };
		int laterOn[1000];
		int Spaces[1000];
		size_t index = 0;
		int __r = cr->getRadius();
		int __y = __r;
		for (int r = 0; r <= __r; ++r) {
			for (int tetha = 0; tetha <= 360; tetha += 2) {
				double val = PI / 180;
				double _tetha = tetha * val;
				_circe_xy[index].x = (r*cos(_tetha));
				_circe_xy[index].y = (r*sin(_tetha));
				++index;
			}
		}
		_circe_xy[index].x = Dump_Circle_xy_Value.x;
		_circe_xy[index].y = Dump_Circle_xy_Value.y;
		/* first row value indication */
		size_t index_counter = 0;
		int DumpValue = 50264;
		size_t looper = 0;
		size_t FirstRowAsReference;
		while (_circe_xy[looper].x != Dump_Circle_xy_Value.x && _circe_xy[looper].y != Dump_Circle_xy_Value.y) {
			if (_circe_xy[looper].y == __y) {
				laterOn[index_counter] = _circe_xy[looper].x;
				++index_counter;
				++looper;
			}
			else {
				++looper;
			}
		}
		FirstRowAsReference = index_counter;
		size_t k = 0;
		looper = 0;
		index_counter = 0;
		while (__y >= -__r || -__y <= __r) {
			while (_circe_xy[looper].x != Dump_Circle_xy_Value.x && _circe_xy[looper].y != Dump_Circle_xy_Value.y) {
				if (_circe_xy[looper].y == __y) {
					laterOn[index_counter] = _circe_xy[looper].x;
					++index_counter;
					++looper;
				}
				else {
					++looper;
				}
			}
			laterOn[index_counter] = DumpValue;
			Sort(laterOn, index_counter);
			for (size_t i = 0; i != index_counter; ++i) {
				if (laterOn[i + 1] != laterOn[i]) {
					++k;
				}
			}
			++k;
			xy->hideGotoxy(xy->get_x() - (int)((float)k*0.5f));
			system(COMMAND_(NUMBERRED_MARKER(pm->getMarker(), (int)k), __colorCode));
			for (size_t i = 0; i < 100; ++i) {
				result[i]  = 0;
				_result[i] = 0;
			}
			for (size_t i = 0; i <= index_counter; ++i) {
				laterOn[i] = 0;
			}
			looper = 0;
			index_counter = 0;
			k = 0;
			--__y;
		}
	}
};
void GoodSeparation() {
	for (size_t j = 0; j < 3; j++) {
		std::cout << std::endl;
	}
}
int main() {
	/*Draw (
		&gotoxy(With_X 6, With_Y 6),
		&square(WithSide 6),
		&PrintMarker(WithMarker '+'),
		"67"
	);*/
	/*Draw (
		&gotoxy(With_X 3, With_Y 3),
		&rectangle(WithWidth 3, WithHeight 5),
		&PrintMarker(WithMarker '-'),
		"bb"
	);*/
	Draw(
		&gotoxy(With_X 30, With_Y 30),
		&circle(5),
		&PrintMarker(WithMarker 's'),
		"0b"
	);
	Draw(
		&gotoxy(With_X 25, With_Y 25),
		&circle(8),
		&PrintMarker(WithMarker 's'),
		"0b"
	);
	Draw (
		&gotoxy(With_X 22, With_Y 22),
		&circle(20),
		&PrintMarker(WithMarker 's'),
		"0b"
	);
}
