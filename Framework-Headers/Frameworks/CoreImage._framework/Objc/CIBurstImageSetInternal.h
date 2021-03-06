//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIBurstActionClassifier, CIBurstImageFaceAnalysisContext, CIBurstYUVImage, NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CIBurstImageSetInternal : NSObject
{
    NSObject<OS_dispatch_queue> *dq;
    NSObject<OS_dispatch_queue> *dq_yuvdump;
    NSObject<OS_dispatch_semaphore> *sem;
    NSMutableArray *clusterArray;
    int temporalOrder;
    int maxNumPendingFrames;
    BOOL enableAnalysis;
    int dummyAnalysisCount;
    BOOL enableFaceCore;
    BOOL enableDumpYUV;
    NSString *burstCoverSelection;
    BOOL isAction;
    BOOL isPortrait;
    CIBurstImageFaceAnalysisContext *faceAnalysisContext;
    CIBurstYUVImage *overrideImage;
    NSDictionary *overrideProps;
    NSMutableArray *allImageIdentifiers;
    NSCountedSet *faceIDCounts;
    NSMutableDictionary *statsByImageIdentifier;
    NSMutableDictionary *clusterByImageIdentifier;
    NSString *burstLogFileName;
    struct __sFILE *burstLogFileHandle;
    CIBurstActionClassifier *actionClassifier;
    int curClusterIndexToProcess;
    NSMutableArray *bestImageIdentifiersArray;
    int _version;
    NSString *burstId;
    NSString *_versionString;
}

@property CIBurstActionClassifier *actionClassifier; // @synthesize actionClassifier;
@property NSMutableArray *allImageIdentifiers; // @synthesize allImageIdentifiers;
@property NSArray *bestImageIdentifiersArray; // @synthesize bestImageIdentifiersArray;
@property NSString *burstCoverSelection; // @synthesize burstCoverSelection;
@property (strong, nonatomic) NSString *burstId; // @synthesize burstId;
@property NSString *burstLogFileName; // @synthesize burstLogFileName;
@property NSMutableArray *clusterArray; // @synthesize clusterArray;
@property NSMutableDictionary *clusterByImageIdentifier; // @synthesize clusterByImageIdentifier;
@property int dummyAnalysisCount; // @synthesize dummyAnalysisCount;
@property BOOL enableAnalysis; // @synthesize enableAnalysis;
@property BOOL enableDumpYUV; // @synthesize enableDumpYUV;
@property BOOL enableFaceCore; // @synthesize enableFaceCore;
@property NSCountedSet *faceIDCounts; // @synthesize faceIDCounts;
@property int maxNumPendingFrames; // @synthesize maxNumPendingFrames;
@property NSMutableDictionary *statsByImageIdentifier; // @synthesize statsByImageIdentifier;
@property int temporalOrder; // @synthesize temporalOrder;
@property int version; // @synthesize version=_version;
@property NSString *versionString; // @synthesize versionString=_versionString;

+ (id)defaultVersionString;
- (void)addImageFromIOSurface:(struct __IOSurface *)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addYUVImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
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
- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;

@end

