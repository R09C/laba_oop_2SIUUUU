#pragma once

struct PointStruct
{
	double x;
	double y;

	PointStruct() {

	}

	PointStruct(double x, double y) :x(x), y(y) {

	}

	PointStruct operator+(const PointStruct& other) const {
		PointStruct th;
		th.x = x + other.x;
		th.y = y + other.y;
		return th;
	}

	PointStruct operator-(const PointStruct& other) const {
		PointStruct th;
		th.x = x - other.x;
		th.y = y - other.y;
		return th;
	}

	PointStruct operator/(const double a) const {
		PointStruct th;
		th.x = x / a;
		th.y = y / a;
		return th;
	}

	PointStruct operator*(const double a) const {
		PointStruct th;
		th.x = x * a;
		th.y = y * a;
		return th;
	}
	PointStruct operator*(const PointStruct& other) const {
		PointStruct th;
		th.x = x * other.x;
		th.y = y * other.y;
		return th;
	}

};