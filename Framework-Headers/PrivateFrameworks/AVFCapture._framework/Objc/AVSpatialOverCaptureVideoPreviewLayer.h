//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVCaptureVideoPreviewLayer.h>

@class CALayer;

@interface AVSpatialOverCaptureVideoPreviewLayer : AVCaptureVideoPreviewLayer
{
    struct os_unfair_lock_s _primaryCaptureRectLock;
    struct CGPoint _primaryCaptureRectCenterPoint;
    double _primaryCaptureRectAspectRatio;
    long long _primaryCaptureRectUniqueID;
    BOOL _havePendingPrimaryCaptureRectChange;
    struct CGRect _primaryCaptureRect;
    struct CGRect _overCaptureRect;
    struct CGSize _contentSize;
    BOOL _primaryAndOverCaptureCompositingEnabled;
    long long _overCaptureStatus;
    BOOL _isPresentationLayer;
    BOOL _automaticallyDimsOverCaptureRegion;
    CALayer *_topDimmingOverlay;
    CALayer *_bottomDimmingOverlay;
    double _lastAspectCenterUpdateTime;
}

@property (nonatomic) BOOL automaticallyDimsOverCaptureRegion;
@property (readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (readonly, nonatomic) struct CGRect overCaptureRect; // @synthesize overCaptureRect=_overCaptureRect;
@property (readonly, nonatomic) long long overCaptureStatus;
@property (nonatomic, getter=isPrimaryAndOverCaptureCompositingEnabled) BOOL primaryAndOverCaptureCompositingEnabled;
@property (readonly, nonatomic) struct CGRect primaryCaptureRect; // @synthesize primaryCaptureRect=_primaryCaptureRect;
@property (readonly, nonatomic) double primaryCaptureRectAspectRatio;
@property (readonly, nonatomic) struct CGPoint primaryCaptureRectCenterPoint;

+ (long long)uniqueID;
- (void)_handleSpatialNotification:(id)arg1 payload:(id)arg2;
- (id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (struct CGAffineTransform)captureDeviceTransformForSensorSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(struct CGSize)arg4;
- (void)getPrimaryCaptureRectCenter:(struct CGPoint *)arg1 aspectRatio:(double *)arg2 uniqueID:(long long *)arg3;
- (id)initWithLayer:(id)arg1;
- (void)layoutSublayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)primaryCaptureRectUniqueID;
- (void)removeConnection:(id)arg1;
- (void)setPrimaryCaptureRectAspectRatio:(double)arg1 centerPoint:(struct CGPoint)arg2;

@end
