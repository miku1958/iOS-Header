//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class ARCamera, ARPlaneData, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARPlaneEstimationTechnique : ARTechnique
{
    NSObject<OS_dispatch_semaphore> *_semaphoreResult;
    struct SurfaceDetectionContext *_surfaceDetectionHandle;
    ARPlaneData *_planeResultData;
    NSObject<OS_dispatch_queue> *_detectionQueue;
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    ARCamera *_camera;
    NSArray *_anchorIdentifierMap;
    unsigned long long _detectionTypeMask;
}

@property unsigned long long detectionTypeMask; // @synthesize detectionTypeMask=_detectionTypeMask;

+ (id)_detectPlanesWithDetector:(struct SurfaceDetectionContext *)arg1 types:(unsigned long long)arg2 camera:(id)arg3 featurePoints:(id)arg4 inVisionCoordinates:(BOOL)arg5 singleShot:(BOOL)arg6;
+ (id)detectPlanes:(unsigned long long)arg1 withFrame:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)generateAnchorIdentifiersForCount:(long long)arg1;
- (id)initWithPlaneDetection:(unsigned long long)arg1;
- (id)processData:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (id)resultDataClasses;

@end
