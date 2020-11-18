//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BurstActionClassifier, BurstImageFaceAnalysisContext, NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, VNImageBuffer;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface BurstImageSetInternal : NSObject
{
    NSObject<OS_dispatch_queue> *_burstAnalyzerDispatchQueue;
    NSObject<OS_dispatch_semaphore> *_pendingFramesSemaphore;
    NSObject<OS_dispatch_queue> *_yuvdumpDispatchQueue;
    int _temporalOrder;
    int _maxNumPendingFrames;
    BOOL _enableAnalysis;
    int _dummyAnalysisCount;
    BOOL _enableFaceCore;
    BOOL _enableDumpYUV;
    BOOL _isAction;
    BOOL _isPortrait;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_burstLogFileHandle;
    int _currentClusterIndexToProcess;
    NSMutableArray *_clusterArray;
    BurstImageFaceAnalysisContext *_faceAnalysisContext;
    NSCountedSet *_faceIDCounts;
    int _version;
    NSString *_burstId;
    CDUnknownBlockType _loggingCallback;
    VNImageBuffer *_overrideImage;
    NSDictionary *_overrideProps;
    NSMutableArray *_allImageIdentifiers;
    NSMutableDictionary *_statsByImageIdentifier;
    NSMutableDictionary *_clusterByImageIdentifier;
    NSString *_burstLogFileName;
    BurstActionClassifier *_actionClassifier;
    NSString *_burstCoverSelection;
    NSArray *_bestImageIdentifiersArray;
    NSString *_versionString;
}

@property (strong) BurstActionClassifier *actionClassifier; // @synthesize actionClassifier=_actionClassifier;
@property (strong) NSMutableArray *allImageIdentifiers; // @synthesize allImageIdentifiers=_allImageIdentifiers;
@property (strong) NSArray *bestImageIdentifiersArray; // @synthesize bestImageIdentifiersArray=_bestImageIdentifiersArray;
@property (strong) NSString *burstCoverSelection; // @synthesize burstCoverSelection=_burstCoverSelection;
@property (strong) NSString *burstId; // @synthesize burstId=_burstId;
@property (strong) NSString *burstLogFileName; // @synthesize burstLogFileName=_burstLogFileName;
@property (strong) NSMutableArray *clusterArray; // @synthesize clusterArray=_clusterArray;
@property (strong) NSMutableDictionary *clusterByImageIdentifier; // @synthesize clusterByImageIdentifier=_clusterByImageIdentifier;
@property int dummyAnalysisCount; // @synthesize dummyAnalysisCount=_dummyAnalysisCount;
@property BOOL enableAnalysis; // @synthesize enableAnalysis=_enableAnalysis;
@property BOOL enableDumpYUV; // @synthesize enableDumpYUV=_enableDumpYUV;
@property BOOL enableFaceCore; // @synthesize enableFaceCore=_enableFaceCore;
@property (strong) BurstImageFaceAnalysisContext *faceAnalysisContext; // @synthesize faceAnalysisContext=_faceAnalysisContext;
@property (strong) NSCountedSet *faceIDCounts; // @synthesize faceIDCounts=_faceIDCounts;
@property (copy, nonatomic) CDUnknownBlockType loggingCallback; // @synthesize loggingCallback=_loggingCallback;
@property int maxNumPendingFrames; // @synthesize maxNumPendingFrames=_maxNumPendingFrames;
@property (strong) VNImageBuffer *overrideImage; // @synthesize overrideImage=_overrideImage;
@property (strong) NSDictionary *overrideProps; // @synthesize overrideProps=_overrideProps;
@property (strong) NSMutableDictionary *statsByImageIdentifier; // @synthesize statsByImageIdentifier=_statsByImageIdentifier;
@property int temporalOrder; // @synthesize temporalOrder=_temporalOrder;
@property int version; // @synthesize version=_version;
@property (strong) NSString *versionString; // @synthesize versionString=_versionString;

+ (id)defaultVersionString;
- (void).cxx_destruct;
- (void)_addImageInternal:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_reorientFaceRects:(id)arg1 imageSize:(struct CGSize)arg2 orientation:(int)arg3;
- (struct CGRect)_reorientROIRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 orientation:(int)arg3;
- (void)addImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)allImageClusters;
- (id)bestImageIdentifiers;
- (id)burstDocumentDirectory;
- (float)computeActionSelectionThreshold;
- (void)computeAllImageScores;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeCameraTravelDistance;
- (int)computeEmotion:(id)arg1;
- (void)dealloc;
- (id)findBestImage:(id)arg1 useActionScores:(BOOL)arg2;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (BOOL)isAction;
- (BOOL)isFaceDetectionForced;
- (BOOL)isPortrait;
- (void)performEmotionalRejectionOnCluster:(id)arg1;
- (void)processClusters:(BOOL)arg1;
- (double)secondsSinceStart;
- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;

@end
