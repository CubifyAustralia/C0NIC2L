#ifndef SLICER_H
#define SLICER_H

class Slicer {
public:
    static void sliceGeometry(const std::string& geometryFile);
    static void generateGCode(const std::string& outputDir);
};

#endif // SLICER_H
