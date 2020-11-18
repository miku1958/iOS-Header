//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUInteractiveTileTracker.h>

@class PUChangeDirectionValueFilter, PUPinchTracker, PUTileLayoutInfo, PUVelocityFilter, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUPinchedTileTracker : PUInteractiveTileTracker
{
    struct {
        BOOL respondsToInitialAspectRatioForTileWithLayoutInfo;
        BOOL respondsToFinalLayoutInfoForTileWithLayoutInfo;
    } _delegateFlags;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    long long _direction;
    PUChangeDirectionValueFilter *__pinchGestureRecognizerScaleDirectionValueFilter;
    PUPinchTracker *__pinchTracker;
    double __pinchProgress;
    PUTileLayoutInfo *__initialLayoutInfo;
    PUTileLayoutInfo *__targetLayoutInfo;
    PUVelocityFilter *__horizontalVelocityFilter;
    PUVelocityFilter *__verticalVelocityFilter;
    PUVelocityFilter *__angularVelocityFilter;
}

@property (strong, nonatomic, setter=_setAngularVelocityFilter:) PUVelocityFilter *_angularVelocityFilter; // @synthesize _angularVelocityFilter=__angularVelocityFilter;
@property (strong, nonatomic, setter=_setHorizontalVelocityFilter:) PUVelocityFilter *_horizontalVelocityFilter; // @synthesize _horizontalVelocityFilter=__horizontalVelocityFilter;
@property (strong, nonatomic, setter=_setInitialLayoutInfo:) PUTileLayoutInfo *_initialLayoutInfo; // @synthesize _initialLayoutInfo=__initialLayoutInfo;
@property (strong, nonatomic, setter=_setPinchGestureRecognizerScaleDirectionValueFilter:) PUChangeDirectionValueFilter *_pinchGestureRecognizerScaleDirectionValueFilter; // @synthesize _pinchGestureRecognizerScaleDirectionValueFilter=__pinchGestureRecognizerScaleDirectionValueFilter;
@property (nonatomic, setter=_setPinchProgress:) double _pinchProgress; // @synthesize _pinchProgress=__pinchProgress;
@property (strong, nonatomic, setter=_setPinchTracker:) PUPinchTracker *_pinchTracker; // @synthesize _pinchTracker=__pinchTracker;
@property (strong, nonatomic, setter=_setTargetLayoutInfo:) PUTileLayoutInfo *_targetLayoutInfo; // @synthesize _targetLayoutInfo=__targetLayoutInfo;
@property (strong, nonatomic, setter=_setVerticalVelocityFilter:) PUVelocityFilter *_verticalVelocityFilter; // @synthesize _verticalVelocityFilter=__verticalVelocityFilter;
@property (readonly, nonatomic) long long direction; // @synthesize direction=_direction;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;

- (void).cxx_destruct;
- (void)_updateTargetLayoutInfoIfNeeded;
- (void)completeTracking;
- (void)configureTileReattachmentContext:(id)arg1;
- (id)initWithPinchGestureRecognizer:(id)arg1 tilingView:(id)arg2 direction:(long long)arg3;
- (id)initWithTilingView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startTileControllerTracking;
- (id)tileControllerToTrack;
- (void)updateGestureRecognizerTracking;
- (void)updateTileControllerTracking;

@end
