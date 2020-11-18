//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MISSING_TYPE;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FLEOptions {
    float smoothingAlpha;
    int maxSHDegree;
    float lightIntensityMinimumConstraint;
    BOOL ransacEnabled;
    BOOL chromaEnabled;
    int ransacMinSampleSet;
    float ransacErrorThreshold;
    BOOL darkBehindHead;
};

struct FaceTrackingData;

struct FacialLightEstimation {
    CDUnknownFunctionPointerType *_vptr$FacialLightEstimation;
    struct Matrix<float, 0, 1> m_validSampleIntensities;
    struct vector<int, std::__1::allocator<int>> m_validChromaSampleIDS;
    struct vector<int, std::__1::allocator<int>> m_sampleIndices_all;
    struct Matrix<float, 0, 0> m_validRtfs;
    float m_gamma;
    struct shared_ptr<acv::vision::algorithms::PrecomputedFaceData> m_precomputedFaceData;
    struct Optional<cva::Matrix<float, 9, 1>, void> m_averageSHCoeff;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> m_inliers;
};

struct ImageBuffer<unsigned char>;

struct ImageT<unsigned char> {
    struct shared_ptr<acv::graphics::ImageBuffer<unsigned char>> _field1;
};

struct ImageViewT<unsigned char> {
    struct shared_ptr<acv::graphics::ImageBuffer<unsigned char>> _field1;
};

struct MarkerDetector {
    struct shared_ptr<acv::vision::marker::MarkerDetectorImpl> _field1;
    struct Settings _field2;
    struct map<int, acv::vision::marker::ReferenceMarker, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, acv::vision::marker::ReferenceMarker>>> _field3;
    struct ImageT<unsigned char> _field4;
    struct ImageT<unsigned char> _field5;
    struct ImageT<unsigned char> _field6;
    struct ImageT<unsigned char> _field7;
    struct ImageT<unsigned char> _field8;
    vector_7584168e _field9;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _field10;
    vector_7584168e _field11;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _field12;
};

struct MarkerDetectorImpl;

struct Matrix<float, 0, 0> {
    float *m_data;
    unsigned long long m_capacity;
    unsigned int m_rows;
    unsigned int m_cols;
};

struct Matrix<float, 0, 1> {
    float *m_data;
    unsigned long long m_capacity;
    unsigned int m_rows;
};

struct Matrix<float, 9, 1>;

struct Optional<cva::Matrix<float, 9, 1>, void> {
    struct unique_ptr<cva::Matrix<float, 9, 1>, std::__1::default_delete<cva::Matrix<float, 9, 1>>> m_value;
};

struct PinholeCamera;

struct PrecomputedFaceData;

struct Settings {
    int _field1;
    unsigned char _field2;
    int _field3;
    int _field4;
    BOOL _field5;
    int _field6;
};

struct SurfaceDetectionBoundingBox;

struct SurfaceDetectionPlane {
    int _field1;
    struct SurfaceExtent _field2[3];
    unsigned long long _field3;
    float _field4[3];
    float _field5[3];
    int _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long *_field9;
};

struct SurfaceExtent {
    float _field1[16];
    float _field2[9];
    struct SurfaceDetectionBoundingBox *_field3;
    unsigned long long _field4;
    struct SurfacePoint2d *_field5;
    unsigned long long _field6;
    float _field7;
};

struct SurfacePoint2d;

struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
    void *__value_;
};

struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> {
    void *__value_;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<int, acv::vision::marker::DetectedMarker, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, acv::vision::marker::DetectedMarker>>> {
    struct __tree<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::less<int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<int, acv::vision::marker::ReferenceMarker, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, acv::vision::marker::ReferenceMarker>>> {
    struct __tree<std::__1::__value_type<int, acv::vision::marker::ReferenceMarker>, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::ReferenceMarker>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, acv::vision::marker::ReferenceMarker>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, acv::vision::marker::ReferenceMarker>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::ReferenceMarker>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct shared_ptr<acv::graphics::ImageBuffer<unsigned char>> {
    struct ImageBuffer<unsigned char> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<acv::math::PinholeCamera> {
    struct PinholeCamera *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<acv::vision::algorithms::FaceTrackingData> {
    struct FaceTrackingData *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<acv::vision::algorithms::PrecomputedFaceData> {
    struct PrecomputedFaceData *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<acv::vision::marker::MarkerDetectorImpl> {
    struct MarkerDetectorImpl *_field1;
    struct __shared_weak_count *_field2;
};

struct unique_ptr<cva::Matrix<float, 9, 1>, std::__1::default_delete<cva::Matrix<float, 9, 1>>> {
    struct __compressed_pair<cva::Matrix<float, 9, 1>*, std::__1::default_delete<cva::Matrix<float, 9, 1>>> {
        struct Matrix<float, 9, 1> *__value_;
    } __ptr_;
};

struct vector<ARPatch, std::__1::allocator<ARPatch>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ARPatch *, std::__1::allocator<ARPatch>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__value_;
    } __end_cap_;
};

struct vector<short, std::__1::allocator<short>> {
    short *__begin_;
    short *__end_;
    struct __compressed_pair<short *, std::__1::allocator<short>> {
        short *__value_;
    } __end_cap_;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *_field1;
    } _field3;
};

struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

#if 0
// Names with conflicting types:
typedef struct ?<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
    struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> **_field1;
} vector_80ea899f;

typedef struct ?<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> __end_cap_;
} vector_e654105b;

typedef struct ?<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> {
    struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> **_field1;
} vector_35647d6b;

typedef struct ?<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> __end_cap_;
} vector_1cb3ea33;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *columns[3];
} CDStruct_8e0628e6;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    float coefficients[9];
} CDStruct_9c26ff66;

typedef struct {
    double m11;
    double m12;
    double m13;
    double m21;
    double m22;
    double m23;
    double m31;
    double m32;
    double m33;
} CDStruct_2d7b3170;

typedef struct {
    double x;
    double y;
    double z;
} CDStruct_31142d93;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long state;
    long long reason;
    BOOL relocalized;
    BOOL poseGraphUpdated;
    int vioTrackingState;
} CDStruct_ca3abd1f;

typedef struct CDStruct_183601bc;

// Template types
typedef struct ImageViewT<unsigned char> {
    struct shared_ptr<acv::graphics::ImageBuffer<unsigned char>> _field1;
} ImageViewT_0571eb02;

typedef struct shared_ptr<acv::vision::algorithms::FaceTrackingData> {
    struct FaceTrackingData *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_c68b61c3;

typedef struct vector<ARPatch, std::__1::allocator<ARPatch>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ARPatch *, std::__1::allocator<ARPatch>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
} vector_f87b304d;

typedef struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
} vector_7584168e;

typedef struct vector<short, std::__1::allocator<short>> {
    short *__begin_;
    short *__end_;
    struct __compressed_pair<short *, std::__1::allocator<short>> {
        short *__value_;
    } __end_cap_;
} vector_00df4d9c;

typedef struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__value_;
    } __end_cap_;
} vector_7984f87c;

