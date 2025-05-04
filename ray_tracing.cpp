#include <iostream>

int main() {

    // Image

    int image_width = 256;
    int image_height = 256;

    // Render

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; ++j) {
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i < image_width; i++) {
            auto r = double(i) / (image_width-1);
            auto g = double(j) / (image_height-1);
            auto b = 0.0;

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
    std::clog << "\rDone.                 \n";
}

/*
1- The pixels are written out in rows.

2- Every row of pixels is written out left to right.

3- These rows are written out from top to bottom.

4- By convention, each of the red/green/blue components are represented internally by real-valued variables that range from 0.0 to 1.0. 
These must be scaled to integer values between 0 and 255 before we print them out.

5- Red goes from fully off (black) to fully on (bright red) from left to right, and green goes from fully off at the top (black) to fully on at the bottom (bright green). 
Adding red and green light together make yellow so we should expect the bottom right corner to be yellow.
*/