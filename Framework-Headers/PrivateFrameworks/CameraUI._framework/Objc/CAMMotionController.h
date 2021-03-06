//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/BKSAccelerometerDelegate-Protocol.h>
#import <CameraUI/CAMLevelViewModelChangeObserver-Protocol.h>

@class BKSAccelerometer, CAMLevelViewModel, CAMPreviewAlignmentModel, CMMotionManager, NSString;

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate, CAMLevelViewModelChangeObserver>
{
    BOOL __didNotifyCaptureOrientationWasInvalid;
    long long _dominantPhysicalButton;
    CAMLevelViewModel *_activeLevelViewModel;
    CAMPreviewAlignmentModel *_activePreviewAlignmentModel;
    long long __cachedCaptureOrientation;
    long long __fallbackCaptureOrientation;
    BKSAccelerometer *__accelerometer;
    long long __numberOfDominantPhysicalButtonObservers;
    CMMotionManager *__physicalButtonMotionManager;
    CMMotionManager *__attitudeAlignmentMotionManager;
}

@property (strong, nonatomic, setter=_setAccelerometer:) BKSAccelerometer *_accelerometer; // @synthesize _accelerometer=__accelerometer;
@property (readonly, nonatomic) CMMotionManager *_attitudeAlignmentMotionManager; // @synthesize _attitudeAlignmentMotionManager=__attitudeAlignmentMotionManager;
@property (nonatomic, setter=_setCachedCaptureOrientation:) long long _cachedCaptureOrientation; // @synthesize _cachedCaptureOrientation=__cachedCaptureOrientation;
@property (nonatomic, setter=_setDidNotifyCaptureOrientationWasInvalid:) BOOL _didNotifyCaptureOrientationWasInvalid; // @synthesize _didNotifyCaptureOrientationWasInvalid=__didNotifyCaptureOrientationWasInvalid;
@property (readonly, nonatomic) long long _fallbackCaptureOrientation; // @synthesize _fallbackCaptureOrientation=__fallbackCaptureOrientation;
@property (nonatomic, setter=_setNumberOfDominantPhysicalButtonObservers:) long long _numberOfDominantPhysicalButtonObservers; // @synthesize _numberOfDominantPhysicalButtonObservers=__numberOfDominantPhysicalButtonObservers;
@property (readonly, nonatomic) CMMotionManager *_physicalButtonMotionManager; // @synthesize _physicalButtonMotionManager=__physicalButtonMotionManager;
@property (strong, nonatomic, setter=_setActiveLevelViewModel:) CAMLevelViewModel *activeLevelViewModel; // @synthesize activeLevelViewModel=_activeLevelViewModel;
@property (strong, nonatomic, setter=_setActivePreviewAlignmentModel:) CAMPreviewAlignmentModel *activePreviewAlignmentModel; // @synthesize activePreviewAlignmentModel=_activePreviewAlignmentModel;
@property (readonly, nonatomic) long long captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setDominantPhysicalButton:) long long dominantPhysicalButton; // @synthesize dominantPhysicalButton=_dominantPhysicalButton;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long panoramaCaptureOrientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_debugStringForDeviceOrientation:(long long)arg1;
- (id)_debugStringForInterfaceOrientation:(long long)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleLevelMotionUpdate:(id)arg1 error:(id)arg2;
- (void)_updateAttitudeAlignmentMotionManager;
- (void)_updateInitialOrientation;
- (void)_updatePhysicalButtonObservation;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (void)beginUpdatingLevelViewModel:(id)arg1;
- (void)beginUpdatingPreviewAlignmentModel:(id)arg1;
- (void)dealloc;
- (void)debugValidateCaptureOrientationForMode:(long long)arg1;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (void)endUpdatingActiveLevelViewModel;
- (void)endUpdatingPreviewAlignmentModel;
- (id)init;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void *)arg3;

@end

