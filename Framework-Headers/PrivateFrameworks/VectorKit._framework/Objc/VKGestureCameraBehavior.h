//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString, VKCameraController;

__attribute__((visibility("hidden")))
@interface VKGestureCameraBehavior : NSObject <VKGesturingCameraController>
{
    BOOL _pinching;
    struct CGPoint _pinchStartFocusPoint;
    BOOL _panning;
    struct CGPoint _panStartFocusPoint;
    struct CGPoint _panStartScreenPoint;
    struct CGPoint _panLastScreenPoint;
    BOOL _rotating;
    struct CGPoint _rotateStartFocusPoint;
    double _lastRotation;
    BOOL _shouldRotationRubberband;
    BOOL _pitching;
    struct CGPoint _pitchStartFocusPoint;
    struct CGPoint _pitchStartScreenPoint;
    BOOL _notifyCameraStateChanges;
    VKCameraController *_cameraController;
    int _flyoverMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginPan:(struct CGPoint)arg1;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)beginRotate:(struct CGPoint)arg1;
- (void)beginZoom:(struct CGPoint)arg1;
- (void)dealloc;
- (void)endPan:(struct CGPoint)arg1;
- (void)endPitch:(struct CGPoint)arg1;
- (void)endRotate:(struct CGPoint)arg1;
- (void)endZoom:(struct CGPoint)arg1;
- (id)initWithCameraController:(id)arg1;
- (BOOL)isGesturing;
- (BOOL)isPanning;
- (BOOL)isPinching;
- (BOOL)isPitching;
- (BOOL)isRotating;
- (void)setFlyoverMode:(int)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(BOOL)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transferGestureState:(id)arg1;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

