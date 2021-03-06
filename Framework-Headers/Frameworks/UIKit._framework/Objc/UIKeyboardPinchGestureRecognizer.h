//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableDictionary, NSMutableSet;
@protocol UIKeyboardPinchGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer
{
    id<UIKeyboardPinchGestureRecognizerDelegate> _pinchDelegate;
    BOOL _pinchDetected;
    double _initialPinchSeparation;
    double _pinchSeparationValues[4];
    NSMutableSet *_activeTouches;
    NSMutableDictionary *_initialTouchPoints;
    double _beginPinchTimestamp;
}

@property (readonly, nonatomic) double initialPinchSeparation; // @synthesize initialPinchSeparation=_initialPinchSeparation;
@property (nonatomic) id<UIKeyboardPinchGestureRecognizerDelegate> pinchDelegate; // @synthesize pinchDelegate=_pinchDelegate;
@property (readonly, nonatomic) BOOL pinchDetected; // @synthesize pinchDetected=_pinchDetected;

- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (double)finalProgressForInitialProgress:(double)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)interpretTouchesForSplit;
- (void)reset;
- (void)resetPinchCalculations;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

