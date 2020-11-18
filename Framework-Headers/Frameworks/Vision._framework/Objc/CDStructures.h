//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MISSING_TYPE;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BurstSupportVector {
    double _field1;
    double _field2[7];
};

struct CC_MD5state_st {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7[16];
    int _field8;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct CVMLCanceller {
    CDUnknownFunctionPointerType *_field1;
    BOOL _field2;
    int _field3;
};

struct ChnsFeat {
    int _field1;
    int _field2;
    struct hog _field3;
    struct gradient _field4;
};

struct DTreeApply;

struct DTreeNode;

struct DetectedObject;

struct FaceBoxPoseAligner<signed char>;

struct FaceClassifier_BoostedPixelDifference;

struct FaceFrontalizer;

struct FaceIDModel;

struct FaceRegionMap;

struct FastRegistration_Signatures {
    float *piRow;
    unsigned long long nPiRow;
    struct Projections_meanStdTable piRowTable;
    float *piCol;
    unsigned long long nPiCol;
    struct Projections_meanStdTable piColTable;
    char *_memoryContainer;
};

struct GreedyClustererFaces;

struct GridROI_t {
    int startX;
    int startY;
    int endX;
    int endY;
};

struct ImageClassfier_Graph;

struct ImageClassifierAbstract {
    CDUnknownFunctionPointerType *_field1;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field2;
    map_fdb8d0b1 _field3;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field4;
    int _field5;
    float _field6;
    float _field7;
    int _field8;
    int _field9;
};

struct ImageClassifier_HierarchicalModel {
    struct ImageClassfier_Graph *_field1;
};

struct ImageDescriptorAugmenterFlip;

struct ImageDescriptorBufferAbstract {
    CDUnknownFunctionPointerType *_field1;
    struct vector<long long, std::__1::allocator<long long>> _field2;
    struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int>>> _field3;
    void *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    BOOL _field8;
};

struct ImageDescriptorBufferFloat32 {
    CDUnknownFunctionPointerType *_field1;
    struct vector<long long, std::__1::allocator<long long>> _field2;
    struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int>>> _field3;
    void *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    BOOL _field8;
    unsigned long long _field9;
    int _field10;
    float *_field11;
};

struct ImageDescriptorProcessorAbstract {
    CDUnknownFunctionPointerType *_field1;
};

struct LandmarkAttributes;

struct LandmarkDetector;

struct MPClusteringTreeNode {
    id _field1;
    int _field2;
    float _field3;
    float _field4;
    int _field5;
    struct MPClusteringTreeNode *_field6;
    struct MPClusteringTreeNode *_field7;
    struct MPClusteringTreeNode *_field8;
    struct MPClusteringTreeNode *_field9;
};

struct ObjectDetectorAbstract;

struct ObjectDetector_DCNFaceDetector;

struct ObjectTrackerAbstract {
    CDUnknownFunctionPointerType *_field1;
    struct ObjectDetectorAbstract *_field2;
    struct shared_ptr<vision::mod::ObjectTrackerOptions> _field3;
};

struct ObjectTrackerOptions {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    int _field3;
};

struct Projections_meanStdTable {
    float *sumTable;
    float *sumSqTable;
};

struct SharpnessGridElement_t {
    unsigned char _field1;
    unsigned char _field2;
    float _field3;
};

struct SimilarityMatrixAbstract;

struct TemplateObjectDetectorApply {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    BOOL _field5;
    float _field6[2];
    float _field7[2];
    float _field8;
    BOOL _field9;
    BOOL _field10;
    float _field11;
    float _field12;
    int _field13;
    float _field14;
    struct hog _field15;
    struct ChnsFeat _field16;
    int _field17;
    struct vector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply>> _field18;
    struct vector<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>>> _field19;
    struct vector<float, std::__1::allocator<float>> _field20;
    struct vector<vision::hum::DTreeNode *, std::__1::allocator<vision::hum::DTreeNode *>> _field21;
    float _field22;
    struct adaBoostApply _field23;
    struct linearSVMApply _field24;
    id _field25;
};

struct ThresholdSet_t {
    float _field1;
    float _field2;
    float _field3;
};

struct _Geometry2D_point2D_ {
    float x;
    float y;
};

struct _Geometry2D_rect2D_ {
    struct _Geometry2D_point2D_ origin;
    struct _Geometry2D_size2D_ size;
};

struct _Geometry2D_size2D_ {
    float height;
    float width;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CCBigBox {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    struct __CCCharBox _field5[50];
};

struct __CCBox {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
};

struct __CCCharBox {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
};

struct __CCColorProfileContext {
    struct vImage_Buffer _field1;
    struct vImage_Buffer _field2;
    struct vImage_Buffer _field3;
    struct vImage_Buffer _field4;
    int _field5;
    int _field6;
    unsigned short _field7;
    unsigned short _field8;
};

struct __CCFilterSumDerivConfig {
    struct __CCRange _field1;
    struct __CCRange _field2;
    BOOL _field3;
    BOOL _field4;
    unsigned long long _field5;
    unsigned long long _field6;
};

struct __CCPulseWindowContext {
    struct __CCRange *_field1;
    unsigned short _field2;
    unsigned short _field3;
    short _field4;
    BOOL _field5;
};

struct __CCRange {
    unsigned short _field1;
    unsigned short _field2;
};

struct __CCSumDerivVectors {
    float *_field1;
    float *_field2;
    float *_field3;
    float *_field4;
    float *_field5;
    float _field6;
    float _field7;
    int _field8;
    int _field9;
};

struct __SVMParameters {
    struct __SVMScaleOffset {
        float _field1;
        float _field2;
    } _field1[7];
    double _field2;
    double _field3;
    int _field4;
    int _field5;
    struct BurstSupportVector *_field6;
    struct BurstSupportVector *_field7;
};

struct __rgbMinMaxFloat {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct __rgbMinMaxU8 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
};

struct __rgbaColor {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct adaBoostApply {
    struct vector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply>> _field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

struct gradient;

struct hog {
    struct gradient _field1;
};

struct linearSVMApply {
    struct vector<float, std::__1::allocator<float>> _field1;
    float _field2;
    struct vector<float, std::__1::allocator<float>> _field3;
};

struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>;

struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int>>> {
    struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<long long, std::__1::vector<long long, std::__1::allocator<long long>>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long>>>>> {
    struct __tree<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct mapped_model_file {
    int _field1;
    void *_field2;
    unsigned long long _field3;
};

struct model_file_cache;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct pair<long long, long long>;

struct shared_ptr<const vision::mod::GreedyClustererFaces> {
    struct GreedyClustererFaces *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<unsigned char> {
    char *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> {
    struct FaceBoxPoseAligner<signed char> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceClassifier_BoostedPixelDifference> {
    struct FaceClassifier_BoostedPixelDifference *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceFrontalizer> {
    struct FaceFrontalizer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceIDModel> {
    struct FaceIDModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceRegionMap> {
    struct FaceRegionMap *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::GreedyClustererFaces> {
    struct GreedyClustererFaces *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageClassifierAbstract> {
    struct ImageClassifierAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> {
    struct ImageClassifier_HierarchicalModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> {
    struct ImageDescriptorAugmenterFlip *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> {
    struct ImageDescriptorBufferAbstract *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> {
    struct ImageDescriptorBufferFloat32 *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> {
    struct ImageDescriptorProcessorAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::LandmarkAttributes> {
    struct LandmarkAttributes *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::LandmarkDetector> {
    struct LandmarkDetector *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> {
    struct ObjectDetector_DCNFaceDetector *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ObjectTrackerAbstract> {
    struct ObjectTrackerAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ObjectTrackerOptions> {
    struct ObjectTrackerOptions *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<vision::mod::SimilarityMatrixAbstract> {
    struct SimilarityMatrixAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache>> {
    struct __compressed_pair<cvml::util::model_file_cache *, std::__1::default_delete<cvml::util::model_file_cache>> {
        struct model_file_cache *__first_;
    } __ptr_;
};

struct vImage_Buffer {
    void *data;
    unsigned long long height;
    unsigned long long width;
    unsigned long long rowBytes;
};

struct vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *>> {
    struct MPClusteringTreeNode **_field1;
    struct MPClusteringTreeNode **_field2;
    struct __compressed_pair<MPClusteringTreeNode **, std::__1::allocator<MPClusteringTreeNode *>> {
        struct MPClusteringTreeNode **_field1;
    } _field3;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *_field1;
    long long *_field2;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *_field1;
    } _field3;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

struct vector<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>>> {
    struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>> *_field1;
    struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>> *_field2;
    struct __compressed_pair<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>*, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>>>> {
        struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode>>> *_field1;
    } _field3;
};

struct vector<std::__1::map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>>, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>>>> {
    map_fdb8d0b1 *_field1;
    map_fdb8d0b1 *_field2;
    struct __compressed_pair<std::__1::map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>>*, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>>>> {
        map_fdb8d0b1 *_field1;
    } _field3;
};

struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long>>> {
    struct pair<long long, long long> *_field1;
    struct pair<long long, long long> *_field2;
    struct __compressed_pair<std::__1::pair<long long, long long>*, std::__1::allocator<std::__1::pair<long long, long long>>> {
        struct pair<long long, long long> *_field1;
    } _field3;
};

struct vector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply>> {
    struct DTreeApply *_field1;
    struct DTreeApply *_field2;
    struct __compressed_pair<vision::hum::DTreeApply *, std::__1::allocator<vision::hum::DTreeApply>> {
        struct DTreeApply *_field1;
    } _field3;
};

struct vector<vision::hum::DTreeNode *, std::__1::allocator<vision::hum::DTreeNode *>> {
    struct DTreeNode **_field1;
    struct DTreeNode **_field2;
    struct __compressed_pair<vision::hum::DTreeNode **, std::__1::allocator<vision::hum::DTreeNode *>> {
        struct DTreeNode **_field1;
    } _field3;
};

struct vector<vision::mod::DetectedObject, std::__1::allocator<vision::mod::DetectedObject>> {
    struct DetectedObject *_field1;
    struct DetectedObject *_field2;
    struct __compressed_pair<vision::mod::DetectedObject *, std::__1::allocator<vision::mod::DetectedObject>> {
        struct DetectedObject *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    MISSING_TYPE *columns[3];
} CDStruct_8e0628e6;

typedef struct {
    MISSING_TYPE *_field1[4];
} CDStruct_f1db2b5e;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

// Template types
typedef struct map<long long, std::__1::vector<long long, std::__1::allocator<long long>>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long>>>>> {
    struct __tree<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::vector<long long, std::__1::allocator<long long>>>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_ad20a682;

typedef struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_fdb8d0b1;

typedef struct shared_ptr<const vision::mod::GreedyClustererFaces> {
    struct GreedyClustererFaces *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_605f6fd7;

typedef struct shared_ptr<vision::mod::FaceIDModel> {
    struct FaceIDModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_8c39738b;

typedef struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> {
    struct ImageDescriptorBufferAbstract *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_0a6daad2;

typedef struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> {
    struct ImageDescriptorBufferFloat32 *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_099ccdd3;

typedef struct vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *>> {
    struct MPClusteringTreeNode **_field1;
    struct MPClusteringTreeNode **_field2;
    struct __compressed_pair<MPClusteringTreeNode **, std::__1::allocator<MPClusteringTreeNode *>> {
        struct MPClusteringTreeNode **_field1;
    } _field3;
} vector_e14a6833;

typedef struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
} vector_3203cf93;

typedef struct vector<std::__1::map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>>, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>>>> {
    map_fdb8d0b1 *_field1;
    map_fdb8d0b1 *_field2;
    struct __compressed_pair<std::__1::map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>>*, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>>>> {
        map_fdb8d0b1 *_field1;
    } _field3;
} vector_dcc19312;

typedef struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long>>> {
    struct pair<long long, long long> *_field1;
    struct pair<long long, long long> *_field2;
    struct __compressed_pair<std::__1::pair<long long, long long>*, std::__1::allocator<std::__1::pair<long long, long long>>> {
        struct pair<long long, long long> *_field1;
    } _field3;
} vector_22dfb71c;

typedef struct vector<vision::mod::DetectedObject, std::__1::allocator<vision::mod::DetectedObject>> {
    struct DetectedObject *_field1;
    struct DetectedObject *_field2;
    struct __compressed_pair<vision::mod::DetectedObject *, std::__1::allocator<vision::mod::DetectedObject>> {
        struct DetectedObject *_field1;
    } _field3;
} vector_41a7cb1a;

