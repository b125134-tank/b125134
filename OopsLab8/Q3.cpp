#include <iostream>
using namespace std;

class Compressor {
public:
    virtual double compress(double fileSize) {
        return fileSize;
    }
};

class TextCompressor : public Compressor {
public:
    double compress(double fileSize) override {
        return fileSize * 0.40;
    }
};

class ImageCompressor : public Compressor {
public:
    double compress(double fileSize) override {
        return fileSize * 0.70;
    }
};

int main() {
    double size;
    cout << "Enter original file size (MB): ";
    cin >> size;

    TextCompressor text;
    ImageCompressor image;

    cout << "Original Size: " << size << " MB" << endl;
    cout << "Compressed Text Size: "
         << text.compress(size) << " MB" << endl;
    cout << "Compressed Image Size: "
         << image.compress(size) << " MB" << endl;

    return 0;
}