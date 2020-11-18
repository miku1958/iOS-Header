//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextMagnifierTimeWeightedPoint, UITextSelectionWindowAveragedValue;
@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface UITextGestureTuning : NSObject
{
    BOOL _didBreakLineThresholdBelow;
    BOOL _didBreakLineThresholdAbove;
    double _visibilityOffset;
    double _initialOffset;
    double _initialOffsetFromTopOfCaret;
    UITextSelectionWindowAveragedValue *_averagedRadius;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    long long _lastTouchType;
    BOOL _shouldUseLineThreshold;
    BOOL _shouldIncludeConstantOffset;
    BOOL _includeTipProjection;
    BOOL _strongerBiasAgainstUp;
    NSObject<UICoordinateSpace> *_coordinateSpace;
}

@property (weak, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property (nonatomic) BOOL includeTipProjection; // @synthesize includeTipProjection=_includeTipProjection;
@property (nonatomic) BOOL shouldIncludeConstantOffset; // @synthesize shouldIncludeConstantOffset=_shouldIncludeConstantOffset;
@property (nonatomic) BOOL shouldUseLineThreshold; // @synthesize shouldUseLineThreshold=_shouldUseLineThreshold;
@property (nonatomic) BOOL strongerBiasAgainstUp; // @synthesize strongerBiasAgainstUp=_strongerBiasAgainstUp;
@property (readonly, nonatomic) double visibilityOffset; // @synthesize visibilityOffset=_visibilityOffset;

- (void).cxx_destruct;
- (void)assertInitialVerticalOffset:(double)arg1 fromTopOfCaret:(double)arg2;
- (id)init;
- (struct CGPoint)pointForGestureState:(long long)arg1 point:(struct CGPoint)arg2 translation:(struct CGPoint)arg3;
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)updateVisibilityOffsetForGestureState:(long long)arg1 touchType:(long long)arg2 locationInSceneReferenceSpace:(struct CGPoint)arg3 majorRadius:(double)arg4;
- (void)updateWeightedPointWithGestureState:(long long)arg1 location:(struct CGPoint)arg2;
- (void)updateWithTouches:(id)arg1 gestureState:(long long)arg2;

@end

