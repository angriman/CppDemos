// #ifndef POLYGON_H
// #define POLYGON_H

class Polygon {

protected:
    int width, height;

public:

    void setValues(int width, int height) {
        this->width = width;
        this->height = height;
    }

    virtual int area (void) = 0;
};

// #endif
